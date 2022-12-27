def fibo(n):
    if (n <= 1):
        return 1
    else:
        return fibo(n - 1) + fibo(n - 2)

n = int(input('fibo(n)의 n을 입력하세요 : '))
print(fibo(n))

for i in range(15):
    print('(fibo( {}) = {})'.format(i, fibo(i)))