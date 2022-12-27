package Chapter04;
// char 타입의 Switch 문
public class SwitchCharExample {
    public static void main(String[] args) {
        char grade = 'B';

        switch (grade) {
            case 'A':
            case 'a':
                System.out.println("우수 회원입니다.");
                break;
            case 'B':
            case 'b':
                System.out.println("일반 회원입니다.");
                break;
            default:
                System.out.println("손님입니다.");
        }
    }
}

/*
자바 6까지는 switch문의 괄호에는 정수 타입(byte, char, short, int, long) 변수나 정수값을
산출하는 연산식만 올 수 있었다. 자바 7부터는 String 타입의 변수도 올 수 있다.
*/
