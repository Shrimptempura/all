print('식당이다 메뉴를 선택해!')
print('햄버거(입력 b)\n치킨(입력 c)\n피자(입력 p)')
b, c, p = '햄버거', '치킨', '피자'
menu = input('메뉴를 선택해라 : ')
chosen = list('bcp')

while (not(menu in chosen)):
    menu = input('다시 입력해 : ')

if (menu == b):
    menu = '햄버거'
elif (menu == c):
    menu = '치킨'
else:
    menu = '피자'
    
print('너가 선택한건 바로', menu)
