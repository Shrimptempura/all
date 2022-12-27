# # s = input('여러 단어로 이루어진 글을 입력하세요 : ')
# s = '임의의 문장을 입력:출력, 이것은 테스트 문장.가:가가:나:나나:다람쥐 : 마린보이.'
# # s = s.split()
# # print(s)
# n = len(s)
# print(n)

# for i in range(n):
#     if (s[i] == (',')):
#         s[i].replace()

import re

# s = input('여러 단어로 이루어진 글을 입력하세요 : ')
s = '임의의 문장을 입력:출력, 이것은 테스트 문장.가:가가:나:나나:다람쥐 : 마린보이.'
s = re.sub(r'[.,:]', ' ', s)       # sub -> 빼기삭제
s = s.split()
print(sorted(s))