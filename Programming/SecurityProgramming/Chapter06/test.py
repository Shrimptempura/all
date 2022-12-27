from AES_Test_New import aesEncrypt, aesDecrypt # 추가
from Crypto.Hash import SHA512  # 추가

def gen_Key_IV(seed):
    hash = SHA512.new()
    hash.update(seed.encode('utf-8'))
    key = hash.digest()
    key = key[:32] # AES 키 사이즈 : 32 바이트(32*8 = 256비트) 값을 해시 함수를 변형 적용하여 생성함
    print("key:", key.hex())
    iv = hash.digest()
    iv = iv[:16]   # 일반적으로 별도로 설정해야 하지만, 여기서는 key 값의 압 16 바이트(16*8 = 128비트)로 설정하는 방식을 이용함
    print("IV:", iv.hex())
    return key, iv

def main():
    seed = "2022-2 Security Programming"
    msg = "Python Programming"
    key, iv = gen_Key_IV(seed)
    ciphertext = aesEncrypt(msg.encode(), key, iv)
    print("ciphertext ", ciphertext.hex())
    plaintext = aesDecrypt(ciphertext, key, iv)
    print("plaintext ", plaintext.decode())
    
if __name__ == "__main__":
    main()