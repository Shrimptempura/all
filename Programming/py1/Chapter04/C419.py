# print_default_param.py    디폴트 값을 가지는 print_star() 함수
def print_star(n = 1):
    for _ in range(n):
        print('***************')
        
print_star()

# print_star() 매개값을 안줘도 함수 매개변수에 n = 1와 같은 디폴트 값을 할당해줘서
# 인자가 없어도 한줄 출력됨

# 만약 print_star(3) 인자 3입력시, 디폴트 값 1을 취하지 않고 인자 값 3을 n 값으로 가진다.