import random

def primesInRange(x, y):
    prime_list = []
    for n in range(x, y):
        isPrime = True

        for num in range(2, n):
            if n % num == 0:
                isPrime = False

        if isPrime:
            prime_list.append(n)
    return prime_list


def gcd(a, b):
    while (b != 0):
        temp = a % b
        a = b
        b = temp
    return abs(a)

def findGenerators(n):
    s = set(num for num in range(1, n) if gcd(num, n) == 1)
    results = []
    for a in s:
        g = set()
        for x in s:
            g.add((a**x) % n)
        if g == s:
            results.append(a)
    return results


# Variables Used
minBound = pow(2,10)-100
maxBound = pow(2,10)
prime_list = primesInRange(minBound, maxBound)
print("Primes in Range (",minBound,"~",maxBound,"):", prime_list)
sharedPrime = prime_list.pop(-1)  # 범위에 있는 소수 중에서 가장 큰 수.. 선택 ..
#sharedPrime = random.choice(prime_list)
#sharedPrime = 37	# p

sharedBaseSet = findGenerators(sharedPrime)
print("Generator on Z_*",sharedPrime,":", sharedBaseSet)
#sharedBase = 5		# g
sharedBase = sharedBaseSet.pop(-1)  # g, generator 중에서 가장 큰 수.. 선택 ..
#sharedBase = random.choice(sharedBaseSet)  # g, generator 중에서 임의의 수 선택 ..


aliceSecret = 35		# a   a반 : 35, b반 : 30
bobSecret = 22		# b     a반 : 22, b반 : 19
print( "------------" )
print("Alice & Bob's Secret:")
print("    Alice's Secret:", aliceSecret)
print("    Bob's Secret:", bobSecret)

# Begin
print( "Publicly Shared Variables:")
print( "	Publicly Shared Prime: " , sharedPrime )
print( "	Publicly Shared Base (generator) :  " , sharedBase )
print( "------------" )
# Alice Sends Bob A = g^a mod p
A = (sharedBase**aliceSecret) % sharedPrime
print( "	Alice Sends Over Public Chanel: " , A )

# Bob Sends Alice B = g^b mod p
B = (sharedBase ** bobSecret) % sharedPrime
print( "	Bob Sends Over Public Chanel: ", B )

print( "------------" )
print( "Privately Calculated Shared Secret:" )
# Alice Computes Shared Secret: s = B^a mod p
aliceSharedSecret = (B ** aliceSecret) % sharedPrime
print( "	Alice Shared Secret: ", aliceSharedSecret )

# Bob Computes Shared Secret: s = A^b mod p
bobSharedSecret = (A**bobSecret) % sharedPrime
print( "	Bob Shared Secret: ", bobSharedSecret )


print(findGenerators(929))