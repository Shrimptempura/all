s_list = ['abc', 'bcd', 'bcdefg', 'abba', 'cddc', 'opq', 'abb']

cnt = len(s_list[0])
for i in s_list:
    for j in s_list[1:]:
        if cnt > len(j):
            cnt = len(j)
    
    if cnt == len(i):
        print(i, end = " ")


