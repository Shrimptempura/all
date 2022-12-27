vowel = list('aeiou')

print(vowel)
ch = (input('알파벳을 입력하시오 : '))
for i in ch:        # a e i o u
    if i in vowel:
        print('{}는(은) 모음입니다.'.format(i))
    else:
        print('{}는(은) 자음입니다.'.format(i))