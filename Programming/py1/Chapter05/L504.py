def GetPrimeNoOpt(n):
    global res
    res = []
    for i in range(2, n+1):
        is_prime = True
        for j in range(2, i):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            res.append(i)
    return res

GetPrimeNoOpt(10)
# print(res)

print('1에서 10까지의 소수 : {}'.format(res))
print('최소값 : %d' %min(res))
print('최대값 : {}'.format(max(res)))
print('합계 : %d' %sum(res))
print('평균 : {}'.format((sum(res)) / len(res)))