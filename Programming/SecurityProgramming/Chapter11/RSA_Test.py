from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Signature import PKCS1_v1_5
from Crypto.Hash import SHA512


def rsaEncrypt(message, pubKey):
    rsa_Encrypt = PKCS1_OAEP.new(pubKey)
    encrypted = rsa_Encrypt.encrypt(message)
    return encrypted


def rsaDecrypt(encrypted, priKey):
    privateKey = RSA.importKey(priKey)
    rsa_Decrypt = PKCS1_OAEP.new(privateKey)
    decrypted = rsa_Decrypt.decrypt(encrypted)
    return decrypted


def gen_RSA_Key(userName):
    privateKey = RSA.generate(2048)
    priKey = privateKey.exportKey('PEM')  # priKey : private key
    print("%s's private key: %s" % (userName, priKey))
    pubKey = privateKey.publickey()  # pubKey : public key
    print("%s's public key: %s" % (userName, pubKey))
    print("%s's public key: %s" % (userName, pubKey.exportKey('PEM')))
    return priKey, pubKey


def rsaDigSignGen(message, priKey):
    hashMsgObj = SHA512.new()
    hashMsgObj.update(message)
    privateKey = RSA.importKey(priKey)
    signGenFuncObj = PKCS1_v1_5.new(privateKey)
    signMsg = signGenFuncObj.sign(hashMsgObj)
    return signMsg


def rsaDigSignVerify(signMsg, message, pubKey):
    hashMsgObj = SHA512.new(message)   # hashMsgObj = SHA512.new(); hashMsgObj.update(message)
    signVerifyFuncObj = PKCS1_v1_5.new(pubKey)
    if signVerifyFuncObj.verify(hashMsgObj, signMsg):
        return True
    else:
        return False


def main():
    message = 'Information security and Python Programming, Test Message!!!'
    print("Message: ", message)

    print("\n**RSA Key Pairs(priKey, pubKey) Generation")
    alice_priKey, alice_pubKey = gen_RSA_Key("Alice")
    bob_priKey, bob_pubKey = gen_RSA_Key("Bob")

    print("\n**Message Encryption using RSA Key(Receiver's pubKey)")
    encrypted = rsaEncrypt(message.encode("utf-8"), bob_pubKey)
    print("Encrypted(CipherText): ", encrypted.hex())
    print("Length of CipherText: ", len(encrypted))

    print("\n**Ciphertext Decryption using RSA Key(Receiver's priKey)")
    decrypted = rsaDecrypt(encrypted, bob_priKey)
    print("Decrypted(PlainText): ", decrypted.decode())

    signMsg = rsaDigSignGen(decrypted, alice_priKey)
    print("Digital Signature: ", signMsg.hex())
    print("Size of Signature: ", len(signMsg))

    if rsaDigSignVerify(signMsg, decrypted, alice_pubKey):
        print("Digital Signature Verification OK!!!")
    else:
        print("Digital Signature Verification Fail!!!")

if __name__ == "__main__":
    main()


# ## generate Session Key using Random function
# sessionKey = Random.new().read(16)
# print("Generated Session Key: %s" % sessionKey)
# ## AES encrypt using sessionKey & iv
# iv = Random.new().read(AES.block_size)
# print("IV, plaintext : %s, %s" %(iv, plaintext))
# aesAlice = AES.new(sessionKey, AES.MODE_CFB, iv)
# encMSG = iv + aesAlice.encrypt(plaintext)

## generate RSA public Key and private Key (for Bob : Receiver)
# rsa  = RSA.generate(2048)
# priKey = rsa.exportKey('PEM')  # priKey : private key
# print("private key: %s" % priKey)
# pubKey = rsa.publickey()  # pubKey : public key
# print("public key: %s" % pubKey)
# print(pubKey.exportKey('PEM'))

# rsaAlice = PKCS1_OAEP.new(pubKey)
# encSSK = rsaAlice.encrypt(sessionKey)
# print("encrypted session key: %s" % encSSK)
# print(len(encSSK))  # length 256 bytes
# outputAlice = encSSK + encMSG  # concatenate encrypted SSK + encrypted MSG
# print("output: %s" % outputAlice)

###### sending output to Bob...

## decrypt session key
# SESSION_KEY_SIZE = len(encSSK)
# priKey = RSA.importKey(priKey)
# rsaBob = PKCS1_OAEP.new(priKey)
# sessionKey = rsaBob.decrypt(outputAlice[:SESSION_KEY_SIZE])
# print("Decrypted Session Key: %s" % sessionKey)
#
# ## decrypt message using session key
# ciphertext = outputAlice[SESSION_KEY_SIZE:]
# iv2 = ciphertext[:AES.block_size]  # AES.block_size == 16
# aesBob = AES.new(sessionKey, AES.MODE_CFB, iv2) # decrypt using session key
# plaintext = aesBob.decrypt(ciphertext[AES.block_size:])
# print("Plaintext: %s" % plaintext)