x, y = map(int, input('점의 x, y를 입력하시오 : ').split())

if (x > 0 and y > 0):
    print('1사분면에 있음')
elif (x < 0 and y > 0):
    print('2사분면에 있음')
elif (x < 0 and y < 0):
    print('3사분면에 있음')
else:
    print('4사분면에 있음')
    

# 만약에 정수 세 개를 한번에 입력하고 싶다면, split() 함수와 map() 함수를 사용한다. 
# split() 함수의 역할은 이름과 같이 입력받은 것들을 분리해주는 것이고, 
# map() 함수의 역할은 첫번째 매개변수로 받은 함수를 
# 두번째 매개변수로 받은 iterable 객체의 요소들에 각각 취해주는 것입니다. 

import math
import time

start = time.time()
math.factorial(100000)
end = time.time()

print(f"{end - start:.5f} sec")