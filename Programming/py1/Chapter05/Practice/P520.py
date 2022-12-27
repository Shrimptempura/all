# 리스트 형식이 아닌 딕셔너리 방식으로 푼것
src = 'aaaabbb'
# abc = [0 for i in range(26)]

dic = {}

# 알파벳 싹다 넣어서 확인용 
# for chr in 'abcdefghijklmnopqrstuvwxyz':
#     dic[chr] = 0

for chr in src:
    if chr in dic:
        dic[chr] += 1
    else:
        dic[chr] = 1
print(dic)
