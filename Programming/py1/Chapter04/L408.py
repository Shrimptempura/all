def make_mulipes(x, y):
    for i in range(x, x * y + 1, x):
        print(i, end = " ")
    
make_mulipes(2, 7)