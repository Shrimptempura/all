package Chapter10.ExceptionThrows;
// 예외처리 떠넘기기
public class ThrowsExample {
    public static void main(String[] args) {
        try {
            findClass();
        } catch (ClassNotFoundException e) {
            System.out.println("클래스가 존재하지 않습니다.");
        }
    }

    public static void findClass() throws ClassNotFoundException {
        Class clazz = Class.forName("java.lang.String2");
    }
}

/*
윗 예제에선 Class.forName() 메소드를 사용하는 findClass() 메소드는 예외를
떠넘겼고, findClass()를 호출하는 main() 메소드에서 try-catch 블록을
사용해서 예외 처리를 했다.

main() 메소드에서도 throws 키워드를 사용해서 예외를 떠넘길 수 있는데,
결국 JVM이 최종적으로 예외 처리를 하게 된다. JVM은 예외의 내용을 콘솔(Console)에
출력하는 것으로 예외 처리를 한다.

    public static void main(String[] args) throws ClassNotFoundException {
        findClass();
    }


main() 메소드에서 throws Exception을 붙이는 것은 좋지 못한 예외 처리 방법이다.
프로그램 사용자는 프로그램이 알 수 없는 예외 내용을 출력하고 종료되는 것을
좋아하지 않는다. 그렇기 때문에 main()에서 try-catch 블록으로 예외를
최종 처리하는 것이 바람직하다.
*/