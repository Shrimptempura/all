from Crypto.PublicKey import RSA
from Crypto.Cipher import AES, PKCS1_OAEP  # RSA 암호화 복호화 과정에서 사용
from Crypto.Hash import SHA512
from Crypto.Signature import PKCS1_v1_5  # RSA 디지털 서명 생성/검증 과정에서 사용

# Alice : private Key & public key generation
rsa_a = RSA.generate(2048)
priKey_a = rsa_a.exportKey()
print("Alice's privateKey: ", priKey_a)
pubKey_a = rsa_a.public_key()
print("Alice's publicKey: ", pubKey_a.exportKey())

# Bob : private Key & public key generation
rsa = RSA.generate(2048)
priKey_b = rsa.exportKey('PEM')
print(priKey_b)
pubKey_b = rsa.public_key()
print(pubKey_b)  # type : RSA key
print(pubKey_b.exportKey())  # type : bytes

message = b'Hello world!!!'
hashMsgObj = SHA512.new(message)
print(hashMsgObj.digest().hex())
print(len(hashMsgObj.digest()))

privateKey = RSA.importKey(priKey_a)
signGenObj = PKCS1_v1_5.new(privateKey)
signMsg = signGenObj.sign(hashMsgObj)
print(signMsg)
print('signMsg length : ', len(signMsg))
output = signMsg + message

# Alice --> Bob
# Bob이 검증 과정을 수행
signVerifyObj = PKCS1_v1_5.new(pubKey_a)
# signVerifyObj = PKCS1_v1_5.new(pubKey_b)  # 잘못 주입...
recvSignMsg = output[:256]
recvMsg = output[256:]
msgHash = SHA512.new(recvMsg)
if signVerifyObj.verify(msgHash, recvSignMsg):
    print('Verification OK!!!')
    print('Received Message: ', recvMsg)
else:
    print('Verification Fail!!!')