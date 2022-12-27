s = 0
for i in range(1, 101):
    s += i

print('1부터 100까지의 합산 : ', s)

s = 0
for i in range(0, 101, 2):
    # print(i) -> i는 다시 0부터 시작
    s += i
    
print('1부터 100까지의 짝수들의 합 : ', s)