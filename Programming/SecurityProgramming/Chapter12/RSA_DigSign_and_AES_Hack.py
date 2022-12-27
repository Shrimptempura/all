from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Cipher import AES
from Crypto.Hash import SHA512
from Crypto.Signature import PKCS1_v1_5

def rsaDecrypt(encrypted, priKey):
    privateKey = RSA.importKey(priKey)
    rsaCipher = PKCS1_OAEP.new(privateKey)
    plaintext = rsaCipher.decrypt(encrypted)
    return plaintext


def aesDecryptWithIV(encrypted, key):
    BLOCK_SIZE = 16  # 추가...
    iv = encrypted[:BLOCK_SIZE]  # 수정됨...
    cipher = AES.new(key, AES.MODE_OFB, iv)
    return cipher.decrypt(encrypted[BLOCK_SIZE:])   # 수정됨...


def rsaDigSignVerify(signMsg, message, pubKey):
    hashMsgObj = SHA512.new(message)
    signVerifyObj = PKCS1_v1_5.new(pubKey)
    if signVerifyObj.verify(hashMsgObj, signMsg):
        return True
    else:
        return False

#Information
alice_private_Key = b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAxXUkAuSut5ToPcMzyjSwPjgDnsv9tlq7hHFhBTLf1l50YMcL\n8cfjMGHXXfo37ajIXmGkJGA5e/ok1P5uIrsHEeW1F05DmsmYJ1kbPmj4X8Qk3Qvs\n/K5A90uD5AM1yv8qwFKHzU+loWkcnk/iTcx+LjuVnRjw2AjgAbAs96iIgup4tvpq\n60LN4I4XsnpcQPjtvsLKZtRI4zmanIoodmGLylgcuibJJ2ykW8MrQD4L+XS989hi\niB8ypwhTqy4zVQxXHF0Q2bHE5lcBXJl0kDWtfGqBOqCsKojCx8ADyZpjJGf+NUtG\nuqGTwBNRMJn7W1QS3cciYuEvXQAqxc1Z1c/A7QIDAQABAoIBAElLlUV5q507qgWb\nGvNZIX7G/hkI8bGp9mdQSspKOypwv1RZLobeQufnubEJu479kvrt1acnDM+HZ/qk\nQy+jKxmqodD33UJsyIz6l5FQF7o8rc5bqemVqUnifx+5TVN/6lefiwdcJEhJIzVk\nw8VLPh9dQMkiw+v9R2F5CwgXSC0Hw0GgJ/5YDcbYEwAXLQRZCLvUrh2pKuzyZgaP\nC/Q7ij5SGac2DJjryaLECMnR3QkodWV24Fg0yjbQqtst+RpAkeglRTpi4KrzSbbk\ng/rEVNd4U6FMXpiT9yAvbHV+2rnTNliiGVQMzFtTkAF+HUW3GztM5UgtgJCuO/kj\ntF06rIUCgYEA3usEMqIkDnYfQrxqFmXtEfb4wme9ROOQoFqjmgjMv+yU6py3Vs0o\n3CWDNF2exspeFAF1ptcPGmcsi3qSLayrNRyHoacm6Z1nZipQ1o48d2EAuaQzBhwM\nJI+EnSq3HZNxkmbcj+5WCTQL3oxSXfHQVQlD6jv7WzVTQn8bReo7ITMCgYEA4sLY\nI0agJrwFhDbahM+bYoA/Xc9tTOcdyU20/Hz4uyK9L+7yU6rA2yMyFsBUlodaR9l8\nFfWkR3tr7EPr5sJNPfvX8gwvFRoGC6AUypeG9CDPVAu97pK3bN/XVrMkTabJ3Ry7\nSCpG+EWhEDIfMooZ6381oAFn01pxHh6wgSnF1V8CgYBEFSNDE6JPiGQjzcfY72ho\nhDWVqnl0AMy7LPOqp+Vg+LDCtvqH2EESe6KG69EChewV0BxOyIAkYD6KmvTqXkIs\nBnqmNJb94sUhvurRnL969nVyPWQYCZjr0al/Fvy2W8HkJOZYT0KXrP2zCshdSO2I\nCzxi3c73HGJBfPCnedJ1YQKBgQDG6+wVDfih4iDougH5rfF+eEieL7+PTdN4ax2Q\nvMSpzTCvYurbcJhb5EUlZjUOE9Cj5OqQjPs+5ctn6LGBrgN6k3n9UKjg1wJkolp6\n2nA9qqaV8PL93WDhNn++A8qd/+lnebPk+4lkdBh1j7KEcFeKmf5dzb3Zz6YZqQxn\nUlDE+wKBgQDRYGh/rxprYcrStkutzKat6q8BwLcuywiX5Nyz3dtsnoA4FhGDmwGD\ndlHrnvmg/h6B/u+ljaXOYbn69ThKZAtyvHU1NcOe2fQNimUz6IRQj73FQMXtrinh\nTJD+HdjRkyaR/Pt3hcNkcRW4nA7nzMPtfrIY/0npCY5QOVIQDBeAHw==\n-----END RSA PRIVATE KEY-----'
alice_public_Key = b'-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxXUkAuSut5ToPcMzyjSw\nPjgDnsv9tlq7hHFhBTLf1l50YMcL8cfjMGHXXfo37ajIXmGkJGA5e/ok1P5uIrsH\nEeW1F05DmsmYJ1kbPmj4X8Qk3Qvs/K5A90uD5AM1yv8qwFKHzU+loWkcnk/iTcx+\nLjuVnRjw2AjgAbAs96iIgup4tvpq60LN4I4XsnpcQPjtvsLKZtRI4zmanIoodmGL\nylgcuibJJ2ykW8MrQD4L+XS989hiiB8ypwhTqy4zVQxXHF0Q2bHE5lcBXJl0kDWt\nfGqBOqCsKojCx8ADyZpjJGf+NUtGuqGTwBNRMJn7W1QS3cciYuEvXQAqxc1Z1c/A\n7QIDAQAB\n-----END PUBLIC KEY-----'
bob_private_Key = b'-----BEGIN RSA PRIVATE KEY-----\nMIIEowIBAAKCAQEAp0lCOZiknSfY8jQ79tiZlcQDg27BdjJyGDrFgws6qAFZfu2I\nRzlHZBkMz98GZfrTyCzJCb3FGVt0S10O0f3/XmX+dKklpgPuXZZbsq5w8QJp//Nm\ndDZacrIE5Ol3+5hrSDuCdUfnFUbU/S2XKgYnEyepPmSMdzUm+jziEd82O0KrKC3F\n3NZALwoTw+9ZkJAd3DFVtepc5bxG7XQghwHed0okfyJnWhgrtVHVBP+SXhojGsn8\nEI8IUfDXGSP4b4LtCfFlMxNjKXD/PqtHiHlJuxB5k7ZlisI61SSwRO+OIIEpxqkr\nN6PPlCPEhcncosxhnX5/TMU/DfDMEH7EbSQiIQIDAQABAoIBAAQ5YXiYmgSFZHEm\nQELhEIzDdra/iddRGggyWLkwxAYIxbCisRuiTsMQbl5D4pKZ6TXfaqKqNfNIV8kM\n5CJJlISW1PxvZn3ZENBwaueZx8yQK+rMg8BovHMzu1On8RGLdV8NMKPDQWqsP5XW\njEABiIRPbrK+gX0DnLS6K5e5sBICOBjM3ys5vXauNA87ccYb53NyoZ87IS4Ob3kN\nlSkRiKnfMRdPLQ9jzctDDzlE814GzB7tAUj4FldGUmyxTc5Sc3+Ic3MIaBxq5yiL\nQ83MX3jyCJ9VpRKNCYTFpLfMuy5AK6W10Cmdh5GiNtPalHUk7V90G5J4Nwjh/kpz\njO6bW+kCgYEAvhkvzZSHERcK/Zci8Tz72Xudd4wVNDWDIT4hiIXr3KQeCPscJCp8\n6GmolF9XbWW0we7+M2PCFMHxMTnR3tEs9nGiyBYcny7Ume9tkox4T/lGsbrCJfXp\noPVPP6E1XeAiqz447lUw9kj4I8r2rRNtsUkF+A/dDDINV60OnVDR2VkCgYEA4UeJ\nqeonNHFnQWwMbkYhw7upG7Hxtr8YQDKIm2w9ZiO2kJSh0/NQ51ux1x0rhFLY88R/\nqTLc8/h4M5H6D0/TxumvKkY7StKGB9f20opkXRRf8JdXdegruCCWRKg4p3wphvaC\neQh5R19GjPn0YKkCS3zUaa3n1KKH++jKOOoxrgkCgYBch635Bz7nVqwG27YqbmC4\nb68qLYl0rEdzuuZfqbAw6cGk5XXBNN0v0542+mF34nWloEsjgH9L00svhtFc/7w/\nCPkPI5Qy93yMoTpYhv9ZDiEXCazPBW/+5Oj6M+HiG+NELzlO6TC38LS312dSv445\nKS46nJ4f/Yz5DEd804YRoQKBgQCy40SsuXQiT77nk24Xjvc232i8xkOjkwEl0Trq\n+DuVRNyu2Gfcz4S6AvUoVVB+Be+jOrEI4YvU68Q/ZzaDPCd195CR6C0jECNATT0B\nGMXzp787ZGIeDZvR3YaVxGMglBbBxjP6+kCb7UsvnThyHSLmYJynwmGqVtnWrpcO\nNOH4SQKBgDH07fNI1X8byjzDNGBeTiW2yb+CsBr86Jf1z3M2qY2P3HibK7zWgOvn\n4LQyC6WO0ESyFlZasfut73carbQ78mc0IbTC8WrtAbClXgwAS026m/6VTL3w8SUc\nFLWyGvLbeuK4bPAsGz74CCYULkGXZqFhFlZKuT7+8TtP/a/xHK0S\n-----END RSA PRIVATE KEY-----'
bob_public_Key = b'-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAp0lCOZiknSfY8jQ79tiZ\nlcQDg27BdjJyGDrFgws6qAFZfu2IRzlHZBkMz98GZfrTyCzJCb3FGVt0S10O0f3/\nXmX+dKklpgPuXZZbsq5w8QJp//NmdDZacrIE5Ol3+5hrSDuCdUfnFUbU/S2XKgYn\nEyepPmSMdzUm+jziEd82O0KrKC3F3NZALwoTw+9ZkJAd3DFVtepc5bxG7XQghwHe\nd0okfyJnWhgrtVHVBP+SXhojGsn8EI8IUfDXGSP4b4LtCfFlMxNjKXD/PqtHiHlJ\nuxB5k7ZlisI61SSwRO+OIIEpxqkrN6PPlCPEhcncosxhnX5/TMU/DfDMEH7EbSQi\nIQIDAQAB\n-----END PUBLIC KEY-----'

