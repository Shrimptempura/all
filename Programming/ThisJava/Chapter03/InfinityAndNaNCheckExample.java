package Chapter03;
// Infinity와 NaN
public class InfinityAndNaNCheckExample {
    public static void main(String[] args) {
        int x = 5;
        double y = 0.0;

        // double z = x / y;       // 8, 9행 각각 실행
        double z = x % y;

        System.out.println(Double.isInfinite(z));
        System.out.println(Double.isNaN(z));

        System.out.println(z + 2);  // 문제가 되는 코드
    }
}
/*
<NaN과 Infinity 연산>
/ 또는 % 연산자를 사용할 때 주의점
: 좌측 피연산자가 정수 타입인 경우 나누는 수인 우측 피연산자는 0을 사용할 수 없다.
    만약 0으로 나누면 컴파일은 정상적으로 되지만, 실행시 ArithmeticException(예외) 발생

    5 / 0 -> ArithmeticException 예외 발생
    5 % 0 -> ArithmeticException 예외 발생

자바는 프로그램 실행 도중 예외가 발생하면 실행이 즉시 멈추고 프로그램은 종료된다.
ArithmeticException이 발생했을 경우 프로그램이 종료되지 않도록 하려면 예외 처리를 해야
한다. 예외 처리는 예외가 발생되었을 경우, catch 블록을 실행하도록 하는것이다.

try {
    // int z = x / y;       y가 0일 경우 ArithmeticException 발생
    int z = x % y;
    System.out.println("z: " + z);
} catch(ArithmeticException e) {    // 예외처리
    System.out.println("0으로 나누면 안됨");
}

그러나 실수 타입인 0.0 또는 0.0f로 나누면 ArithmeticException이 발생하지 않고,
/ 연산의 결과는 Infinity(무한대) 값을 가지며, % 연산의 결과는 NaN(Not a Number)을 가진다.

    5 / 0.0 -> Infinity
    5 % 0.0 -> NaN

주의할 점 : /와 %의 결과가 Infinity 또는 NaN이 나오면 다음 연산을 수행해서는 안된다.
왜냐하면 이값과 산술 연산을 하면 어떤 수와 연산하더라도 Infinity와 NaN이 산출되어
데이터가 엉망이 될 수 있다.
    Infinity + 2 -> Infinity
    NaN + 2 -> NaN
*/

/* <코드 설명>
코드에서 /와 % 연산의 결과가 Infinity 또는 NaN인지 확인하려면 Double.isInfinite()와
Double.isNaN() 메소드를 이용하면 된다.
이 메소드들은 double 타입의 값을 매개값으로 받아서 이 값이 Infinity 또는 NaN이라면
true을 리턴하고, 그렇지 앟다면 false를 리턴한다.

연산의 결과가 Infinity 또는 NaN이면 절대로 다음 연산을 수행하지 못하도록 if문을 사용해서
실행 흐름을 변경해야 한다.

    if (Double.isInfinite(z) || Double.isNaN(z)) {
        System.out.println("값 산풀 불가");
    } else {
        System.out.println(z + 2);      // false일 경우에만 연산
    }

*/