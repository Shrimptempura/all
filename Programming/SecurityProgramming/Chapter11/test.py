from RSA_Simple import modinv, tot_phi

n = 1040399
e = 96427
bobPublicKey = (n, e)

d = modinv(e, tot_phi(n))

bobPrivateKey = (n, d)
ciphertext = 363989
decrypt = pow(ciphertext, d, n)

print(chr(decrypt))     # 숫자가 나와서 chr로







def RSAEncryptSimple(msg, publicKey):     # publicKey = (n, e)
    # n = publicKey[0]
    # e = publickey[1]
    n, e = publicKey
    for val in msg:
        c = pow(msg, e, n)
    return c

def RSAEncryptSimpleString(msg, publicKey):     # publicKey = (n, e)
    output = []
    # n = publicKey[0]
    # e = publickey[1]
    n, e = publicKey
    for val in msg:
        output.append(pow(ord(val), e, n))
    return output

def RSADecryptSimple(ciphertext, privateKey):       # privateKey = (n, d)
    n, d = privateKey
    p = pow(ciphertext, d, n)
    return p

def RSADecryptSimpleString(ciphertext, privateKey):     # privateKey = (n, d)
    output = []
    n, d = privateKey
    for val in ciphertext:
        output.append(chr(pow(val, d, n)))
    return "".join(output)
    
# Alice
bobPublicKey = (n, e)
inputMsg = 'abcdefg'
msg = ord(inputMsg)

# RSA encryption
# c = (msg**e) % n

ciphertext = RSAEncryptSimpleString(inputMsg, bobPublicKey)

print("ciphertext: ", ciphertext)

# Bob
bobPrivateKey = (n, d)
n = bobPrivateKey[0]
d = bobPrivateKey[1]

plaintext = RSADecryptSimpleString(ciphertext, bobPrivateKey)

print("Output plaintext : ", plaintext)