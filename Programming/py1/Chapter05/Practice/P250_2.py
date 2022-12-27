src = 'aaaabbb'
dsc = 'eeeewwwww'

# set : 문자열 중복 제거
a = list(set(src))

for i in a:
    print('{}{}'.format(i, src.count(i)), end = '')
print(end = '\n')

    
print(list(set(dsc)))       # 리스트
print(set(dsc))             # 딕셔너리



