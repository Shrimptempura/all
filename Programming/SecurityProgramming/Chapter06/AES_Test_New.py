from Crypto import Random
from Crypto.Cipher import AES


def aesEncrypt(message, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.encrypt(message)


def aesDecrypt(encrypted, key, iv):
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.decrypt(encrypted)


def main():
    BLOCK_SIZE = 16
    KEY_SIZE = 32
    message = b"Information Security & Programming. Test Message!...."
    # b or 25행중 선택
    key = Random.new().read(KEY_SIZE)
    iv = Random.new().read(BLOCK_SIZE)
    print("key: ", key.hex())
    print("key length: %d bits" % (len(key)*8))
    encrypted = aesEncrypt(message, key, iv)
    # encrypted = aesEncrypt(message.encode('utf-8'), key, iv)
    print("Encrypted(bin): ", encrypted)
    print("Encrypted(hex): ", encrypted.hex())
    decrypted = aesDecrypt(encrypted, key, iv)
    print("Decrypted: ", decrypted.decode())
    print("==================")
    decrypted = aesDecrypt(message, key, iv)
    print('deryption : ', decrypted.decode())

if __name__ == "__main__":
    main()
