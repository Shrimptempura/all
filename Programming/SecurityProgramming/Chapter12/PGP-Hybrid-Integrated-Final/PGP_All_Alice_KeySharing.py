from PGP_All_Common import *

alice_privatekey = './HybridAlice/aliceprivatekey.txt'
alice_publickey = './HybridAlice/alicepublickey.txt'
bob_publickey = './HybridAlice/received_bobpublickey.txt'
# 키 공유 프로세스 (tcp/ip 기반 공개키 공유 과정)

PGP_Generate_Key_File(alice_privatekey, alice_publickey)
PGP_Server_Send_File('localhost', 6001, alice_publickey)
PGP_Client_Receive_File('localhost', 7001, bob_publickey)
