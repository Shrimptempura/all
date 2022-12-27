s = 'aabcccaaaaas'

result = s[0]  # 첫번째 값을 결과에 넣는다
count  = 0   #

for st in s:
    if st == result[-1]:  #
        count += 1
    else:
        result += str(count) + st
        count = 1
result += str(count)

print (result)



# def stringCompress_rec(string):
#     ans = ''
#     count = 1
#     string = string + '\0'
#     for i in range(1, len(string)):
#         if string[i - 1] == string[i]:
#             count += 1
#         else:
#             ans += string[i - 1] + str(count) + stringCompress_rec(string[i:])
#             break
#     return ans

# string = 'a'
# print(stringCompress_rec(string))