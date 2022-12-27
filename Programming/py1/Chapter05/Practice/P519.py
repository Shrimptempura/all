s_list = ['abc', 'bcd', 'abc', 'abba', 'cddc', 'opq', 'opq']
new_s_list = list()


for i in s_list:
    if i not in new_s_list:
        new_s_list.append(i)
    
print(new_s_list)