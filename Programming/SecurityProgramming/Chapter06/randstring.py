import random
import string

def randomString(n):
    random_string = ''
    for i in range(n):
        random_string += str(random.choice(string.ascii_letters))
    print(f"Random String (stringLength : {n}) is {random_string}")
    
randomString(8)
randomString(8)
