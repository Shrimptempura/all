# 중첩 for무을 사용한 구구단 출력
for i in range(2, 10):
    for j in range(1, 10):
        print('{}*{} ={:2d} '.format(i, j, i * j), end = ' ')
    print()