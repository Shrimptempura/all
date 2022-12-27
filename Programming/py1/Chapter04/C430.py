# factorial_recursion.py        재귀함수를 이용해 정의한 피보나치 수열
from termios import FF0, FF1


def fibonacci(n):
    if (n <= 1):
        return n
    else:
        return (fibonacci(n - 1) + fibonacci(n - 2))    # F_n = F_(n - 1) + F_(n - 2)
    
nterms = int(input('몇 개의 피보나치수를 원하세요? '))

# 음수일 경우 피보나치 수를 구할 수 없음 
if (nterms <= 0):
    print('오류 : 양수를 입력하세요.')
else:
    print('Fibonacci 수열: ', end = ' ')
    for i in range(nterms):
        print(fibonacci(i), end = ' ')
        

# 재귀함수는 코드를 직관적이고 간결하나 위의 fibonacci() 함수는
# 트리형식으로 재귀적 호출이 매우 비효율적