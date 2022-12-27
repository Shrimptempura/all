# get_primes.py     2부터 100까지의 소수 구하기
# 소수를 담을 리스트 초기화
primes = []

for n in range(2, 101):
    # 일단 n을 소수라고 두자
    is_prime = True
    for num in range(2, n):
        if n % num == 0:        # n의 약수가 있으면
            is_prime = False    # 소수가 아님
            
    if is_prime:    # 소수일 경우 primes라는 리스트에 추가한다.
        primes.append(n)    # append() 메소드라는 리스트에 n을 추가함

print(primes)