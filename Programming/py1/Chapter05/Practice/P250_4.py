data = 'waw'
encoded = ''

cnt = 1
for i in range(1, len(data)):
    if data[i] == data[i - 1]:
        cnt += 1
    else:
        encoded += data[i - 1] + str(cnt)
        cnt = 1
    
    if i == len(data) - 1:
        encoded += data[i] + str(cnt)
        
print(encoded)


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