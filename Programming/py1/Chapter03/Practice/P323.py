num = int(input('숫자를 입력하시오 : '))

total = 0
for i in range(1, num + 1):
    total += i**2

print('결과는 {}입니다.'.format(total))

num = int(input('숫자를 입력하시오 : '))
total = 0

for i in range(1, num + 1):
    total += (1 / i) ** 2
    
print('결과는 {}입니다.'.format(total))