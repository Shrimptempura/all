from Crypto.Cipher import AES
from Crypto import Random

msg = "Hello"
key = b"01234567890123456789012345678912"

iv = Random.new().read(AES.block_size)

print(iv)
print(iv.hex())
print(AES.key_size)
print(AES.block_size)


# $ /opt/homebrew/Caskroom/miniforge/base/bin/
# python /Users/taejun/Programming/SecurityPro
# gramming/Chapter06/1019.py
# Traceback (most recent call last):
#   File "/Users/taejun/Programming/SecurityProgramming/Chapter06/1019.py", line 2, in <module>
#     from Crypto import Random
#   File "/opt/homebrew/Caskroom/miniforge/base/lib/python3.10/site-packages/Crypto/Random/__init__.py", line 28, in <module>
#     from Crypto.Random import OSRNG
#   File "/opt/homebrew/Caskroom/miniforge/base/lib/python3.10/site-packages/Crypto/Random/OSRNG/__init__.py", line 32, in <module>
#     from Crypto.Random.OSRNG.posix import new
#   File "/opt/homebrew/Caskroom/miniforge/base/lib/python3.10/site-packages/Crypto/Random/OSRNG/posix.py", line 66
#     except IOError, e:
#            ^^^^^^^^^^
# SyntaxError: multiple exception types must be parenthesized