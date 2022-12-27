# for_factorial.py      for 반복문을 이용한 5 팩토리얼(5!) 계산

n = int(input('수를 입력하시오 : '))
fact = 1
for i in range(1, n + 1):
    fact *= i

print('{}! = {}'.format(n, fact))