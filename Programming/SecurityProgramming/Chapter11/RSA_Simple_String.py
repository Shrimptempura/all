import random

def gcd(a, b):
    while (b != 0):
        temp = a % b
        a = b
        b = temp
    return abs(a)


def isCoPrime(a, b):
    if gcd(a, b) == 1:
        return True
    else:
        return False


def modinv(a, n):
    temp = n
    b, c = 1, 0
    while n:
        q, r = divmod(a, n)
        a, n, b, c = n, r, c, b - q*c
    # at this point a is the gcd of the original inputs
    if a == 1:
        return (temp + b) % temp
    raise ValueError("Not invertible")


def getCompleteResidue(m):
    return list(range(0,m))


def getReducedResidue(m):
    reducedResidueList = []
    for x in range(1,m):
        if gcd(x, m) == 1:
            reducedResidueList.append(x)
    return reducedResidueList


def eularPhi(m):
    return len(getReducedResidue(m))


def tot_list(n):
    phi = []
    x = 1
    while x < n:
        if gcd(x, n) == 1:
            phi += [x]
        x += 1
    return phi


def tot_phi(n):
    return len(tot_list(n))


def isPrime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True


def primesInRange(x, y):
    prime_list = []
    for n in range(x, y):
        isPrime = True

        for num in range(2, n):
            if n % num == 0:
                isPrime = False

        if isPrime:
            prime_list.append(n)
    return prime_list


def findGenerators(n):
    s = set(range(1, n))
    results = []
    for a in s:
        g = set()
        for x in s:
            g.add((a**x) % n)
        if g == s:
            results.append(a)
    return results


def genRSAKeys(p, q):
    if isPrime(p) & isPrime(q):
        n = p*q
        e = random.choice([x for x in range(1, (p-1)*(q-1)) if isCoPrime(x, (p-1)*(q-1))])
        d = modinv(e, (p-1)*(q-1))
        publicKey = (n, e)
        privateKey = (n, d)
        return publicKey, privateKey
    else:
        print("P and Q : Select Prime Numbers!!!")
        return False


def RSAEncryptSimpleString(msg, publicKey):
    output = []
    n, e = publicKey
    # n = bobPublicKey[0]
    # e = bobPublicKey[1]
    for val in msg:
        output.append(pow(ord(val), e, n))
    return output


def RSADecryptSimpleString(ciphertext, privateKey):
    output = []
    n, d = privateKey
    # n = bobPrivateKey[0]
    # d = bobPrivateKey[1]
    for val in ciphertext:
        output.append(chr(pow(val, d, n)))
    return "".join(output)


def main():
    x = pow(2,10)-100
    y = pow(2,10)
    primeList = primesInRange(x, y)
    p = primeList.pop(-1)
    q = primeList.pop(-2)
    print("primeNumber p: ", p)
    print("primeNumber q: ", q)
    bobPublicKey, bobPrivateKey = genRSAKeys(p, q)
    print("bob's Public Key (n, e): ", bobPublicKey)
    print("bob's Private Key (n, d): ", bobPrivateKey)

    ### RSAEncrypt
    msg = "test: Hello World!!"
    print("message: ", msg)
    ciphertext = RSAEncryptSimpleString(msg, bobPublicKey)
    print("ciphertext: ", ciphertext)

    ### RSADecrypt
    decrypt = RSADecryptSimpleString(ciphertext, bobPrivateKey)
    print("plaintext: ", decrypt)



# Bob??? ????????? (n,e) ??? ????????? (d) ??????....
# 1. Bob??? ????????? (n,e) ??????

#p=929 #p:???????????????????????????(>=1024bits)
#q = 11 # q : ?????? ????????? ?????? ?????? (>=1024 bits) n=p*q #n????????????????????????e???????????????
#e = 17 # 1<e<(p-1)(q-1) & (p-1)(q-1)??? coPrime ?????? print("public key (n,e): %d, %d??? %(n, e))
# 2. Bob??? ????????? (d) ??????
# e*d mod (p-1)(q-1) == 1??? ???????????? d ??? ??????
#d = modinv(e, (p-1)*(q-1)) # e*d mod (p-1)(q-1) == 1 print("private key (n,d): %d, %d??? % (n, d)

# Alice (?????????) : Bob??? ????????? (n, e) ???????????? ???????????? ?????? ?????? ??? ?????? ?????? ??? ???????????? ??????!!!
#msg = 4 # ??????
#ciphertext = pow(msg, e, n) # ????????? : msg ^ e mod n print("ciphertext:", ciphertext)
### Alice --> CipherText --> Bob
# Bob (?????????) : Bob ???????????? ?????? ?????? ????????? (n, d)??? ???????????? ????????? ???????????? ?????? ????????? ?????? ??????-->?????? ??????!
#decrypt = pow(ciphertext, d, n) # ????????? : ciphertext ^ d mod n print("plaintext:", decrypt)

    ### RSAEncrypt
    #
    # msg = 4
    # print("message: ", msg)
    # n, e = bobPublicKey
    # #n = bobPublicKey[0]
    # #e = bobPublicKey[1]
    # ciphertext = pow(msg, e, n)
    # print("ciphertext: ", ciphertext)
    #
    # ### RSADecrypt
    # n, d = bobPrivateKey
    # #n = bobPrivateKey[0]
    # #d = bobPrivateKey[1]
    # decrypt = pow(ciphertext, d, n)
    # print("plaintext: ", decrypt)


if __name__ =="__main__":
    main()