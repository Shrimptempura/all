# 입력값 3이상이라 가정, 존나 못만듬
num = int(input('숫자를 입력하시오 : '))

for i in range(2, num + 1):
    if (num % 2 == 0):
        print('{}은 소수가 아닙니다1.'.format(num))
        break
    elif (i == num):
        print('{}는 소수입니다2.'.format(num))
        break
    elif ((2 * i - 1) < num and num % (2 * i - 1) == 0):
        print('{}은 소수가 아닙니다3.'.format(num))
        break