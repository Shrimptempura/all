package Chapter06.Pratice.NumberOf20;

import java.util.Scanner;

public class BankApplication {
    // 계좌들에 대한 저장소, Account 객체를 여러개 저장 가능한 타입 = 배열
    private static Account[] accountArray = new Account[100];
    // 7행에서 static을 사용한 이유 : main에서 바로 사용하기 위해
    // static이 없으면 main에서 바로 사용할수 없다. main에서 객체를 생성하고 
    // 바로 사용하기 위해 static을 붙여줌
    private static Scanner scanner = new Scanner(System.in);
    // 키보드에서 입력받기, 3행 참조(control shift o)

    public static void main(String[] args) {
        boolean run = true;
        while (run) {
            System.out.println("--------------------------------------------------");
            System.out.println("1.계좌생성 | 2.계좌목록 | 3.예금 | 4.출금 | 5.종료");
            System.out.println("--------------------------------------------------");
            System.out.print("선택> ");

            int selectNo = scanner.nextInt();

            if (selectNo == 1) { 
                createAccount();
            }
            else if (selectNo == 2) {
                accountList();
            }
            else if (selectNo == 3) {
                deposit();
            }
            else if (selectNo == 4) {
                withdraw();
            }
            else if (selectNo == 5) {
                run = false;
            }
        } 
        System.out.println("프로그램 종료");
    }

    // 계좌생성하기
    private static void createAccount() {
        System.out.print("--------------\n계좌생성: \n--------------");
        // System.out.println("-------------");

        System.out.print("계좌번호: ");
        String ano = scanner.next();
        // ln안붙이고 scanner.next()로 계좌번호(문자)를 바로 받음(ano);

        System.out.print("계좌주: ");
        String owner = scanner.next();

        System.out.print("초기입금액: ");
        int balance = scanner.nextInt();
        // ano, owner, balance는 그냥 변수 이름일뿐 의미부여x
        
        Account newAccount = new Account(ano, owner, balance);
        // 배열 중간에 null인 경우 무시하고 다음 ++번호에 저장이 아니라
        // 중간에 비어있는 null이면 그곳에 계좌정보 저장
        // 7행 배열에 정보 저장 
        for (int i = 0; i < accountArray.length; i++) {
            if (accountArray[i] == null) {
                accountArray[i] = newAccount;
                System.out.println("결과: 계좌가 생성되었습니다.");
                break;
            }
        }
    }

    // 계좌목록보기
    private static void accountList() {
        System.out.print("--------------\n계좌목록: \n--------------");
        for (int i = 0; i < accountArray.length; i++) {
            Account account = accountArray[i];
            if (account != null) {
                System.out.print(account.getAno());
                System.out.print("     ");
                System.out.print(account.getOwner());
                System.out.print("     ");
                System.out.print(account.getBalance());
                System.out.println();
            }
        }
    }

    // 예금하기
    private static void deposit() {
        System.out.print("--------------\n예금: \n--------------");
        System.out.print("계좌번호: ");
        String ano = scanner.next();
        System.out.print("예금액: ");
        int money = scanner.nextInt(); 

        Account account = findAccount(ano);
        if (account == null) {
            System.out.println("결과: 계좌가 없습니다.");
            return; 
        }
        account.setBalance(account.getBalance() + money);
        System.out.println("결고 :  입금이 성공되었습니다.");
    }

    // 출금하기
    private static void withdraw() {
        System.out.print("--------------\n예금: \n--------------");
        System.out.print("계좌번호: ");
        String ano = scanner.next();
        System.out.print("예금액: ");
        int money = scanner.nextInt(); 

        Account account = findAccount(ano);
        if (account == null) {
            System.out.println("결과: 계좌가 없습니다.");
            return; 
        }
        account.setBalance(account.getBalance() - money);
        System.out.println("결과: 출금이 성공되었습니다.");
    }

    // Account 배열에서 ano와 동일한 Account 객체 찾기
    private static Account findAccount(String ano) {
        Account account = null;
        for (int i = 0; i < accountArray.length; i++) {
            if (accountArray[i] != null) {
                String dbAno = accountArray[i].getAno();
                if (dbAno.equals(ano)) {
                    account = accountArray[i];
                    break;
                }
            }
        }
        return account;
    }
}
