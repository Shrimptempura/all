def main():
    
    key:  b'ABCDEFGHIJKLMNOPQRSTUVWXYZ123456'
    
    finalOutput = b''
    
    receiverEncrptedSignMsgPlugMessage = finalOutput[256:]
    
    decrytedSignMsgPlugMessage = aesDecrypWithIV(receiverEncryptedSignMsgOlugMessage, key)
    decrpyedMessgae = decrytedSignMsgPlugMessage[256:]
    .. 