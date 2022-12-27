def mile2km(m):
    for i in range(m):
        print('{}마일 = {}킬로미터'.format(i + 1, (i + 1) * 1.61))
    
m = int(input('숫자 입력 : '))
mile2km(m)