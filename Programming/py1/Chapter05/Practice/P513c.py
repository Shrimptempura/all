# 파이썬으로 평균 분산, 표준편차 연산하기 w.numpy
import math
import numpy

# 리스트 생성
vals = list(map(int, input('{}개의 수를 입력하세요 : '.format(10)).split()))
print(vals)

# 평균
mean = sum(vals) / len(vals)
print('평균은 : {}'.format(mean))

# 분산
vsum = 0
for val in vals:
    vsum = vsum + (val - mean) ** 2
    
variance = vsum / len(vals)
print('분산은 : {}'.format(variance))

# 표준편차
std = math.sqrt(variance)
print('표준편차는 : {}'.format(std))

# numpy 사용
# numpy 평균
num_mean = numpy.mean(vals)
print('numpy 사용 평균 : {}'.format(num_mean))

# numpy 분산
num_var = numpy.var(vals)
print('numpy 사용 분산 : {}'.format(num_var))

# numpy 표준편차
std = numpy.std(vals)
print('numpy 사용 표준편차 : {}'.format(std))
