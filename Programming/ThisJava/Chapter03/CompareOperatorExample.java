package Chapter03;
// 비교 연산자
public class CompareOperatorExample {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 10;
        boolean result1 = (num1 == num2);
        boolean result2 = (num1 != num2);
        boolean result3 = (num1 <= num2);
        System.out.println("result1=" + result1);
        System.out.println("result2=" + result2);
        System.out.println("result3=" + result3);

        char char1 = 'A';
        char char2 = 'B';
        boolean result4 = (char1 < char2);
        System.out.println("result4=" + result4);
    }
}

/*
3 == 3.0 -> true
3은 int타입이고, 3.0은 double 타입이므로 int 타입인 3보다 큰 double 타입으로
변환한 다음 3.0 == 3.0으로 비교한다.

한가지 예외
0.1 == 0.1f         0.1f가 좌측 피연산자의 타입인 double로 변환되어 0.1 == 0.1
이 되고, true가 산출되어야 하지만, 이 결과는 false가 나온다.
->  이진 포맷의 가수를 사용하는 모든 부동소수점 타입은 0.1을 정확히 표현할 수가
    없어서 0.1f는 0.1의 근사값으로 표현되어 0.10000000000141... 와 같은 값이 되기 때문
    즉 0.1보다 더 큰 값이 되어 버린다.
    해결책)
    피연산자를 모두 float 타입으로 강제 타입 변환한 후에 비교 연산하거나, 정수로 변환한다.
*/