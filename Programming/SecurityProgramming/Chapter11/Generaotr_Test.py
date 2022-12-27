def gcd(a, b):
    while (b != 0):
        temp = a % b
        a = b
        b = temp
    return abs(a)

def findGenerators(n):
    # s : 기약잉여류 집합
    s = set(num for num in range(1, n) if gcd(num, n) == 1)
    results = []  # 생성자 리스트
    for a in s:  # a : 1~ s의 원소....
        g = set()
        for x in s:
            g.add((a**x) % n)
        #
        if g == s:
            results.append(a)
    return results


def isPrime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True


def primesInRange(x, y):
    result = []
    for a in range(x, y):
        if isPrime(a):
            result.append(a)

    return result

###
aliceSecret = 2
result = primesInRange(10**2, 10**3)
print("Prime number list:", result)
sharedPrime = result.pop(-1) # 소수 P
generatorList = findGenerators(sharedPrime)
print("Generator List:", generatorList)
sharedBase = generatorList.pop(-1) # 생성자

A = (sharedBase**aliceSecret) % sharedPrime
print("A:", A)

B = 6

aliceSharedSecret = (B ** aliceSecret) % sharedPrime
print(aliceSharedSecret)