package Chapter06.Pratice.NumberOf19;

public class Account {
    private int balance;
    static final int MIN_BALANCE = 0;
    static final int MAX_BALANCE = 1000000;
    // static final 타입 상수 [= 초기값]; : 상수

    public int getBalance() {
        return balance;
    }

    public void setBalance(int balance) {
        if ((balance >= Account.MIN_BALANCE) && (balance <= Account.MAX_BALANCE)) {
            this.balance = balance;
            return;
        }
        else
            return;
    }
}
