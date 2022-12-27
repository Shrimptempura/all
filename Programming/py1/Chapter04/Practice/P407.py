def mean3(a, b, c):
    avg = (a + b + c) / 3
    return avg
    
def max3(a, b, c):
    max_num = a
    if (max_num < b):
        max_num = b
    elif (max_num < c):
        max_num = c
    return max_num
    
def min3(a, b, c):
    min_num = a
    if (min_num > b):
        min_num = b
    elif (min_num > c):
        min_num = c
    return min_num

a, b, c = map(int, input('세 수를 입력하시오 : ').split())

print('{:.2f}'.format(mean3(a, b, c)))
print(max3(a, b, c))
print(min3(a, b, c))