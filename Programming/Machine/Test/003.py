import sys

from Crypto.Hash import SHA512
import binascii
from Crypto.Cipher import AES
from Crypto import Random

BLOCK_SIZE = 16
KEY_SIZE = 32
SALT_SIZE = 16

def aesEncrypt(message, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.encrypt(message)


def aesDecrypt(encrypted, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.decrypt(encrypted)


def inputPassword():
    password = input("Input Password for PBE:").encode('utf-8')
    print("Alice's password: %s" % password)
    return password


def inputMessage():
    message = input("Input Message for PBE:").encode('utf-8')
    print("Alice's message: %s" % message)
    return message


def genKEK(salt, password):
    message = salt + password
    hash_Func = SHA512.new()
    hash_Func.update(message)
    keyKEK = hash_Func.digest()
    print("key KEK: ", keyKEK.hex())
    return keyKEK      # return keyKEK


def genCEK():
    keyCEK = Random.new().read(KEY_SIZE)
    print("key CEK: ", keyCEK.hex())
    return keyCEK  # return keyCEK


def encCEK(keyCEK, keyKEK, iv):
    encryptedCEK = aesEncrypt(keyCEK, keyKEK[:32], iv)    # iv + encrypted CEK
    """
    encryptedCEK = aesEncrypt(keyCEK) 
    """
    print("encrypted key CEK: ", encryptedCEK.hex())
    return encryptedCEK


def storeUSB(salt, encryptedCEK, iv, ciphertext):
    filename = input("USB Stored Filename(ex: PBE_Store.enc):")
    if filename == "":
        filename = "PBE_Store.enc"
    f = open(filename, 'wt')
    """
    salt + encrypted CEK + iv
    """
    hpk = binascii.hexlify(salt) + '$*****$'.encode('utf8') \
          + binascii.hexlify(encryptedCEK) + '$*****$'.encode('utf8') \
          + binascii.hexlify(iv) + '$*****$'.encode('utf8') \
          + binascii.hexlify(ciphertext)
    ##
    print("salt & encrypted CEK & iv :", hpk)
    f.write(hpk.decode('utf-8'))
    f.close()


def storeUSB_PasswordCheck(salt, encryptedCEK, iv, ciphertext, keyKEK):   # 추가(수정) 구현
    filename = input("USB Stored Filename(ex: PBE_Store.enc):")
    if filename == "":
        filename = "PBE_Store.enc"
    f = open(filename, 'wt')
    """
    salt + encrypted CEK + iv + keyKEK
    """
    hpk = binascii.hexlify(salt) + '$*****$'.encode('utf8') \
          + binascii.hexlify(encryptedCEK) + '$*****$'.encode('utf8') \
          + binascii.hexlify(iv) + '$*****$'.encode('utf8') \
          + binascii.hexlify(ciphertext) + '$*****$'.encode('utf8') \
          + binascii.hexlify(keyKEK)   # 추가...
    ##
    print("salt & encrypted CEK & iv & keyKEK :", hpk)
    f.write(hpk.decode('utf-8'))
    f.close()


def readUSB():
    filename = input("USB Stored Filename(ex: PBE_Store.enc):")
    if filename == "":
        filename = "PBE_Store.enc"
    f = open(filename, 'r')
    sf = f.readline()
    f.seek(0)
    salt, encryptedCEK, iv, ciphertext = f.readline().split('$*****$')
    """
    convert hexdecimal string to byte !!!
    """
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

def readUSB_PasswordCheck():   # 추가(수정) 구현
    filename = input("USB Stored Filename(ex: PBE_Store.enc):")
    if filename == "":
        filename = "PBE_Store.enc"
    f = open(filename, 'r')
    sf = f.readline()
    f.seek(0)
    salt, encryptedCEK, iv, ciphertext, keyKEK = f.readline().split('$*****$')
    """
    convert hexdecimal string to byte !!!
    """
    salt = bytearray.fromhex(salt)
    encryptedCEK = bytearray.fromhex(encryptedCEK)
    iv = bytearray.fromhex(iv)
    ciphertext = bytearray.fromhex(ciphertext)
    keyKEK = bytearray.fromhex(keyKEK)

    print("salt: %s %d " % (salt, len(salt)))
    print("encryptedCEK: %s" % encryptedCEK)
    print("iv: %s %d" % (iv, len(iv)))
    print("ciphertext: %s" % ciphertext)
    print("keyKEK: %s" % keyKEK)
    f.close()
    return salt, encryptedCEK, iv, ciphertext, keyKEK


def decCEK(encryptedCEK, keyKEK, iv):
    keyCEK = aesDecrypt(encryptedCEK, keyKEK[:32], iv)
    """
    keyCEK = aesDecrypt(encryptedCEK) 
    """
    print("decrypted key CEK: ", keyCEK.hex())
    return keyCEK


def PBE_Encryption():
    salt = Random.new().read(SALT_SIZE)
    print("PBE_Encryption salt: %s" % salt.hex())
    iv = Random.new().read(BLOCK_SIZE)
    print("PBE_Encryption iv: %s" % iv.hex())
    print("PBE_Encryption iv (length) : %d" % len(iv))

    alicePassword = inputPassword()
    keyKEK = genKEK(salt, alicePassword)

    message = inputMessage()
    keyCEK = genCEK()

    encryptedCEK = encCEK(keyCEK, keyKEK, iv)  # keyCEK --> 암호화하고자하는 message, keyKEY --> AES 암호화에 사용할 key, iv

    ciphertext = aesEncrypt(message, keyCEK, iv)
    print("AES Encrypted ciphertext: %s" % ciphertext.hex())
    #storeUSB(salt, encryptedCEK, iv, ciphertext)
    storeUSB_PasswordCheck(salt, encryptedCEK, iv, ciphertext, keyKEK)  # 수정...
    return ciphertext


def PBE_Decryption():
    count = 0
    alicePassword = inputPassword()
    #salt, encryptedCEK, iv, ciphertext = readUSB()
    salt, encryptedCEK, iv, ciphertext, keyKEK = readUSB_PasswordCheck()  # 수정...
    while (keyKEK != genKEK(salt, alicePassword)):   # 수정(추가)...
        count += 1
        print("%d/5 times left. Wrong Password!!! Please Input Correct Password" % count)
        alicePassword = inputPassword()
        if count >= 5:
            print("Exit!!!")
            sys.exit()
    decryptedCEK = decCEK(encryptedCEK, keyKEK, iv)
    plaintext = aesDecrypt(ciphertext, decryptedCEK, iv)
    print("AES Decrypted plaintext: %s" % plaintext)
    return plaintext


def main():
    print("\n*** PBE_Encryption ***\n")
    ciphertext = PBE_Encryption()
    print("Encrypted Message: %s" % ciphertext)
    print("\n*** PBE_Decryption ***\n")
    plaintext = PBE_Decryption()
    print("Final Message: %s" % plaintext.decode('utf-8'))


if "__main__" == __name__:
    main()