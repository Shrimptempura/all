def func(*args):
    item = list(map(int, args[0]))
    n = len(item)
    max = item[0]
    for i in range(1, n):
        if max < item[i]:
            max = item[i]
    print('최대값 : {}'.format(max))
    
    min = item[0]
    for i in range(1, n):
        if min > item[i]:
            min = item[i]
    print('최소값 : {}'.format(min))
    
    total = 0
    for i in range(n):
        total += item[i]
    print('평균값 : {:.2f}'.format(total / n))

func(map(int,input("입력 : ").split()))

# def min3(a, b, c):
#     min_num = a
#     if (min_num > b):
#         min_num = b
#     elif (min_num > c):
#         min_num = c
#     return min_num

# a, b, c = map(int, input('세 수를 입력하시오 : ').split())
# print(min3(a, b, c))