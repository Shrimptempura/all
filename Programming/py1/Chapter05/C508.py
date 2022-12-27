#리스트 요소들을 하나하나 방문하여 10을 곱하는 기능
list1 = [10, 20, 30, 40, 50]
i = 0

for n in list1:
    list1[i] = n * 10
    i += 1
    
print(list1)

#리스트 축약 표현을 사용하여 간단히 표현
list1 = [10, 20, 30, 40, 50]
list1 = [n * 10 for n in list1]
print(list1)

# 람다 함수와 map을 이용하여 리스트 요소들을 조작하기
list1 = [10, 20, 30, 40, 50]
list1 = list(map(lambda x : x * 10, list1))
print(list1)