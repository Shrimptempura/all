x, y = map(int, input('두 정수를 입력하시오 : ').split())

if (y % x == 0):
    print('{}는(은) {}의 배수입니다.'.format(x, y))
else:
    print('{}는(은) {}의 배수가 아닙니다.'.format(y, x))