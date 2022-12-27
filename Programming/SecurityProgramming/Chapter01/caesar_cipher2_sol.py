import string

LETTERS = string.ascii_uppercase + string.ascii_lowercase # + "!@#$%^&*()~"
print(LETTERS)      # upper alphabet

key = 3     # 가정
plaintext = "HELLO XYZ hello"
# plaintext = plaintext.upper()
ciphertext = ""

for x in plaintext:
    if x in LETTERS:
    # LETTERS에서 x의 위치를 찾아야함, 알파벳 순으로 인덱스 번호 출력
    # print(x)
    # print(LETTERS.find(x))
    
    # 위치를 찾고 key값을 더한다. 더한값은 LETTERS의 새로운 인덱스를 가리킴
    # print(LETTERS[(LETTERS.find(x) + key)])
    
    # 이제 바뀐값을 ciphertext에 붙여줌
        ciphertext += LETTERS[(LETTERS.find(x) + key) % len(LETTERS)]
    
    ## XYZ index 오버시 생기는 문제점 : string index out of range
    ## 그래서 mod 사용하여 나머지 값 사용해야 함
    ## ciphertext += LETTERS[(LETTERS.find(x) + key)]
    ## ciphertext += LETTERS[(LETTERS.find(x) + key) % 26]
    
    ## 'HELLOXYZhello' -> CCCC 
    ## find 함수의 리턴값, 12행으로 LETTERS가 있을때만 돌리면 패스됨
    ## else 절로 나머지 문자는 그냥 붙이기 또는 8행으로 upper로 돌리기
    
    # 대문자 소문자 모두 처리방법 3행의 uppercase 처럼, lowercase 추가하기
    # LETTERS = string.ascii_uppercase
    # 21행의 len(LETTERS)를 26이 아닌 이유, 소문자 포함시킬려고
    
    # else 절로 의해 sp그냥 추가됨
    else:
        ciphertext += x
    
    
print(ciphertext)