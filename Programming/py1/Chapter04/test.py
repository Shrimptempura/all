def min_nums(*numbers):
    for i in numbers:
        check = i
        if check > i:
            min = i
        i = check
    return min

print(min_nums(20, 40, 50, 10))