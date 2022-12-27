package Chapter10.UserDefineException;
// 사용자 정의 예외 발생시키기
public class AcountExample {
    public static void main(String[] args) {
        Account account = new Account();
        // 예금하기
        account.deposit(10000);
        System.out.println("예금액: " + account.getBalance());
        // 출금하기
        try {
            account.withdraw(30000);
        } catch (BalanceInsufficientException e) {
            String message = e.getMessage();    // 예외 메시지 얻기
            System.out.println(message);
            System.out.println();
            e.printStackTrace();        // 예외 추적 후 출력
        }
    }
}

/*
AccountExample 클래스는 Account 클래스를 이용해서 예금과 출금을 한다.
출금할 때 withdraw() 메소드를 사용하므로 예외 처리가 꼭 필요하다.
예외 처리 코드에서 BalanceInsufficientException 객체의 getMessage() 메소드와
printStackTrace() 메소드로 예외에 대한 정보를 얻어내고 있다.

AccountExampe 클래스를 실행하면..
"잔고부족: 20000만 모자람"은 getMessage() 메소드의 리턴값을 출력한 것이다.
printStackTrace() 메소드에 의해 출력된 내용을 보면 Account.java 18라인에서
최초로 예외가 발생하여 AccountExample.java 11라인의 메소드 호출 위치로
예외가 떠넘겨졌음을 알 수 있다.
*/