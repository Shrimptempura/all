# 최소공배수는 최대공약수를 알아야 풀수있다.

x = int(input('범위의 시작 정수 : '))
y = int(input('범위의 마지막 정수 : '))

arr = []
n = (y - x) + 1
for i in range(n):      # 정수의 범위 리스트 추가
    arr.append(x)
    x += 1

def GCDofTwoNumbers(a, b): # 두 수 최대공약수 구하기
    while b != 0 : #b가 0이 아닌 동안 반복
        a, b = b, a % b #a에 b를, b에 a와 b를 나눈 나머지를 교환하여 저장(스왑)
    return a #반환되는 a가 두 수의 최대공약수

GCDarr = arr[0] #arr 리스트의 첫 번째 항목(0번 방)을 GCDarr에 저장
LCMarr = arr[0] #arr 리스트의 첫 번째 항목(0번 방)을 LCMarr에 저장

for i in range(len(arr)): #i가 0부터 리스트 arr의 길이만큼 반복
    print(LCMarr, ",", arr[i], "의 최대공약수 = ", end="") #최대공약수 출력
    GCDarr = GCDofTwoNumbers(LCMarr, arr[i]) # GCDarr에 LCMarr과 arr[i]의 최대공약수를 저장
    print(GCDarr) #GCDarr 출력

    print(LCMarr, ",", arr[i], "의 최소공배수 = ", end="") #최소공배수 출력
    LCMarr = LCMarr * arr[i] // GCDarr #LCMarr에 LCMarr과 arr[i]의 최소공배수를 저장
    print(LCMarr) #LCMarr 출력
    
    





# arr = list(map(int, input().rstrip().split())) #공백문자로 구분하여 리스트 입력받기

# def GCDofTwoNumbers(a, b): #GCDofTwoNumbers라는 이름의 함수와 매개변수 a, b 정의하기
#     while b != 0 : #b가 0이 아닌 동안 반복
#         a, b = b, a%b #a에 b를, b에 a와 b를 나눈 나머지를 교환하여 저장(스왑)
#     return a #반환되는 a가 두 수의 최대공약수

# GCDarr = arr[0] #arr 리스트의 첫 번째 항목(0번 방)을 GCDarr에 저장
# LCMarr = arr[0] #arr 리스트의 첫 번째 항목(0번 방)을 LCMarr에 저장
# for i in range(len(arr)): #i가 0부터 리스트 arr의 길이만큼 반복
#     print(LCMarr, ",", arr[i], "의 최대공약수 = ", end="") #최대공약수 출력
#     GCDarr = GCDofTwoNumbers(LCMarr, arr[i]) # GCDarr에 LCMarr과 arr[i]의 최대공약수를 저장
#     print(GCDarr) #GCDarr 출력

#     print(LCMarr, ",", arr[i], "의 최소공배수 = ", end="") #최소공배수 출력
#     LCMarr = LCMarr * arr[i] // GCDarr #LCMarr에 LCMarr과 arr[i]의 최소공배수를 저장
#     print(LCMarr) #LCMarr 출력
