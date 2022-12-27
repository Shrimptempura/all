package Chapter10.ExecutionException.NumberFormatException;
// NumberFormatException이 발생하는 경우
public class NumberFormatExceptionExample {
    public static void main(String[] args) {
        String data1 = "100";
        String data2 = "a100";

        int value1 = Integer.parseInt(data1);
        int value2 = Integer.parseInt(data2);

        int result = value1 + value2;
        System.out.println(data1 + "+" + data2 + "=" + result);
    }
}

/*
프로그램을 개발하다 보면 문자열로 되어 있는 데이터를 숫자로 변경하는 경우가
자주 발생한다. 문자열을 숫자로 변환하는 방법은 여러가지 있지만 가장 많이 사용되는
코드은 다음과 같다.

(반환 타입)     (메소드명(매개 변수))          (설명)
int             Integer.parseInt(Sting s)     주어진 문자열을 정수로 변환해서 리턴
double          Double.parseDouble(String s)  주어진 문자열을 실수로 변환해서 리턴

Integer와 Double은 포장(Wrapper) 클래스라고 하는데, 이 클래스의 정적 메소드인
parseXXX() 메소드를 이용하면 문자열을 숫자로 변한할 수 있다. 이 메소드들은
매개값인 문자열이 숫자로 변환될 수 있다면 숫자를 리턴하지만,
숫자로 변환될 수 없는 문자가 포함되어 있다면 java.lang.NumverFormatException을
발생시킨다.
*/