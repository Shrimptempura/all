package Chapter05;
// main() 메소드의 매개 변수
public class MainStringArrayArgument {
    public static void main(String[] args) {
        if (args.length != 2)
        // 입력된 데이터 개수가 두 개가 아닐 경우
        {
            System.out.println("프로그램의 사용법");
            System.out.println("java MainStringArrayArgument num1 num2");
            System.exit(0);     // 프로그램 강제 종료
        }

        String strNum1 = args[0];       // 첫 번째 데이터 얻기
        String strNum2 = args[1];       // 두 번째 데이터 얻기

        int num1 = Integer.parseInt(strNum1);   // 문자열을 정수로 변환
        int num2 = Integer.parseInt(strNum2);   // 문자열을 정수로 변환

        int result = num1 + num2;
        System.out.println(num1 + " + " + num2 + " = " + result);
    }   
}

/*
<커맨드 라인 입력>
main() 메소드의 매개값인 String[] args

    public static void main(String[] args) {...}
"java 클래스"로 프로그램을 실행하면 JVM은 길이가 0인 String 배열을 먼저 생성하고
main() 메소드를 호출할 때 매개값으로 전달한다.

만약 "java 클래스"뒤에 공백으로 구분된 문자열 목록을 주고 실행하면, 문자열 목록으로
구성된 String[] 배열이 생성되고 main() 메소드를 호출할 때 매개값으로 전달된다.
    java 클래스 문자열0, 문자열1 ... 문자열n - 1

String[] args = {문자열0, 문자열1, ... , 문자열n - 1}
            |-> main() 메소드 호출시 전달
public static void main(String[] args) {
    ...
}

main() 메소드는 String[] args 매개 변수를 통해서 커맨드 라인에서 입력된
데이터의 수(배열의 길이)와 입력된 데이터(배열의 항목 값)를 알 수 있게 된다.

윗 예제는 2개의 문자열을 주지 않으면 프로그램 사용법과 강제종료하도록 했다.

프로그램 실행시 2개의 문자열이 정확히 입력되었다면 2개의 문자열을 int 타입 숫자로
변환하고 덧셈 연산을 실행한다.

java MainStringArrayArgument 10 20
args는 {"10", "20"} 배열을 참조하고 args[0]은 "10", args[1]은 "20"을 얻는다.

문자열을 산술 연산을 할 수 없기 때문에 이 문자열들은 Integer.parseInt() 메소드를
이용해서 정수로 변환한다.

int 변수 = Integer.parseInt("정수로 변환 가능한 문자열");
-> 정수로 변환 후 저장

만약 정수로 변환 할 수 없는 문자열이 주어진 경우 NumberFormatException 예외 발생
*/