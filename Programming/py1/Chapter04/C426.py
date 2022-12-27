# 가변 인자를 가지는 함수의 정의와 호출
def great(*names):
    for name in names:
        print('안녕하세요', name, '씨')

great('홍길동', '양만춘', '이순신')
great('Tom', 'Jerry')
