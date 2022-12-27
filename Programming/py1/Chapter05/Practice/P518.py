s_list = ['abc', 'bcd', 'bcdefg', 'abba', 'cddc', 'opq', 'abb']

min = s_list[0]
for i in range(1, len(s_list)):
    if len(min) > len(s_list[i]):
        min = s_list[i]
    elif len(min) == len(s_list[i]):
        if min[-1] > s_list[-1]:
            min = s_list[i]
        
print(min)
# 파이썬의 리스트 한칸 이동을 대입해서 시도는 안해보고
# 그저 if절로 조건식으로 감