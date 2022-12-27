package Chapter05;

import java.util.Scanner;

public class Exercise09 {
    public static void main(String[] args) {
        boolean run = true;
        int studentNum = 0;
        int[] scores = null;
        Scanner scanner = new Scanner(System.in);

        while (run)
        {
            System.out.println("-----------------------------------------------------");
            System.out.println("1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석| 5.종료");
            System.out.println("-----------------------------------------------------");
            System.out.print("선택> ");

            int selectNo = scanner.nextInt();

            if (selectNo == 1)
            {
                System.out.print("학생수> ");
                studentNum = scanner.nextInt();
                scores = new int[studentNum];
                // 9행의 null값 초기화때문에, 따로 객체 참조를 해줘야함
            }
            else if (selectNo == 2)
            {
                for (int i = 0; i < studentNum; i++)
                {
                    System.out.print("scores[" + i + "]> ");
                    scores[i] = scanner.nextInt();
    // 9행에서 null로 초기화를 해서, score[0] = 10 이런식으로 값을 저장하려고 하면 
    // NullPointerException이 발생한다. 이유) scores 변수가 참조하는 배열 객체가 
    // 없기 때문이다. 예외오류 발생시, 예외가 발생된 곳에서 객체를 참조하지 않은
    // 상태로 참조 타입 변수를 사용하고 있음을 알아야 한다.
    // 대처 방법은 이 변수를 추적해서 객체를 참조하도록 수정해야 한다.
                }
            }
            else if (selectNo == 3)
            {
                for (int i = 0; i < studentNum; i++)
                    System.out.println("scores[" + i + "]: " + scores[i]);
            }
            else if (selectNo == 4)
            {
                int sum = 0, max = 0;
                double avg = 0.0;
                for (int i = 0; i < studentNum; i++)
                {
                    sum += scores[i];
                    if (scores[i] > max)
                        max = scores[i];
                }
                avg = (double)sum / studentNum;
                System.out.println("최고 점수 : " + max);
                System.out.println("평균 점수 : " + avg);
            }
            else if (selectNo == 5)
                run = false;
        }

        scanner.close();
        System.out.println("프로그램 종료");
    }
}
