package Chapter04;
// 주사위의 번호를 뽑는 예제
public class IfDiceExample {
    public static void main(String[] args) {
        int num = (int)(Math.random() * 6) + 1;

        if (num == 1) {
            System.out.println("1번이 나왔습니다.");
        } else if (num == 2) {
            System.out.println("2번이 나왔습니다.");
        } else if (num == 3) {
            System.out.println("3번이 나왔습니다.");
        } else if (num == 4) {
            System.out.println("4번이 나왔습니다.");
        } else if (num == 5) {
            System.out.println("5번이 나왔습니다.");
        } else {
            System.out.println("6번이 나왔습니다.");
        }
    }
}

/*
<임의의 정수를 뽑는 방법>
Math.random() 메소드를 활용
-> 이 메소드ㅏ는 0.0과 1.0 사이에 속하는 double 타입의 난수 하나를 리턴한다.
0.0은 범위에 포함되고 1.0은 포함되지 않는다. 이것을 비교 연산자로 표현하면 다음과 같다.

0.0 <= Math.random() < 1.0

그렇다면 1 ~ 10까지 정수 중에서 하나의 정수를 얻기 위해.. 먼저 각 변에 10을 곱하면
다음과 같은 범위에 속하는 하나의 double 타입의 값을 얻을 수 있다.

0.0 * 10 <= Math.random() * 10 < 1.0 * 10
(0.0)                             (10.0)

이 상태에서 각 변을 int 타입으로 강제 타입 변환하면 다음과 같은 범위에 속하는
하나의 정수값을 얻을 수 있다.

(int) 0.0 <= (int)(Math.random() * 10) < (int) 10.0
    (0)                                     (10)

이 상태에서 각 변에 1을 더하면 비로소 1 ~ 10까지 정수 중에서 하나의 정수를 얻게 된다.

0 + 1 <= (int)(Math.random() * 10 + 1) < 10 + 1
    (1)         (1, 2, 3, ... 10)           (11)

이 원리를 이용하면 start부터 시작하는 n개의 정수 중에서 임의의 정수 하나를 얻기 위한
연산식을 다음과 같이 만들 수 있다.

int num = (int)(Math.random() * n) + start

예를 들어 주사위 번호 하나를 뽑기 위해 다음 연산식을 할 수 있다.

int num = (int)(Math.random() * 6) + 1;

또 다른 예로 로또 번호 하나를 뽑기 위해 다음 연산식을 사용 할 수 있다.

int num = (int)(Math.random() * 45) + 1;

*/