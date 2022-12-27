# 내가 구현하는 PBE_Enc_Dec_Updated
from Crypto.Cipher import AES
from Crypto import Random
from Crypto.Hash import SHA512
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Signature import PKCS1_v1_5
import binascii
# from Crypto.Hash import SHA256

BLOCK_SIZE = 16
KEY_SIZE = 32
SALT_SIZE = 16

def gen_RSA_Key(userName):
    privateKey = RSA.generate(2048)
    priKey = privateKey.exportKey('PEM')
    print("%s private Key: %s" % (userName, priKey))
    pubKey = privateKey.publickey()
    print("%s public Key: %s" % (userName, pubKey.exportKey('PEM')))
    return priKey, pubKey


def rsaEncrypt(message, pubKey):
    rsaCipher = PKCS1_OAEP.new(pubKey)
    ciphertext = rsaCipher.encrypt(message)
    return ciphertext


def rsaDecrypt(encrypted, priKey):
    privateKey = RSA.importKey(priKey)
    rsaCipher = PKCS1_OAEP.new(privateKey)
    plaintext = rsaCipher.decrypt(encrypted)
    return plaintext


def rsaDigSignGen(message, priKey):
    hashMsgObj = SHA512.new(message)   #hashMsgObj = SHA512.new();  #hashMsgObj.update(message)
    privateKey = RSA.importKey(priKey)
    signGenObj = PKCS1_v1_5.new(privateKey)
    signMsg = signGenObj.sign(hashMsgObj)
    return signMsg


def rsaDigSignVerify(signMsg, message, pubKey):
    hashMsgObj = SHA512.new(message)
    signVerifyObj = PKCS1_v1_5.new(pubKey)
    if signVerifyObj.verify(hashMsgObj, signMsg):
        return True
    else:
        return False

