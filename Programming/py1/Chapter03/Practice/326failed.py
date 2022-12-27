# num = int(input('숫자를 입력하시오 : '))
# line = 2

# for i in range(1, num + 1):
#     print(i, end = " ")
#     if (i % 5 == 0):
#         print()
#         for j in range(line * num, num, -1):
#             print(j, end = " ")
#         print()
#     for k in range(line + 1, )

num = int(input('숫자를 입력하시오 : '))
i = 0
check = 1
even = False
while (i < num * num):
    i += 1
    if (i % num == 0):
        print()
        check += 1
    if (i == num):
        print(check * num - i, end = "/")
    else:
        print(i, end = " ")