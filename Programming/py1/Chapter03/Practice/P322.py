n = 12
for i in range(2, n + 1):
    cnt = 0
    for j in range(2, i):
        if (i % j == 0):
            cnt = 1
    
    if (cnt == 0):
        print('{}는 소수.'.format(i))
    else:
        print('{}는 합성수.'.format(i))