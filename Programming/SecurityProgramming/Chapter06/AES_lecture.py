from cmath import pi
from Crypto.Cipher import AES
from Crypto import Random
from Crypto import SHA512

msg = "Hello"
key = b"01234567890123456789012345678912"
iv = Random.new().read(AES.block_size)

def aesEncrypt(message, key, iv):
    cipherObject = AES.new(key, AES.MODE_OFB, iv)
    return cipherObject.encrypt(message.encode())

def aesDecrypt(message, key, iv):
    decryptObject = AES.new(key, AES.MODE_OFB, iv)
    return decryptObject.decrypt(output).decode()


print(iv)
print(iv.hex())
print(AES.key_size)
print(AES.block_size)

cipherObject = AES.new(key, AES.MODE_OFB, iv)
output = cipherObject.encrypt(msg.encode('utf-8')) # 괄호가 비어도 default utf-8이다.
print(output)

#####
### output, key, iv

# decryptObject = AES.new(key, AES.MODE_OFB, iv)
# plaintext = decryptObject.decrypt(output)
# print(plaintext.decode())


msg = "Hello"
token = "World"
hash = SHA512.new()
hash.update(token.encode())
print(hash.digest())
key = hash.digest()[:32]
iv = hash.digest()[32:16]
print(key)
print(iv)

cipherObject = AES.new(key, AES.MODE_OFB, iv)
output = iv + cipherObject.encrypt(msg.encode())
print(output)