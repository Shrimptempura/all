import random
import string
LETTERS = string.ascii_uppercase + string.ascii_lowercase

# input : plaintext, key, LETTERS
# output : ciphertext
# function name : caesarEncrypt

def caesarEncrypt(plaintext, key, LETTERS):
    ciphertext = ""
    for x in plaintext:
        if x in LETTERS:
            ciphertext += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
        else:
            ciphertext += x
            
    return ciphertext

# input : ciphertext, key, LETTERS
# output : output
# functionname : caesarDecrypt

def caesarDecrypt(ciphertext, key, LETTERS):
    output = ""
    for y in ciphertext:
        if y in LETTERS:
            output += LETTERS[(LETTERS.find(y) - key) % len(LETTERS)]
        else:
            output += y
            
    return output

def caesarDecryptionBruteForce(ciphertext, LETTERS):
    output = ""
    for key in range(0, len(LETTERS)):
        output = caesarDecrypt(ciphertext, key, LETTERS)
        print(f'key : {key}, output : {output}')
        
        

print(LETTERS)

key = random.randrange(0, len(LETTERS))
print(f'key : {key}')

plaintext = 'chill chill so good'
ciphertext = ""

ciphertext = caesarEncrypt(plaintext, key, LETTERS)
print(ciphertext)

output = caesarDecrypt(ciphertext, key, LETTERS)
print(output)

caesarDecryptionBruteForce(ciphertext, LETTERS)

