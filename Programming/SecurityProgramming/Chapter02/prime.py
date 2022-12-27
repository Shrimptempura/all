def GetPrime(start, end):
    total = 0
    list_num = []
    
    for i in range(start, end + 1):
        is_prime = True
        for j in range(2, i):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            list_num.append(i)
    print(f"Prime numbers between 21 and 50 : {list_num}")
    
    for i in list_num:
        total += i
    print(f"Sum of Prime numbers between 21 and 50 : {total}")

print(GetPrime(21, 50))