key = b'ABCDEFGHIJKLMNOPQRSTUVWXYZ123456'
IV = b'abcdefghijklmnop'
Alice_Final_Output = b'\x983\xe2\xf6\xe0Z\x1a\x82\xd8]\xd8%j@M+\xc0\xd9\xba\'\xd5\x8f\x95\xed*\x1e.\xf4\xb6r\xd9\xb9\xbf\x88\x13\rD\xbc\xf9b\xfb\xe2\x19f\xfa\x88\xddE{ln$\x0ef\x82\x11\xd4G\xe7\xfd\xf9=\xcb\xd4q#\x96xS3\xe6\xbbY\x8f\xf7\xf7+\xf0\x14 hs\xf9r%_\xf3e\xa2c\xe4\x01,"6\x04`\xc8\xf3\x93\xfa\xf3d\x8b\xb6\x84M\xd0\x13N\xf7}!\xc4\xb9@|\xa9D\xb0o\xe5;\x10\xe8\xb5\xa2\xd7;\x01\x97[\xbb._\x04kB\xa9$\xab\xbc\x03\xdc_\x95\x01i\x9e\xf4\xa1\xdb^;L\xa0j\x05\x9f\xf7\xf31\x91\xaa\xe4\x891\xa2\xd9\xab\xcb\xd9\x16\x15\xcd;=\x86l\xe5(\xf7\xfc\xe5\\d`\x1c]\x0c1o\xf3*\x96\xe8\x0f\xbf\xcf0Q_\x9d\x19\x7f\xa9\xd1\xd3\xe6\xfd\x1b\x1c\x97g\x1a\xe1\\\xac\x86},\x81:\xce\x17\x91\xbe\x1d\xd8\xf0\xecaZ\x03\x00\x8d\xbbd\xf5\'\xf9\x9c+\x07,U\xb3\x88\x17eN\x96^\x8f\x81\x1aabcdefghijklmnop~\xd7\n\'\xfe\xc7\xe5\xbdZ7u\xd9d\xd5}\x91$;\xf8\\\x81\x10\xcfF\xf9d\x90\x97\xb4\x8a\xd0\x81\x05*\x1c\rhW\xb4u\xce\xa2N/\x19#F\xf6\xdd](\xa2g"\x92\xdd\xe0\xaa5\x11(\x05U\x17]S\x9c\t\x95i\x1c\xc3\x13x<T#\x0f\xa6\xf1\x90\x11z+\xcf\xe5\x1c4\x03\xe3c/S\xfd\xa2J\x99\tB\xdd\xad2\xc2O(\x94\xcaX\x8d\xe1\xb6M.\x89C\x12\xb0\x00\xd1?\x96!\x96V\xfc\xc1\x85i\xf1\x8a\x17\x14\xaf\x00b\xbf=\x12O\xf8S\x97\xa6R\xfe\xe6b\xe2=o^\xd0\xcf\xdbi\xbdjf4Fn\xe0\x1cb,O \xf1\tt]\xa5\x1f\x03\x8cqrv\xbd\x81\xf7\xea\xff\xa3\xe9`\x8d\xac\xb0 1\x85\xbaOKd`*\xe0\xad^\xbc\xddU\x91\xa2\xe9h\xc5\x02\xddn\xe4t\x19p|\x7f\x9a\x1f"\x00\xdej]\xf0j\xa6\xb9$\xae\x19\x1e\xafU\xd1>y\xb7a\x98\xe0Kql\xba^j$\xcc\x90\xc1Q#\xe8\x19\x07O\xbe\xe0(K\xe2\xe3\x0cq|%\xacxY\xa0?\xfd\xc7\xa1\xa8=}\x8d\\\xf9)\x14\xdczg9\x1c\x03R\xb2\xbd\x92\xa2\xc9\xa4\xa1i"\xc0h\x9e\x83\x01M\x10\x94Q\x08\x15tIdY\x10\x1dKp\x99\xea\x9c\xa2\x06V\xd5jz\xc4\x005\x00'

