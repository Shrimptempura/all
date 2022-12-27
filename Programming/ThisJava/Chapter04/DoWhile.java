package Chapter04;
// do-while 문
import java.util.Scanner;
// Scanner 클래스를 사용하기 위해 필요
public class DoWhile {
    public static void main(String[] args) {
        System.out.println("메시지를 입력하세요");
        System.out.println("프로그램을 종료하려면 q를 입력하시오");

        Scanner scanner = new Scanner(System.in);
        String inputString;

        do {
            System.out.println(">");
            inputString = scanner.nextLine();
            System.out.println(inputString);
        } while (!inputString.equals("q"));

        scanner.close();
        System.out.println();
        System.out.println("프로그램 종료");
    }
}

/*
System.in.read() 메소드는 하나의 키 코드만 읽기 때문에 콘솔에 입력된 문자열을 한 번에
읽을 수 없다. 대신 다음과 같이 Scanner 객체를 생성하고 nextLine() 메소드를 호출하면
콘솔에 입력된 문자열을 한 번에 읽을 수 있다.

nextLine() 메소드로 읽은 문자열을 저장하기 위해서는 String 변수가 필요한데
윗 코드에서는 inputString 변수에 저장했다.

Scanner scanner = new Scanner(System.in);       // Scanner 객체 생성
String inputString = scanner.nextLine();        // nextLine 메소드 호출

Scanner를 사용하려면 1행의 import문이 필요하다.
10행에서 Scanner를 생성했고, 15행에서 nextLine() 메소드로 문자열을 읽는다.

!inputString.equals("q");
q가 리턴한 boolean 값을 반대로 바꾸는데 equals() 메소드는 문자열이 서로 같은지
비교하는 역할을 한다. 즉 inputString 변수의 문자열과 "q"가 같으면 true 리턴
그렇지 않으면 false가 산출되어 do-while문을 종료한다.
*/