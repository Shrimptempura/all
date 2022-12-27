package Chapter10.Practice;
// 사용자 정의 예외 클래스
public class WrongPasswordException extends Exception {
    public WrongPasswordException() {}
    public WrongPasswordException(String message) {
        super(message);
    }
}
