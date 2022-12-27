# # copy https://opentutorials.org/module/2980/17797
def divisors(n):
    i = 2; total = 1
    while i < n:
        if n % i == 0:
            total += i
        i += 1
    return total

for i in range(1,20000):
    value = divisors(i)
    if i != value and divisors(value) == i:
        print('{}의 찬화수 {}'.format(i, value))




# 속도개선
# def divisors(n):
#     i=2;total=1
#     while i<n**0.5:
#         if n%i==0:
#             total+=i+n/i
#         i+=1
#     return total

# total=0
# for i in range(1,20000):
#     value = divisors(i)
#     if i != value and divisors(value) == i:
#         total+=i
#         print('{}의 찬화수 {}'.format(i, int(value)))

        
        
# 오류수정..
# def divisors(n):
#     i=2;total={1}
#     loop=n**0.5
#     while i<=loop:
#         if n%i==0:
#             total.add(i)
#             total.add(n/i)
#         i+=1
#     return sum(total)

# total=0
# for i in range(1,20000):
#     value = divisors(i)
#     if i != value and divisors(value) == i:
#         total+=i
#         print('{}의 찬화수 {}'.format(i, int(value)))




'''
Amicable Number 라는 수가 있습니다. 한글로는 친화수 또는 우애수라고 하네요.

서로가 약수의 합이 되는 두수를 말합니다. 문제는 1000 이하의 모든 Amicable Number의 합을 구하는 것입니다.

Amicable numbers
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.

 

 
약수의 합을 반환해 주는 함수
1
2
3
4
5
6
7
8
9
def divisors(n):
    i=2;total=1
    while i<n:
        if n%i==0:
            total+=i
        i+=1
    return total
 
divisors(220)
284
 

 루프문 ~100까지
1
2
3
4
5
6
7
8
9
10
def divisors(n):
    i=2;total=1
    while i<n:
        if n%i==0:
            total+=i
        i+=1
    return total
 
for i in range(2,100):
    print(i,divisors(i))
 100까지 약수의 합 계산 결과입니다.

 

약수의 합을 다시 약수의 합계산.
1
2
3
4
5
6
7
8
9
10
11
12
def divisors(n):
    i=2;total=1
    while i<n:
        if n%i==0:
            total+=i
        i+=1
    return total
 
for i in range(1,10000):
    value = divisors(i)
    if i != value and divisors(value) == i:
        print(i, value, "amicable")
220 284 amicable
284 220 amicable
1184 1210 amicable
1210 1184 amicable
2620 2924 amicable
2924 2620 amicable
5020 5564 amicable
5564 5020 amicable
6232 6368 amicable
6368 6232 amicable
time: 35.82081913948059
 문제의 정의대로, 한번 계산해서 나온값이 서로 다르고, 두번째 계산하면 다시 원래수가 되는지를 조건문을 걸어주고, 10000 까지 루프를 돌리면, 계산이 되긴 하는데 시간이 좀 걸립니다.

 

속도 개선
1
2
3
4
5
6
7
8
9
10
11
12
13
14
def divisors(n):
    i=2;total=1
    while i<n**0.5:
        if n%i==0:
            total+=i+n/i
        i+=1
    return total
 
total=0
for i in range(1,10000):
    value = divisors(i)
    if i != value and divisors(value) == i:
        total+=i
print(total)
31626
 앞서 3번문제등에서 한적있지만, 같은원리로 제곱근을 취해서 루프크기를 줄여주면, 불필요한 계산이 줄어들어서 속도가 빨라집니다.

합계계산은 amicable 이 두개식 짝지어서 두번씩 출력되기때문에, 앞에 나온 출력 결과를 보면서, 중첩이 안되도록 합산해주어야 합니다.

 

오류 수정
이 문제를 풀때는 드러나지 않았는데, divisors 함수를 23번에 똑같이 가져가 풀다가 알게된 오류입니다. 속도를 빠르게 할려고 제곱근을 취해주었는데, 이때 완전제곱수인경우에는, 위의 조건문에 걸리지가 않아서 합산이 안됩니다. 다행인지 불행인지 이 문제에서는 amicable인지만 판단하면 되서, 거기에 해당되는 오류가 드러나지 않았었네요.

 

1
2
3
4
5
6
7
def divisors(n):
    i=2;total=1
    while i<=n**0.5: # 등호(=) 추가
        if n%i==0:
            total+=i+n/i
        i+=1
    return total
 제곱근을 포함해주면, 또다른 문제가 생기는데, 완전제곱수일때, 한번만 더해야할 약수를 두번 더하게 되는 문제가 생깁니다. 이때는 파이썬의 set() 타입을 이용해서, add 연산을 해주게 되면, 중복되는 숫자는 자동으로 한번만 연산할수 있습니다.

1
2
3
4
5
6
7
8
def divisors(n):
    i=2;total={1}
    while i<=n**0.5:
        if n%i==0:
            total.add(i)
            total.add(n/i)
        i+=1
    return sum(total)
 그리고 한가지 더, while 문에 조건문으로 n**0.5 가 주어졌는데, 이값은 루프문 동안 변하지 않으니, while문 앞쪽으로 빼주고 미리 계산해서 주는게 효율이 더 좋은것 같습니다. 크진 않지만, 몇초정도의 차이가 생기는것 같습니다.

1
2
3
4
5
6
7
8
9
def divisors(n):
    i=2;total={1}
    loop=n**0.5
    while i<=loop:
        if n%i==0:
            total.add(i)
            total.add(n/i)
        i+=1
    return sum(total)
'''