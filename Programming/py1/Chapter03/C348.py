# for_sum_input2.py     양수 n을 입력받아 1부터 n까지의 합을 구하는 코드
n = int(input('합계를 구할 양의 정수를 입력하세요 : '))
s = 0

for i in range(1, n + 1):
    s += i

print('1부터 {}까지의 합은 {}'.format(n, s))
# -를 입력한 경우 for문을 바로 빠져나오게 된다.