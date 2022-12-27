# print_star_param.py   매개변수를 가진 별표 출력 함수와 인자를 이용한 호출
def print_star(n):
    for i in range(n):
    # for _ in range(n):
        print('{} ****************'.format(i))

print_star(4)