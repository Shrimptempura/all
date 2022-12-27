num = int(input('숫자를 입력하시오 : '))
for i in range(num):
    print(' ' * (num - (i + 1)), end = '')
    print('*' * (i + 1))