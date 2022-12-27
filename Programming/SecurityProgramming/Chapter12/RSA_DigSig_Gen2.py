from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP    # RSA 암호화/복호화 과정에서 사용
from Crypto.Hash import SHA512
from Crypto.Signature import PKCS1_v1_5     # RSA 디지털 서명 생성/검증 과정에서 사용


### Alice : private Key & public Key Generation
rsa = RSA.generate(2048)
priKey_Alice = rsa.exportKey()
print("Alice's privateKey: ", priKey_Alice)
pubKey_Alice = rsa.publickey()
print("Alice's publicKey: ", pubKey_Alice.exportKey())

### Bob : private Key & public key Generation
rsa = RSA.generate(2048)
priKey_Bob = rsa.exportKey()
print(priKey_Bob)
pubKey_Bob = rsa.publickey()
print(pubKey_Bob.exportKey())

message = b"Hello world!!!"
hashMsgObj = SHA512.new(message)
print(hashMsgObj.digest())
print(hashMsgObj.digest().hex())
print(len(hashMsgObj.digest()))

### file...
privateKey = RSA.importKey(priKey_Alice)
signGenObj = PKCS1_v1_5.new(privateKey)
signMsg = signGenObj.sign(hashMsgObj)
print(signMsg)
print("signMsg Length: ", len(signMsg))

output = signMsg + message      # signMsg가 앞일까 message가 앞일까? --> signMsg가 앞이다. 2개의 벨류중에 어떤것이 
                                # 고정벨류인지 생각해본다. length = 256byte일정..
                                

### Alice --> Bob : sending "output" file... / contenst...
### Bob이 검증과정을 수행한다.
signVerifyObj = PKCS1_v1_5.new(pubKey_Alice)
# signVerifyObj = PKCS1_v1_5.new(pubKey_Bob)  # 잘못주입.. 공격 발생..

# output : signMsg (0~255bytes) + message (256~)
receivedSignMsg = output[:256]
receivedMessage = output[256:]
msg_hash = SHA512.new(receivedMessage)
if signVerifyObj.verify(msg_hash, receivedSignMsg):
    print("Verificatoin OK!!!")
    print("Received Message: ", receivedMessage)
else:
    print("Verification Fail!!!")