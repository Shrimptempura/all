package Chapter03;

public class BitReverseOperaotrExample {
    public static void main(String[] args) {
        int v1 = 10;
        int v2 = ~v1;
        int v3 = ~v1 + 1;
        System.out.println(toBinaryString(v1) + " (십진수: " + v1 + ")");
        System.out.println(toBinaryString(v2) + " (십진수: " + v2 + ")");
        System.out.println(toBinaryString(v3) + " (십진수: " + v3 + ")");
        System.out.println();

        int v4 = -10;
        int v5 = ~v4;
        int v6 = ~v4 + 1;
        System.out.println(toBinaryString(v4) + " (십진수: " + v4 + ")");
        System.out.println(toBinaryString(v5) + " (십진수: " + v5 + ")");
        System.out.println(toBinaryString(v6) + " (십진수: " + v6 + ")");
    }

    public static String toBinaryString(int value) {
        String str = Integer.toBinaryString(value);
        while (str.length() < 32) {
            str = "0" + str;
        }
        return str;
    }
}
/*
비트 반전 연산자 주의점 : 비트 반전 연산자 산출 타입은 int 타입이다.
피연산자는 연산을 수행하기 전에 int 타입으로 변환되고, 비트 반전이 일어난다.

byte v1 = 10;
byte v2 = ~v1;      compile error
-> int v2 = ~v1;

비트 반전 연산자의 결과를 이용하여 부호가 반대인 정수를 구할 수 있다.
물론 간단하게 '-'도 가능하며, 비트 반전 연산자의 산출값에 1을 더하기하면
부호가 반대인 정수를 얻을수 있다.
ex) 10을 비트 반전 -> -11, +1 -> -10;
byte v1 = 10;
int v2 = ~v1 + 1;   // -10이 v2에 저장

Integer.toBinaryString() :
자바가 제공하는 정수값을 총 32비트의 이진 문자열로 리천하는 메소드

String v1BinaryString = integer.toBinaryString(10);
-> Integer.toBinaryString() 메소드는 앞의 비트가 모두 0이면 0은 생략하고 리턴하기 때문에
총 32개의 문자열을 얻기 위해 21 ~ 27행의 코드가 필요
    리턴하는 str의 문자 수를 조사해서 32보다 작으면 앞에 0을 붙임
*/