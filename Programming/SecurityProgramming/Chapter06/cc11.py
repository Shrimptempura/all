import random
import string

LETTERS = string.ascii_uppercase + string.ascii_lowercase
print(LETTERS)

key = random.randint(0,52)
print("Secret Key:", key)

plaintext = "gsqIFwHM dFCuFoAAwBu KwHv dMHvCB ZoBuIous"
print(f'plaintext: {plaintext}')

output = ""
for x in plaintext:
    if x in LETTERS:
        cipherIndex = (LETTERS.find(x) + key) % 26
        output += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
    else:
        output += x
        
print(f'ciphertext: {output}')

plaintext =''
for y in output:
    if y in LETTERS:
        plaintext += LETTERS[(LETTERS.find(y) - key) % len(LETTERS)]
    else:
        plaintext += y
print("decrypted plaintext: %s" % plaintext)

def caesarEncryption(msg, key, LETTERS):
    output = ''
    for x in msg:
        if x in LETTERS:
            output += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
        else:
            output += x
    return output


def caesarDecryption(msg, key, LETTERS):
    plaintext = ''
    for y in msg:
        if y in LETTERS:
            plaintext += LETTERS[(LETTERS.find(y) - key) % len(LETTERS)]
        else:
            plaintext += y
    return plaintext