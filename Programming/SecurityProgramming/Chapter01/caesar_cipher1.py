import string
import random
LETTERS = string.ascii_uppercase + string.ascii_lowercase

print(LETTERS)

key = random.randint(0, 52)
print(f'Secret Key: {key}')

plaintext = 'gsqIFwHM dFCuFoAAwBu KwHv dMHvCB ZoBuIous'
print(f'plaintext: {plaintext}')

output = ""
for x in plaintext:
    if x in LETTERS:
        cipherIndex = (LETTERS.find(x) + key) % 52
        output += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
    else:
        output += x
        
print(f'ciphertext: {output}')
