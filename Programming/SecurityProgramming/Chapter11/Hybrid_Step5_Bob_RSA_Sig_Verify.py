from Crypto.PublicKey import RSA

rsa = RSA.generate(2048)
priKey = rsa.exportKey()
print(priKey)

pubKey = rsa.publickey()
print(pubKey)
print(pubKey.exportKey())