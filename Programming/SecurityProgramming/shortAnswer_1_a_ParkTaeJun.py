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
alice_public_Key = b'-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAwVvOnca5CJpcYttWH1vJ\noN4Qrt0m88sr3GpcLTZO0kpYKtM8KEb1V1uNmkjTZN8grHsPox/OF22sz6lrs9t3\na2NtSkapvJmJ9mTIAJhZ+SzwkpGSearS/2vMOl5VeKAF3K4bAaP8WmFQuJO/DSnQ\nMt462LLxERG9nYELzueP71bALFHb4fx7PJHhv1LQD2clHGTgxUqKZbgxieMifbbg\nilxAYZoYJoARF1vbQvg0OBybZratiTszWCP6luvNLSNjxxrv+H6O2ydQsjQTLrxg\n1wzIa+ehC61jLYl0F7xk1txVVAN6N5wTlex6UjvGwDLRxzBsrSKC/zpMlLzEy+6j\nawIDAQAB\n-----END PUBLIC KEY-----'
bob_private_Key = b'-----BEGIN RSA PRIVATE KEY-----\nMIIEpAIBAAKCAQEAwsIO9ocTnSjbqBoDprPJJuq20bvvuhfbb410a6lAcAPA09Z/\n9iIGENIZ5HW6MnOQObQvsfUkTFY/Jpl7uGJ+PPIU3HijRgeAItrKPf1/XWrisJg+\nK1nIhrFIOL0I3tToknwNHmliMpj+7rOXRhZqCJ34l6hnUNa3HevUlwRXJMmN8Fwe\nIZBWTv+WjJmCbAG19uaGTCK2llGJNWthePXq7BeYwCHoOtGVLi43QFeRzUdRmEOQ\nd4iXdo+Sf2ynrPV5bPjlXvJ1fOVIaA+2yhAVKFMby4J0DlpzT9nz308R2Hr5KaDI\nmx6b79/R2HoJGmgajuQeKXbBmig9Uj3V3ZHdXQIDAQABAoIBAAVqfR0I85guvzEF\nDC3yGPlulIfvmIKN0EnhXqfxzHtw90dM00EmgBGurg6m4XcutIeORbdGsGw5B8eM\nhB7ECmuqdb8N0ciMQ9l0SSSBLK4N32D20t/EvulT+8SsKRd9Rzxvm7PJTXRHwesk\nbmQCEo/LyNJ62eirF+uKl95dPgklTzkr9pAlwXWObME8jUf+thMrWPp94MzgOSVt\nk32gWk5W5bNmGaa3/FbnnP6hORuPMheLfs1t+fTUqZk3Nbg7vS9+Zg2XpSoRnrz8\nJZt+boAVoE+30wDRIjtP8d8mmIIqdiRxc7yLSpJpXBnteD0Mys778zPIXp2F6y/i\nByVTC2cCgYEAw+gS5O5m1Rgoc9r+Qrb0syuTz/Nxy9x08DLfG3xCyobivp3qJvS4\nicCS44BPIRac94JdYamC/tnA2TJ7yHCnNpHJ43pviZ6xPIz3mmCtye5TONqNDUfB\nMaVhWUR/PTkkuKLcqYFNAiPh6icjFQaqhD1AE2moLdk+XJ2hFj55FqMCgYEA/n/L\n9vRUMQjIn6+qxJT0j1j+jVpTmy+1r3acuChoIIJBIyJ02c+GY7oG8EQKcZY+zbnP\nqM91JHlSs7LySSe7siSivsA+RHjjGDO+nvSUpuDtFCBY0hKAYxq/y2dD51aCYqxT\n3RUJ+1J/e8YwX0ANrENY3cRupycrGEmv6wvce/8CgYEAu2AOKk7npiusDVvJU1Ag\nbfphL0W+cukSI+fUQzqvu3wWBZGOsuHgW0kIdXZ0uMYjLgzPeiiitVTawiMqB8XP\n+T6p5dxmMC/Lf4mpDUwpDPnZOYi33prh6rUuji4YsRslxz9mZO3aFRDy9H2obWTp\n1P+seKTXCbs+jWDrARaRxJcCgYEA7d72/iiaNIaYNiEUBM+Q0hcFPYtKj8cFEy5T\nBxHFWXVFephvDVIZs0ahy5pdBJPAubrNrGPTgrbfJNTB/rxjg/sYHiBDUu6GnA1p\nQtspwdyD2wbs3dSrKXZMA8rOPgCut5mIfSB4Bu6x9zdj6PNOlE8SVZ2PKy7B6d6d\nzZx1hXMCgYB7vQ29iir5FBCsfO0NqcxnIFpFnF8CbWk6agOVpnvh/bBGRfz7cH8P\nC1Mm1ccSuB0SW1jWqYH5TebvWjC/DhF10OifCBR1znaR35LLNbrbk7l6w2EewX9V\nxwpH1O8C0mpKMp0I6+Y6jFcJTp0fRa2OCG4X6MUsbrnON0msKeehSg==\n-----END RSA PRIVATE KEY-----'
bob_public_Key = b'-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAp0lCOZiknSfY8jQ79tiZ\nlcQDg27BdjJyGDrFgws6qAFZfu2IRzlHZBkMz98GZfrTyCzJCb3FGVt0S10O0f3/\nXmX+dKklpgPuXZZbsq5w8QJp//NmdDZacrIE5Ol3+5hrSDuCdUfnFUbU/S2XKgYn\nEyepPmSMdzUm+jziEd82O0KrKC3F3NZALwoTw+9ZkJAd3DFVtepc5bxG7XQghwHe\nd0okfyJnWhgrtVHVBP+SXhojGsn8EI8IUfDXGSP4b4LtCfFlMxNjKXD/PqtHiHlJ\nuxB5k7ZlisI61SSwRO+OIIEpxqkrN6PPlCPEhcncosxhnX5/TMU/DfDMEH7EbSQi\nIQIDAQAB\n-----END PUBLIC KEY-----'

