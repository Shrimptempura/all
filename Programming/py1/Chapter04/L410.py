def sum_nums(*numbers):
    result = 0
    for i in numbers:
        result += i
    avg = result / len(numbers)
    print('{}개의 인자 {}'.format(len(numbers), numbers))
    print('합계 : {}, 평균 : {}'.format(result, avg))
    
sum_nums(10, 20, 30)
sum_nums(10, 20, 30, 40, 50)

def min_nums(*numbers):
    # for i in numbers:
    #     if (min > i):
    #         min = i
    # return min
    return min(numbers)
    
print(min_nums(20, 40, 50, 10))

def min_nums(*numbers):
    min = numbers[0]
    for i in numbers:
        if min > i:
            min = i
    return min

print(min_nums(20, 40, 50, 10))