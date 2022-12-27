n_list = [10, 20, 30, 50, 60]
max = n_list[0]
for i in n_list[1:]:
    if max < i:
        max = i
        
print(max)

# if max < n_list[i]:
#     max = n_list[i]
# 이렇게 하면 n_list[i]의 i가 인덱스 번호가 아니라 인덱스값으로
# n_list[10], [20]  list index out of range 발생