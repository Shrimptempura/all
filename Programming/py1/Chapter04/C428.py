# arg_sum_nums.py       가변 인자를 가지는 함수를 이용한 합계 구하기
def sum_nums(*numbers):
    result = 0
    for n in numbers:
        result += n
    return result

print(sum_nums(10, 20, 30))
print(sum_nums(10, 20, 30, 40, 50))

# 가변인자가 받는 *numbers라는 매개변수를 사용해서 전체 인자를 튜플 형식으로 받을 수 있다.
# 그 후 함수 내부에서 for 루프를 사용해서 이 튜플의 내용을 하나하나 더하여 반환하면
# 함수 외부에서 인자들의 합을 실행 결과와 같이 출력할 수 있다.