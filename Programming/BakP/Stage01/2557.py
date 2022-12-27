x, y = map(int, input().split())
print(x + y)

# 한 줄에 공백으로 나누어진 ?개의 정수를 리스트로 만들어준다.
nums = [int(x) for x in input().split()]
print(nums)

# N개 줄의 정수 리스트
n = int(input())
nums = [int(input()) for _ in range(n)]

# 8행 한줄
nums = [int(input()) for _ in range(int(input()))]

# N줄의 2차원 정수 리스트
n = int(input())
field = [[int(x) for x in input().split()] for i in range(n)]

# 15행 한줄
field = [[int(x) for x in input().split()] for i in range(int(input()))]


import math
import time

start = time.time()
math.factorial(100000)
end = time.time()

print(f"{end - start:.5f} sec")