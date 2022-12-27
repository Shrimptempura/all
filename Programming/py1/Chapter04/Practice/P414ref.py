def sort3(num1, num2, num3):
    a = []
    a.append(num1)
    a.append(num2)
    a.append(num3)
    print(sorted(a))

num1, num2, num3 = map(int, input('세 수를 입력하세요 : ').split())
sort3(num1, num2, num3)