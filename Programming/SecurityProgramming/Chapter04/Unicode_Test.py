import binascii


def print_msg(msg):
    for c in msg:
        print(c, end=' ')
    print()


def print_step(num, text = ""):
    print("==="*5)
    print("Step %d : %s" % (num, text))
    print("---"*5)

if __name__ =="__main__":
    # step 1
    print_step(1, "Message value check")
    msg = "python3x"
    if msg[0] == 'p':
        print("YES!!")
    else:
        print("NO!!")


    # step 2
    print_step(2, "Unicode value check")
    msg_unicode = b"python3x"
    if msg_unicode[0] == 'p':
        print("YES!!")
    else:
        print("NO!!")

    print_msg(msg_unicode)

    if chr(msg_unicode[0]) == 'p':
        print("YES!!")
    else:
        print("NO!!")


    # step 3
    print_step(3, "String(Message) to Unicode conversion")
    msg_to_unicode = msg.encode('utf-8')  # string --> unicode convert : encode('utf-8')
    print_msg(msg_to_unicode)
    print(msg_to_unicode)


    # step 4
    print_step(4, "Unicode to String conversion")
    unicode_to_string = msg_to_unicode.decode('utf-8')  # unicode --> string convert : decode('utf-8')
    print_msg(unicode_to_string)
    print(unicode_to_string)


    # step 5
    print_step(5, "String(Message) to HEXA conversion")
    msg = "python3x"
    msg_to_hex = msg.encode('utf-8').hex()
    print(msg_to_hex)

    print("***")
    print(binascii.hexlify(msg.encode('utf-8')))
    print(binascii.hexlify(msg.encode('utf-8')).decode('utf-8'))


    # step 6
    print_step(6, "HEXA to String(Message) conversion")
    print(bytearray.fromhex(msg_to_hex).decode('utf-8'))
    print(bytes.fromhex(msg_to_hex).decode('utf-8'))


