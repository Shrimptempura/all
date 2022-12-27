lst = list()

for i in range(100, 1000):
    x = int(i / 100)
    y = int((i / 10) % 10)
    z = int((i % 100) % 10)

    numars = int(x ** 3 + y ** 3 + z ** 3)
    if (numars == i):
        lst.append(i)
        
print(lst)