from Crypto.Signature import pkcs1_15
from Crypto.Hash import SHA
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP

# decryption signature
f = open('./Hybrid/signature.txt','rb')
signature = f.read(); f.close()
privatekey = RSA.importKey(open('./Hybrid/bobprivatekey.txt','rb').read())
cipherrsa = PKCS1_OAEP.new(privatekey)
sig = cipherrsa.decrypt(signature[:256])    ### ~ 2048 bit [Signature part]
sig = sig + cipherrsa.decrypt(signature[256:])

# signature verification
f = open('./Hybrid/plaintext_Bob.txt','rb')
plaintext = f.read(); f.close()
publickey = RSA.importKey(open('./Hybrid/received_alicepublickey.txt','rb').read())
myhash = SHA.new(plaintext)

try:
    pkcs1_15.new(publickey).verify(myhash, sig)
    print("Signature Verification Result : True")
except (ValueError, TypeError):
    print("Signature Verification Result : False")