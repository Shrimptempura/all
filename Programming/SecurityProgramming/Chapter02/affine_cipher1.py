#  affine cipher
# 수업용
import random
import string
from traceback import print_tb
LETTERS = string.ascii_uppercase + string.ascii_lowercase

# input : plaintext, key, LETTERS
# output : ciphertext
# function name : caesarEncrypt

def gcd(a, b):
    while (b != 0):
        temp = a % b
        a = b
        b = temp
    return abs(a)

def modInv(a, n):
    temp = n
    b, c = 1, 0
    while n:
        q, r = divmod(a, n)
        a, n, b, c = n, r, c, b - q * c
    if a == 1:
        return (temp + b) % temp
    raise ValueError("Not have Multiplicative Inverse!!!")
    
        
        

def affineEncrypt(plaintext, key1, key2, LETTERS):
    ciphertext = ""
    for x in plaintext:
        if x in LETTERS:
            ciphertext += LETTERS[((LETTERS.find(x) * key1) + key2) % len(LETTERS)]
        else:
            ciphertext += x
            
    return ciphertext

# input : ciphertext, key, LETTERS
# output : output
# functionname : caesarDecrypt


# devryption에는 GCD
def affineDecrypt(ciphertext, key1, key2, LETTERS):
    output = ""
    for y in ciphertext:
        if y in LETTERS:
            output += LETTERS[(LETTERS.find(y) - key2) * modInv(key1, len(LETTERS)) % len(LETTERS)] #e
        else:
            output += y
            
    return output

# def caesarDecryptionBruteForce(ciphertext, LETTERS):
#     output = ""
#     for key in range(0, len(LETTERS)):
#         output = caesarDecrypt(ciphertext, key, LETTERS)
#         print(f'key : {key}, output : {output}')
        
# print(LETTERS)

a = 7
n = 26

# key1 = random.randrange(0, len(LETTERS))
# key2 = random.randrange(0, len(LETTERS))
key1 = 15
key2 = 30
n = len(LETTERS)
print(f'key1_mul_inv : {modInv(a, n)}')



# print(f'key : {key}')

plaintext = 'chill chill so good'
ciphertext = affineEncrypt(plaintext, key1, key2, LETTERS)
print(ciphertext)

output = 

# ciphertext = caesarEncrypt(plaintext, key, LETTERS)
# print(ciphertext)

# output = caesarDecrypt(ciphertext, key, LETTERS)
# print(output)

# caesarDecryptionBruteForce(ciphertext, LETTERS)
