# 이중 for 루프를 사용한 패턴 생성
n = 7
for i in range(n):      # 0,1, ... 6
    st = ''
    for j in range(i):
        st += ' '       # 공백을 i개 추가함
    print(st + '#')
    
# for 루프와 *를 사용한 패턴 생성하기
n = 7
for i in range(n):
    print(' ' * i + '$')