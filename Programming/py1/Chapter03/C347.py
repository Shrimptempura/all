# rsp_input.py      while 반복문을 이용한 가위, 바위, 보 선택
selected = None     # None은 이 객체의 형을 나중에 지정할 때 사용
                    # not in ['가위', '바위', '보']이라는 멤버 연산은 True가 되어
                    # while 문이 실행되도록 한다.
                    
while selected not in ['가위', '바위', '보']:
    selected = input('가위, 바위, 보 중에서 선택하세요> ')

print('선택한 값은:', selected)