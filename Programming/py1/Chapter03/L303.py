num = int(input('당신은 성인인가요?(성인 : 1, 미성년 : 0) : '))

if (num == False):
    print('당신은 미성년입니다.')
else:
    maried = int(input('결혼을 하셨나요(기혼 : 1, 미혼 : 0) : '))
    if maried == True:
        print('당신은 결혼한 성인입니다.')
    else:
        print('당신은 결혼하지 않은 성인입니다.')