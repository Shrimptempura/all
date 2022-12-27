key = 'Secur'
key2 = 'ZZZZZ'
msg = 'Hello'

# key의 길이만큼 출력됨

def str_xor(s1, s2):
    return ''.join( [chr(ord(c1)^ord(c2)) for (c1, c2) in zip(s1, s2)])

def str_xor_2ndVer(s1, s2):
    output = []
    for (c1, c2) in zip(s1, s2):
        print(f"c1 : {c1}, c2 : {c2}")
        print(f"ord(c1) ^ ord(c2) : {(ord(c1) ^ ord(c2))}")
        # print(f"c1 : %s, c2 : %s" % (c1, c2))
        # print(f"ord(c1) ^ ord(c2) : %d" % (ord(c1) ^ ord(c2)))
        output += chr(ord(c1) ^ ord(c2))
    return "".join(output).encode()

encoded = str_xor(msg, key)
print("Ciphertext: %s" % encoded.encode())

encoded_2ndVer = str_xor_2ndVer(msg, key)
print("Ciphertext: %s" % encoded_2ndVer)

decoded = str_xor(encoded, key)
# decoded = str_xor(encoded, key2)
print("Plaintext: %s" % decoded)