word1 = "Korea Football Association"
word2 = "Korea Information Security Agency"

for i in range(len(word1.split())):
    print(word1.split()[i][0], end = '')

print('\n---------------------------')

for i in range(len(word2.split())):
    print(word2.split()[i][0], end = '')
    
print('\n')


# 리스트 축약
# print("".join([x[0] for x in input("입력문자: ").split()]))


# 머리 글자어(acronym) : 교제
# 문자열을 입력하시오: North Atlantic Treaty Organization NATO
# phrase = input("문자열을 입력하시오: ")
# acronym = ""
# for word in phrase.upper().split():
#        acronym += word[0]
# print( acronym )