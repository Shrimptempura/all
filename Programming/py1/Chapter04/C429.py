# factorial_recursion.py        재귀함수 정의 팩토리얼
def factorial(n):       # n!의 재귀적 구현
    if n <= 1:          # 종료조건이 반드시 필요
        return 1
    else:
        return n * factorial(n - 1)     # n * (n - 1)! 정의에 따른 구현

n = 5
print('{}! = {}'.format(n, factorial(n)))
# def factorial(n):
#     fact = 1
#     for i in range(1, n + 1):
#         fact *= i
#     return fact

# n = 5
# print('{}! = {}'.format(n, factorial(n)))