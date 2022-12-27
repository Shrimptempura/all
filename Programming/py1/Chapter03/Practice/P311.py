num_list = [2, 3, 9]

a, b, c = map(int, input('세 복권번호를 입력하시오 : ').split())

cnt = 0
for i in (num_list):
    if (a == i or b == i or c == i):
        # print(i)
        cnt += 1
    print(i)

if (cnt >= 3):
    print('상금 1억 원')
elif (cnt >= 2):
    print('상금 1천만 원')
elif (cnt >= 1):
    print('상금 1만원')
else:
    print('다음 기회에...')
