# 이중 for loop
n = 7
for i in range(n, 0, -1):
    st = ''
    for j in range(i):
        st += ' '
    print(st + '#')