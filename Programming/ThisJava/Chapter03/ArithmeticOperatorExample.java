package Chapter03;
// 산술 연산자
public class ArithmeticOperatorExample {
    public static void main(String[] args) {
        int v1 = 5;
        int v2 = 2;

        int result1 = v1 + v2;
        System.out.println("result1=" + result1);

        int result2 = v1 - v2;
        System.out.println("result2=" + result2);

        int result3 = v1 * v2;
        System.out.println("result3=" + result3);

        int result4 = v1 / v2;
        System.out.println("result4=" + result4);

        int result5 = v1 % v2;
        System.out.println("result5=" + result5);

        double result6 = (double) v1 / v2;
        System.out.println("result6=" + result6);
    }
}
/*
1) long을 제외한 정수 타입 연산은 int 타입으로 산출되고, 피연산자 중 하나라도 실수
타입이면 실수 타입으로 산출된다.
ex)
byte byte1 = 1;
byte byte2 = 1;
byte byte3 = byte1 + byte2;     compile error
-> int result1 = byte1 + byte2;

int int1 = 10;
int int2 = 4;
int result2 = int1 / int2;        // 2
double result3 = int1 / int2;     // 2.0
**중요;     먼저 int1 / int2로 int 타입 값이 나옴 -> 2;
            그다음 double형 변환 -> 2.0;

2.5를 얻고 싶으면 피연산자 중 최소한 하나는 실수 타입이어야 한다.
1.0을 곱하여 실수 타입으로 만든 후 산술 연산하거나 int1 int2중 하나를 double 타입으로
강제 타입 변환(캐스팅)한 후 산술 연산을 하면된다.
double result3 = (int * 1.0) / int2;
double result3 = (double) int1 / int2;
double result3 = int 1 / (double) int2;
*/
