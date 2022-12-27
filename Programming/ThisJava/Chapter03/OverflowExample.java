package Chapter03;
// 오버플로우
public class OverflowExample {
    public static void main(String[] args) {
        int x = 1000000;
        int y = 1000000;
        int z = x * y;
        System.out.println(z);
    }
}
/*
변수 z는 컴파일 에러는 나진 않지만, 올바른 값이 저장되지 않는다.
int 값의 범위를 초과하기 때문 -> 쓰레기값 얻게됨
올바른 값을 얻기 위해서는 변수 x와 y중 최소 하나라도 long타입이 되어야 하고,
변수 z가 long타입이어야 한다.

package Chapter03;
// 오버플로우 해결
public class OverflowExample {
    public static void main(String[] args) {
        long x = 1000000;
        long y = 1000000;
        long z = x * y;
        System.out.println(z);
    }
}

위에서와 같이 코드에서 피연산자의 값을 직접 리터널로 주는 경우는 드물다.
대부분 사용자로부터 입력받거나 프로그램 실행 도중에 생성되는 데이터로 산술 연산이 수행된다.
이런 경우 바로 산술 연산자(+, -, *, /)를 사용하지 말고 메소드를 이용하는 것이 좋다.

메소드는 산술 연산을 하기 전에 피연산자들의 값을 조사해서 오버플로우를 탐지할수 있다.
*/