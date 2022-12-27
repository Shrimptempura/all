package Chapter10.Practice;
// 사용자 정의 예외 클래스
public class NotExistIDException extends Exception {
    public NotExistIDException() {}
    public NotExistIDException(String message) {
        super(message);
    }
}

/*
로그인 기능을 Member 클래스의 login() 메소드에서 구현하려고 한다.
존재하지 않는 ID 입력시 NotExistIDException 발생, 잘못된 패스워드 입력시
WrongPasswordException을 발생시키려고 한다.
*/