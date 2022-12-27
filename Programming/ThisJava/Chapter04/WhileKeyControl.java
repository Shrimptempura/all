package Chapter04;
// 키보드로 while문 제어
public class WhileKeyControl {
    public static void main(String[] args) throws Exception {
        // throws Exception -> 20행 keyCode = System.in.read();의 예외 처리 코드
        boolean run = true;
        int speed = 0;
        int keyCode = 0;

        while (run)
        {
            if (keyCode != 13 && keyCode != 10)
            // Enter키의 캐리지 리턴 13, Enter키의 라인피드 10
            {
                System.out.println("----------------------- ");
                System.out.println("1.증속 | 2.감속 | 3.중지");
                System.out.println("----------------------- ");
                System.out.println("선택: ");
            }
            
            keyCode = System.in.read();
            // 키보드의 키 코드를 읽음
            
            if (keyCode == 49)
            {
                speed++;
                System.out.println("현재 속도=" + speed);
            }
            else if (keyCode == 50)
            {
                speed--;
                System.out.println("현재 속도=" + speed);
            }
            else if (keyCode == 51)
                run = false;
        }

        System.out.println("프로그램 종료");
    }
}
