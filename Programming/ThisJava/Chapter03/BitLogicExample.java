package Chapter03;
// 비트 논리 연산자
public class BitLogicExample {
    public static void main(String[] args) {
        System.out.println("45 & 25 = " + (45 & 25));
        System.out.println("45 | 25 = " + (45 | 25));
        System.out.println("45 ^ 25 = " + (45 ^ 25));
        System.out.println("~45 = " + (~45));
    }
}

/*
비트 연산자는 데이터를 비트(bit) 단위로 연산한다. 즉 0과 1이 피연산자가 된다.
그렇기 때문에 0과 1로 표현이 가능한 정수 타입만 비트 연사을 할 수 있다.
실수 타입인 float와 double은 비트 연산을 할 수 없다.

비트 연산자는 기능에 따라 비트 논리 연산자(&, |, ^, ~)와 비트 이동 연산자(<<, >>, >>>)로
구분한다. 일반 논리 연산자가 true와 false를 연산한다면 비트 논리 연산자는 0과 1을 연산한다.
비트 이동 연산자는 비트를 좌측 또는 우츠긍로 이동하는 연산자이다.

<비트 논리 연산자(&, |, ^)
AND - & - 두 비트 모두 1일 경우에만 연산결과가 1
OR - | - 두 비트 중 하나만 1이면 연산 결과는 1
XOR - ^ - 두 비트 중 하나는 1이고 다른 하나가 0일 경우 연산 결과는 1
NOT - ~ - 보수

45와 25의 논리곱(&), 논리합(|)
= 2진수로 표현후 비교하기(각 자리 0과 1), -> 9와 61..

비트 연산자는 피연산자를 int 타입으로 자동 타입 변환한 후 연산을 수행한다.
그렇기 때문에, byte, short, char 타입을 비트 논리 연산하면 그 결과는 int 타입이 된다.

다음은 같은 이유로 에러
byte num1 = 45;
byte num2 = 25;
byte result = num1 & num2;  // compile error -> int result = num1 & num2;

실제로 45와 25의 비트 연산은 4byte인 int 타입으로 변환된 후 연산된다.
*/