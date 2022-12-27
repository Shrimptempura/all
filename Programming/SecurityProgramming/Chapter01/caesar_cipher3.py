import random
import string
# Encryption

LETTERS = string.ascii_uppercase + string.ascii_lowercase # + "!@#$%^&*()~"
print(LETTERS)      # upper alphabet

# key = 3     # 가정
key = random.randrange(0, len(LETTERS))
plaintext = "HELLO XYZ hello"
# plaintext = plaintext.upper()
ciphertext = ""

for x in plaintext:
    if x in LETTERS:
        ciphertext += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
    
    else:
        ciphertext += x

print(ciphertext)


# 복호화 Decryption
output = ""

for y in ciphertext:
    if y in LETTERS:
        output += LETTERS[(LETTERS.find(y) - key) % len(LETTERS)]
    else:
        output += y
        
print(output)