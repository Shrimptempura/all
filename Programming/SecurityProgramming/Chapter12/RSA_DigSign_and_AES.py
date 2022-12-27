from Crypto.Hash import SHA512
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Signature import PKCS1_v1_5
from Crypto import Random
from Crypto.Cipher import AES


def aesEncrypt(message, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.encrypt(message)


def aesDecrypt(encrypted, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.decrypt(encrypted)


def aesEncryptWithIV(message, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return iv + cipher.encrypt(message)    # 수정됨...


def aesDecryptWithIV(encrypted, key):
    BLOCK_SIZE = 16  # 추가...
    iv = encrypted[:BLOCK_SIZE]  # 수정됨...
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.decrypt(encrypted[BLOCK_SIZE:])   # 수정됨...


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


def main():

    message = b'Information security and Python Programming, Test Message!!!'
    # message = b'I want go fucking home!'
    print("Message: ", message.decode())
    print("Message length(bytes): ", len(message))

    #alice & bob RSA key pairs Generation
    alice_priKey, alice_pubKey = gen_RSA_Key('alice')
    bob_priKey, bob_pubKey = gen_RSA_Key('bob')

    #alice : message --> digital signature generation
    signMsg = rsaDigSignGen(message, alice_priKey)
    print("Digital Signature on input Message: ", signMsg.hex())
    print("Digital Signature length(bytes): ", len(signMsg))

    signMsgPlusMessage = signMsg + message    # 디지털 서명 + 메시지 연접된 데이터 값 생성
    print("Digital Signature + message: ", signMsgPlusMessage)
    print("Digital Signature + message length (bytes): ", len(signMsgPlusMessage))


    BLOCK_SIZE = 16
    KEY_SIZE = 32
    key = Random.new().read(KEY_SIZE)
    iv = Random.new().read(BLOCK_SIZE)
    print("key(bytes): ", key.hex())
    #
    # 디지털 서명 + 메시지에 대한 AES 암호화 과정 수행 (AES 암호화 과정에서 IV 값 포함하여 전송)
    encryptedSignMsgPlusMessage = aesEncryptWithIV(signMsgPlusMessage, key, iv)   # signMsg (256바이트) + message에 대한 암호화 과정 수햄
    print("AES_Encrypted SignMsgPlusMessage(bin): ", encryptedSignMsgPlusMessage)
    print("AES_Encrypted SignMsgPlusMessage(hex): ", encryptedSignMsgPlusMessage.hex())
    print("AES_Encrypted SignMsgP + Message length(bytes): ", len(encryptedSignMsgPlusMessage))  # RSA 전자서명 256 바이트 + 메시지 길이 75 바이트 = 347 바이트

    # AES 암호화 과정에 사용된 key에 대한 RSA 암호화 과정 수행
    encryptedAESKey = rsaEncrypt(key, bob_pubKey)
    print("RSA_Encrypted AES_KEY(bin): ", encryptedAESKey)
    print("RSA_Encrypted AES_KEY(hex): ", encryptedAESKey.hex())
    print("RSA_Encrypted AES_KEY length(bytes): ", len(encryptedAESKey)) # RSA 암호화 과정 수행 결과 256 바이트 생성

    # RSA 방식을 이용하여 암호화한 AES_Key값 + (디지털 서명 + 메시지에 대한 AES 암호화) 결과값 연접하여 전송
    finalOutput = encryptedAESKey + encryptedSignMsgPlusMessage
    print("Alice's Final Output(RSA_Encrypted_AESKey + AES_Encrypted_SignMsgPlusMessage): ", finalOutput)
    print("Alice's Final Output length(RSA_Encrypted_AESKey + AES_Encrypted_SignMsgPlusMessage) (bytes): ", len(finalOutput))
    """
    Client-Server Network(TCP/IP) Data Sending 
    """

    # Network : from alice (encrypted --> sending) to bob
    #bob : decrypt ... using bob's privateKey...
    #bob : "encrypted" data + "signMSG (digital signature)" data
    print("\n\nReceiver Bob!!!!")
    receiverEncryptedAESKey = finalOutput[:256]  # len(encryptedAESKey)에 해당하는 값
    print("수신한 내용 : RSA 암호화 방식을 이용, 암호화된 AES Key 내용: ", receiverEncryptedAESKey)
    receiverEncryptedSignMsgPlugMessage = finalOutput[256:]
    print("수신한 내용 : 메시지에 대한 RSA 전자서명 결과값 + 메시지 에 대해 AES로 암호화된 값: ", receiverEncryptedSignMsgPlugMessage)

    decryptedKey = rsaDecrypt(receiverEncryptedAESKey, bob_priKey)
    print("RSA_Decrypt(ciphertext, bob_priKey): ", decryptedKey)
    decryptedSignMsgPlugMessage = aesDecryptWithIV(receiverEncryptedSignMsgPlugMessage, decryptedKey)
    decryptedSignMsg = decryptedSignMsgPlugMessage[:256]   # len(signMsg)에 해당하는 값
    decryptedMessage = decryptedSignMsgPlugMessage[256:]
    print("Received Message: ", decryptedMessage.decode())
    ### alice 의 인증서 안에 있는 alice의 공개키 획득...
    if rsaDigSignVerify(decryptedSignMsg, decryptedMessage, alice_pubKey):
        print("Digital Signature on Decryption Message: Correct. Verification OK!!!")
    else:
        print("Digital Signature Verification Fail!!!")


if __name__ == "__main__":
    main()
    
# 오픈북
# 퍼블릭키 프라브키 주고 finaloutput만 주고 복호화해봐라 110행...
# 어떠어떠.. output
# 공개키 주고 메시지는 안주고 여기까지 아웃풋을 주고 복호화해봐라
# 여러분들 각자 프라이브 개인키 생성하고 어떠한 방법으로 생성해라....   교수님이 직접 복호화..(아마 안할듯 시간이 너무 든다.)
# 시그니처가 뒤로 갔을때 아웃풋 결과..
# 메시지가 동일. iv가 동일하다면 암호문은 동일.. 어떤 아웃풋이 나올까? ex 603byte 업로드/ 키를 지정..