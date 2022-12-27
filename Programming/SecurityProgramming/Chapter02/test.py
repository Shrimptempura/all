#  6자리수 OTP
import random

def genOTP():
    password = ""
    # LETTERS = "0123456789"
    for x in range(0, 6):
        password += str(random.randrange(0, 10))
    return password

print(genOTP())