key = b'ABCDEFGHIJKLMNOPQRSTUVWXYZ123456'
IV = b'abcdefghijklmnop'
Alice_Final_Output = b'5\x8f#~!\x03\xea\xdd\xcd\xde\xa9/\xcd\xa5w\x1b8\xd7\xdc\xae\x9a#\x99\x9bo\'FXz?\xb4\xad9\x0b\xce\x94\x9c\xb7LG\xaf%\xe3D\xe5\xbe&He{n\xa3\t\xa6\x8f&wQJ\xfd~h\x9c\xc6\xf8\xc1\x12!:Y\xccw\xf2\x8b\xbc\xff/\xbe\x12`\x03\x9c3\x8d\x1bz\xbe<FS\x1fC\xe8\x1f\xd1\x9c\xbe5mGE\xe8\x81\x0e\xdf\t\x94\x84\xcauh%\xcb\xb5x\xdc\xd5]M\xcd^$\xb3\x06\x16(\xd8F\x89\xe1\x08\xa3\x93\x0b\x87@\xa63\xbe\x14\xd1\x15+\xf3\xf7\xfb\xe8H\x12\xc9\xfe\xbcXXh\xb5\x19\xf4F\xa7@o\x19\xa4\xee3\xce\x9e\xa6<\xb7\xc1&p\xe2I\xe1-[\xc5\xe1\x8d\xbe\xfc\xdd\xe0\xc8\xbao\xe1+q\x98fZ\xd3T\xbb\x11\xb5\xa6`\xc0L_\xf1\x89\x11\x8d\xc3<\x94\x17/\xdc$\xb1h\xdd\xf9\xbb\xd4\xab\xe2^\xd6k\x97\x96!A#Y\xedC~(^YL~m4B\xd6\xd2\xb8\xf6\x15\xae\x1e\x10\xf9\x07\'\xd8e\x12\x02p\x93\xd8K\xf9\xc1#u\xff\x16\xa4?\x80\xa9R\xe6%\x12\xf4\xb1#\xa1\xdc\xa3y\x9e\xf2\xb7X2x\x02\x95\xbc7\xb8#s\x99\xf6\x1c#\xceZ\xa1!=\x81\x809y\x04\x91\xf9\xba\xf3k\xae\xb6oY\xd2l\x92\xd4mC|:\xf8\xd2eq\x9a|\x80\xd19\x1e\xaf\x91\x98\xc9\xfa7\xe8MG\xcc\x15\x1d\xb8Kb"`\x0c}3z\x15\xf8\x17\xa8\x95\xfeao\x9b\xdf\x90\xc9\x82{\xb1\xfb=\x03|\x1e\x8d\xc5E\xa2\'\n\xeeJ\xcd\xfe=\xa3 D\x96*\xcd\xd1\xfd\xca\xfe\xee|\x10zu\x03O\x95\xd8ba\x19W\x92\xcd:\xf12d\x0e\x07\xbf\xa4f\x8av\xfd\xd8\x93\x08l\xfd\xc4c\xe9w[\xfc}\x041c\xca\x05\xe6\xe1\x01\x9e\xb2\xf6\xd7\\\xa0x\x1e\xf3j\n\xdb/\x86\x7f\xf3#;^v\x94\xba\xf4sV\x87\x9cL\xb9|"c\x00\x8b^V\xa1\xa2#\xff\x9f\xcf\xa5\x98\x83\x88\xf2s\xe6\xebQ#\x13\xe4ud\xcbCl\x1bK\xf6]\xa0\xe3\x86\x0f\x9b\x18\x9c\\\xec\xa3\r\x13,\xf0\x1f\x9c\x1a\xa4\xb5\xd0\xc4;\x17"\x01\xad\x1b\x91\xcf\xd1z\xf5\x1a/[\x01\r\xff,\x84\x91\xbd\x96\x04B\xfa\x96\x08\xc2\x84\x0c\xad\xcd\x98^<\xa8Rj\x85d:\x87\x16\x14x\xdd!$.@Nfa@8T\xfbO\xed\x16\xe0\xf2\xc6\x89\xfa \xc6\xae\x14\x153^\x07\xc5\x8d\x15\xfbF\x80^\xa3\x18'

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