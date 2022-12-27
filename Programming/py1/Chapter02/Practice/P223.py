num = int(input('세 자리 정수를 입력하시오 : '))
print('백의 자리 :', num // 100)
print('십의 자리 :', ((num // 10) % 10))
print('일의 자리 :', (num % 10))