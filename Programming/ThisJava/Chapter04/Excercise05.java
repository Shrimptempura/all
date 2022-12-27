package Chapter04;
// 중첩 for문을 이용하여 방정식 4x + 5y = 60의 모든 해를 구해서 (x, y) 형태로 출력
// 단, x와 y는 10이하의 자연수입니다.
public class Excercise05 {
    public static void main(String[] args) {
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 0; j <= 10; j++)
            {
                if (4 * i + 5 * j == 60)
                    System.out.println("(" + i + ", " + j + ")");
            }
        }
    }
}
