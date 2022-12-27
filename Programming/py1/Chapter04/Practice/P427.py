import fractions

num = float(input('1보다 작고 0보다 큰 소수를 입력하시오 : '))
print(num)

print('가장 가까운 단위 분수는 {}이며, ' ).format(fractions.Fraction(num))