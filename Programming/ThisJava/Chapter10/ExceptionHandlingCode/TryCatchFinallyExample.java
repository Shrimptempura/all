package Chapter10.ExceptionHandlingCode;
// 일반 예외 처리
public class TryCatchFinallyExample {
    public static void main(String[] args) {
        try {
            Class clazz = Class.forName("java.lang.String2");
        } catch (ClassNotFoundException e) {
            System.out.println("클래스가 존재하지 않습니다.");
        }
    }
}

/*
Class.forName() 메소드는 매개값으로 주어진 클래스가 존재하면 Class 객체를 리턴하지만,
존재하지 않으면 ClassNotFoundException 예외를 발생시킨다.
ClassNotFoundException 예외는 일반 예외이므로 컴파일러는 개발자로 하여금
예외 처리 코드를 위와 같이 작성하도록 요구한다.

윗 예제를 실행시 6행에서 ClassNotFoundException이 발생하는데, 이것은 
java.lang.String2 클래스가 존재하지 않기 때문이다.

6행에서 예외 발생시, 7행을 실행해서 예외 처리하게 된다.

ArrayIndexOutOfBoundsException이나, NumberFormatException과 같은
실행 예외는 컴파일러가 예외 처리 코드를 체크하지 않기 때문에 이클립스에서도
빨간 밑줄이 생기지 않는다.

오로지 개발자의 경험에 의해 예외 처리를 다음 예제처럼 작성해주어야 한다.
*/