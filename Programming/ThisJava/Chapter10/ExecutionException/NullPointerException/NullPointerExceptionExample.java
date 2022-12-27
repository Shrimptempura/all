package Chapter10.ExecutionException.NullPointerException;
// NullPointerException이 발생하는 경우
public class NullPointerExceptionExample {
    public static void main(String[] args) {
        String data = null;
        System.out.println(data.toString());
    }
}

/*
자바 프로그램에서 가장 빈번하게 발생하는 실행 예외는 java.lang.NullPointerExcepion이다.
이것은 객체 참조가 없는 상태, 즉 null 값을 갖는 참조 변수로 객체 접근 연산자인
도트(.)를 사용했을때 발생한다.

객체가 없는 상태에서 객체를 사용하려 했으니 예외가 발생하는 것이다.

5행에 data 변수는 null 값을 가지고 있기 때문에 String 객체를 참조하고 있지 않다.
하지만 6행에서 String 객체의 toString() 메소드를 호출하고 있다.
여기서 NullPointerException이 발생한다.

<실행 예외>
실행 예외는 자바 컴파일러가 체크를 하지 않기 때문에 오로지 개발자의 경험에 의해서
예외 처리 코드를 삽입해야 한다. 

만약 개발자가 실행 예외에 대해 예외 처리 코드를 넣지 않았을 경우, 해당 예외 발생시
프로그램은 곧바로 종료된다.
*/