def aesEncrypt(message, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.encrypt(message)


def aesDecrypt(encrypted, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.decrypt(encrypted)

def genKEK(salt, password):
    keyKEK = ""
    message = salt + password
    hashObj = SHA512.new()
    hashObj.update(message)
    keyKEK = hashObj.digest()
    # keyKEK = SHA512.new(salt + password).digest()
    print("key KEK: ", keyKEK.hex())

    return keyKEK
    
    
def genCEK():
    keyCEK = ""
    keyCEK = Random.new().read(KEY_SIZE)
    print("Generated keyCEK : %s" % keyCEK.hex())
    
    return keyCEK
    
    
def encCEK(keyCEK, keyKEK, iv):
    encryptedCEK = ""
    encryptedCEK = aesEncrypt(keyCEK, keyKEK[:32], iv)
    print("encrypted key CEK: ", encryptedCEK.hex())
    
    return encryptedCEK
    
    
def inputPassword():
    password = input("Please input password: ").encode('utf-8')
    print("Alice's password: %s" % password)
    return password


def inputMessage():
    message = input("Input Message for PBE:").encode('utf-8')
    print("Alice's Message: %s" % message)
    return message


def storeUSB(salt, encryptedCEK, iv, ciphertext):
    filename = input("USB Stored Filename(ex: PBE_Store.enc):")
    f = open(filename, 'wt')
    
    hpk = binascii.hexlify(salt) + '$*****$'.encode('utf-8') \
        + binascii.hexlify(encryptedCEK) + '$*****$'.encode('utf8') \
        + binascii.hexlify(iv) + '$*****$'.encode('utf8') \
        + binascii.hexlify(ciphertext)
    # 구별자..('$*****$')
    # 과제 힌트 변형방식3가지, 헤쉬, 패스워드 체크, rsa
    # pw check 방식은 salt, encryptedCEK, iv, ciphertext만 적용
    # KEK에 관한 이야기는 없다. 그 정보는 storeUSBd에 없다.
    # 만약 password chcek가 필요하다 이러면 여기에 password 체크까지 추가 한다.
    
    f.write(hpk.decode('utf-8'))
    f.close()
    
    return

def readUSB():
    salt = ""
    encryptedCEK = ""
    iv = ""
    ciphertext = ""
    
    filename = input("USB Stored Filename(ex: PBE_Store.enc): ")
    f = open(filename, 'r')
    f.seek(0)
    salt, encryptedCEK, iv, ciphertext = f.readline().split('$*****$')
    
    salt = bytearray.fromhex(salt)
    encryptedCEK = bytearray.fromhex(encryptedCEK)
    iv = bytearray.fromhex(iv)
    ciphertext = bytearray.fromhex(ciphertext)
    
    print("salt: %s %d " % (salt, len(salt)))
    print("encryptedCEK: %s" % encryptedCEK)
    print("iv: %s %d" % (iv, len(iv)))
    print("ciphertext: %s" % ciphertext)
    f.close()
    
    return salt, encryptedCEK, iv, ciphertext

def PBE_Encryption(pubkey):
    ciphertext = ''
    password = inputPassword()
    salt = Random.new().read(SALT_SIZE)     ## 저장이 필요한 부분
    print("PBE_Encryption salt: %s" % salt.hex())
    
    iv = Random.new().read(BLOCK_SIZE)      ## 저장이 필요한 부분
    print("PBE_Encryption iv: %s" % iv.hex())
    
    keyKEK = genKEK(salt, password)
    keyCEK = genCEK()
    
    message = inputMessage()
    
    # 메시지의 무결성을 체크하기 위해서 아래 한줄 추가
    message = SHA512.new(message).digest() + message # 12/5 과제내용
    
    ciphertext = aesEncrypt(message, keyCEK, iv)    ## 저장이 필요한 부분
    # encryptedCEK = encCEK(keyCEK, keyKEK, iv)       ## 저장이 필요한 부분
    # RSA 암호와 과정을 이용하자 alice_pubkey
    encryptedCEK = rsaEncrypt(keyCEK, pubkey)
        
    storeUSB(salt, encryptedCEK, iv, ciphertext)

    
    return ciphertext
    
    
def PBE_Decryption(priKey):
    plaintext = ''
    password = inputPassword()
    salt, encryptedCEK, iv, ciphertext = readUSB()
    keyKEK = genKEK(salt, password)
    
    ### 변경
    # keyCEK = decCEK(encryptedCEK, keyKEK, iv)
    keyKEK_keyCEK = rsaDecrypt(encryptedCEK, priKey)       # keyCEK = keyKEK + keyCEK
    unlocked_keyKEK = keyKEK_keyCEK[:64]
    unlocked_keyCEK = keyKEK_keyCEK[64:]
    
    plaintext = aesDecrypt(ciphertext, keyKEK_keyCEK, iv)
    
    ### 변수값 변경 과제
    # plaintextWithHAsh = aesDecrypt(ciphertext, keyCEK, iv)
    plaintextWithHash = aesDecrypt(ciphertext, unlocked_keyCEK, iv) # 변경
    
    ### plaintest = SH512 값 + message
    hashValue = plaintextWithHAsh[:64]
    plaintext = plaintextWithHAsh[64:]
    
    if (keyKEK == unlocked_keyKEK):
        print("Correct Password!!!")
    else:
        print("Inccorect Passward!!!")
    
    
    if (hashValue == SHA512.new(plaintext).digest()):
        print("Integrity Check OK!!!")
        return plaintext
    else:
        print("Integrity Fail")
        return b"Error"
    
    return plaintext


def encCEK(keyCEK, keyKEK, iv):
    encCEK = ""
    encCEK = aesEncrypt(keyCEK, keyKEK[:32], iv)

    return encCEK


def decCEK(encryptedCEK, keyKEK, iv):
    keyCEK = ""
    keyCEK = aesDecrypt(encryptedCEK, keyKEK[:32], iv)
    
    return keyCEK

def main():
    alice_prikey, alice_pubkey = gen_RSA_Key('alice')
    ciphertext = PBE_Encryption(alice_pubkey)
    print("Ciphertext : ", ciphertext)
    plaintext = PBE_Decryption(alice_prikey)
    print("Plaintext:", plaintext.decode())


if "__main__" == __name__:
    main()
    

# message part에 대한 무결성 체크, pw check 과제
# 다음시간은 공개키..


# usb저장할때 KEY KEK까지 저장해서.. 비교
# 아니면 이거 사용 


# 시험은 