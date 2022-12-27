x, y = map(int, input('x, y 좌표를 입력하시오 : ').split())

point = round((5 ** 2 + 5 ** 2) ** 0.5, 2)
print(point)

input_point = round((x ** 2 + y ** 2) ** 0.5)       # ** -> 제곱, 0.5 -> 루트
if (input_point <= point):
    print('원 내부에 있음')
else:
    print('원 외부에 있음')