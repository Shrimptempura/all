package Chapter10.UserDefineException;
// 잔고 부족 예외를 사용자 정의 예외 클래스로 선언
public class BalanceInsufficientException extends Exception {
    public BalanceInsufficientException() { }
    public BalanceInsufficientException(String message) {
        super(message);
    }
}

/*
BalanceInsufficientException은 Exception을 상속하기 때문에 컴파일러에 의해
체크되는 예외가 된다. 그래서 소스 작성 시 try-catch 블록으로 예외 처리가 가능하다.
*/