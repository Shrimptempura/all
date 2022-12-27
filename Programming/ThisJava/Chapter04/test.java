package Chapter04;
// while문과 Scanner를 이용해서 키보드로부터 입력된 데이터로 예금, 출금, 조회, 종료
// 기능을 제공하는 코드를 작성하자.
import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        boolean run = true;
        int balance = 0;

        Scanner scanner = new Scanner(System.in);

        while (run)
        {
            System.out.println("-----------------------------");
            System.out.println("1.예금 | 2.출금 | 3.잔고 | 4.종료");
            System.out.println("-----------------------------");
            System.out.println("선택> ");

            int num = scanner.nextInt();

            switch (num)
            {
                case 1:
                    System.out.println("> 예금액");
                    balance += scanner.nextInt();
                    System.out.println(balance);
                    break;
                case 2:
                    System.out.println("> 출금");
                    balance -= scanner.nextInt();
                    break;
                case 3:
                    System.out.println("> 잔고");
                    System.out.println(balance);
                    break;
                case 4:
                    run = false;
                    break;
            }
        }
        scanner.close();
        System.out.println("> 프로그램 종료");
    }
}
