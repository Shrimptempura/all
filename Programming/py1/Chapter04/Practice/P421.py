rrn = input('주민등록번호 입력 : ')

rrn_list = list(str(rrn))     # 문자
year = int(rrn_list[0] + rrn_list[1])       # type은 int임, str 문자열 합하고 int변환
year2 = rrn_list[0] + rrn_list[1]
month = rrn_list[2] + rrn_list[3]
day = rrn_list[4] + rrn_list[5]

if (year >= 50):
    year = 19
else:
    year = 20
    
print('{}{}년 {}월 {}일'.format(year, year2, month.lstrip('0'), day.lstrip('0')))

# 숫자를 각 자리수 리스트로 변환
# n = 12345
# n_list = list(map(int, str(n)))