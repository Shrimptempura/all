# triangle_pattern1.py
n = 5
for i in range(n):      # 0,1,2,3,4
    for j in range(n - (i + 1)):
        print(' ', end = '')
    for j in range(2 * i + 1):
        print('+', end = '')
    print()
    
    
# 삼각형 패턴 출력 짧은 코드
n = 5
for i in range(n):
    print(' ' * (n - (i + 1)), end = '')
    print('+' * (2 * i + 1))
    
    
    
    
    
    
    
    
    
    
    
    
    
# # triangle_pattern1.py
# n = 5
# for i in range(n):      # 0,1,2,3,4
#     for j in range(2 * i + 1):
#         print('+', end = '')
#     print()
# 1
# 111
# 11111
# 1111111
# 111111111

