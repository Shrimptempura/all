import string

LETTERS = string.ascii_uppercase + string.ascii_lowercase
print(LETTERS)

import random
key = random.randint(0,52)
print("Secret Key:", key)

# ### encryption
# plaintext = ''
# print("plaintext: %s" % plaintext)
# output =''
# for x in plaintext:
#     if x in LETTERS:
#         output += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
#     else:
#         output += x
# print("ciphertext: %s" % output)


# ### decryption
# plaintext =''
# for y in output:
#     if y in LETTERS:
#         plaintext += LETTERS[(LETTERS.find(y) - key) % len(LETTERS)]
#     else:
#         plaintext += y
# print("decrypted plaintext: %s" % plaintext)



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


if __name__ == "__main__":
    inputMsg = input("ciphertext:")
    inputKey = int(input("Key:"))
    LETTERS = string.ascii_uppercase + string.ascii_lowercase
    outputMsg = caesarDecryption(inputMsg, inputKey, LETTERS)
    print(outputMsg)
    for bfKey in range(len(LETTERS)):
        print("Key:", bfKey, "MSG:", caesarDecryption(outputMsg, bfKey, LETTERS))