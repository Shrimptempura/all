from PGP_All_Common import *

bob_privatekey = './HybridBob/bobprivatekey.txt'
bob_publickey = './HybridBob/bobpublickey.txt'
alice_publickey = './HybridBob/received_alicepublickey.txt'
# 키 공유 프로세스 (tcp/ip 기반 공개키 공유 과정)

PGP_Generate_Key_File(bob_privatekey, bob_publickey)
PGP_Client_Receive_File('localhost', 6001, alice_publickey)
PGP_Server_Send_File('localhost', 7001, bob_publickey)