package Chapter03;
// 논리 연산자
public class LogicalOperatorEaxmple {
    public static void main(String[] args) {
        int charCode = 'A';

        if ((charCode >= 65) & (charCode <= 90)) {
            // && 대신 &도 가능한가 보다.
            System.out.println("대문자 이군요");
        }

        if ((charCode >= 97) && (charCode <= 122)) {
            System.out.println("소문자 이군요");
        }

        if (!(charCode <= 48) && !(charCode > 57)) {
            System.out.println("0~9 숫자 이군요");
        }

        int value = 6;

        if ((value % 2 == 0) || (value % 3 == 0)) {
            System.out.println("2 또는 3의 배수 이군요");
        }

        if ((value % 2 == 0) || (value % 3 == 0)) {
            System.out.println(("2 또는 3의 배수 이군요"));
        }
    }
}

/*
논리 연산자는 논리곱(&&), 논리합(||), 배타적 논리합(^), 논리 부정(!) 연산을 수행한다.
논리 연산자의 피연산자는 boolean 타입만 사용할 수 있다.

&& -> 피연산자 모두 true인 경우에만 true
|| -> 피연산자중 하나만 true이면 true
^ -> 피연산자중 하나만 true이고 다른 하나가 false일 경우에만 true
! -> 피연산자의 논리값을 바꿈
*/