#Receiver Bob!!!!
print("Receiver Bob!!!!\n")
receiverEncryptedAESKey = Alice_Final_Output[:256]  # len(encryptedAESKey)에 해당하는 값
print("수신한 내용 : RSA 암호화 방식을 이용, 암호화된 AES Key 내용: ", receiverEncryptedAESKey)
receiverEncryptedSignMsgPlugMessage = Alice_Final_Output[256:]
print("수신한 내용 : 메시지에 대한 RSA 전자서명 결과값 + 메시지 에 대해 AES로 암호화된 값: ", receiverEncryptedSignMsgPlugMessage)

#bob_priKey = RSA.importKey(bob_private_Key) # 파일로 부터 개인키 읽어들이기
#cipherrsa = PKCS1_OAEP.new(bob_priKey) # 개인키를 이용한 RSA cipher 객체 생성
#decryptedKey = cipherrsa.decrypt(receiverEncryptedAESKey) # RSA 복호화 과정 수행
decryptedKey = rsaDecrypt(receiverEncryptedAESKey, bob_private_Key) # RSA 복호화 과정 수행

print("RSA_Decrypt(ciphertext, bob_priKey): ", decryptedKey)
decryptedSignMsgPlugMessage = aesDecryptWithIV(receiverEncryptedSignMsgPlugMessage, decryptedKey)
decryptedSignMsg = decryptedSignMsgPlugMessage[:256]  # len(signMsg)에 해당하는 값
decryptedMessage = decryptedSignMsgPlugMessage[256:]
print("Received Message: ", decryptedMessage.decode())
### alice 의 인증서 안에 있는 alice의 공개키 획득...

alice_pubKey = RSA.importKey(alice_public_Key)
if rsaDigSignVerify(decryptedSignMsg, decryptedMessage, alice_pubKey):
    print("Digital Signature on Decryption Message: Correct. Verification OK!!!")
else:
    print("Digital Signature Verification Fail!!!")
