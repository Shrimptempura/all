package Chapter04;
// for문을 이용해서 삼각형 출력하는 코드 작성
public class Exercise06 {
    public static void main(String[] args) {
        for (int x = 1; x <= 5; x++)
        {
            for (int y = 1; y <= x; y++)
                System.out.print("*");
            System.out.println();
        }
    }
}
