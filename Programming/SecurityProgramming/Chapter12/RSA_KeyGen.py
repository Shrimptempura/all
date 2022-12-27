from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP

### Bob : private Key & public key Generation
rsa = RSA.generate(2048)
priKey = rsa.exportKey()
# priKey = rsa.exportKey('PEM')
print(priKey)
pubKey = rsa.publickey()
print(pubKey.exportKey())

### Alice : private Key & public key Generation
rsa = RSA.generate(2048)
priKey_Alice = rsa.exportKey()
print("Alice's privteKey: ", priKey_Alice)
pubKey_Alice = rsa.publickey()
print("Alice's publicKey: ", pubKey_Alice.exportKey())


### BoB (Public Key) --> Alice
### Alice --> Bob 아래와 같은 메시지를 암호화 해서 전송
### 반대로 한다면(밥이 엘리스에게)
### rsa_algorithm = PKCS1_OAEP.new(pubKey_Alice)
message = 'Hello World!!!'

rsa_algorithm = PKCS1_OAEP.new(pubKey)
output = rsa_algorithm.encrypt(message.encode('utf-8'))
    # or message = b'Hello World!!!'
print("Ciphertext: ", output)
print("Ciphertext: ", output.hex())


### Alice : output --> Bob
### Bob : 복호화 과정을 수행...
ciphertext = output
privateKey = RSA.importKey(priKey)      # Bob의 개인키... 이용해서 복호화 수행
rsa_algorithm2 = PKCS1_OAEP.new(privateKey)
output2 = rsa_algorithm2.decrypt(ciphertext)
print("Plaintext: ", output2.decode())