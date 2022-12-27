def my_sum(n_list):
    print('리스트 원소들 %s' %n_list)
    total = 0
    for i in n_list:
        total += i
    print('리스트 원소들의 합 : {}'.format(total))

n_list = [10, 20, 30, 40, 50]
my_sum(n_list)

n_list = [10, 20, 30, 50, 60]
total = 1
for i in n_list:
    total *= i
print(total)