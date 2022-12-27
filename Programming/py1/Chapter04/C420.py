# default_param.py      디폴트 인자를 1개 사용한 div() 함수
def div(a, b = 2):
    return a / b

print('div(4) =', div(4))
print('div(6, 3) = ', div(6, 3))

# 디폴트 매개변수는 전체 변수에 대해 모두 할당하거나, 매개변수의 출현 순서상
# 뒤에 있는 변수부터 할당해야 한다.