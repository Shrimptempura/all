package Chapter04;
// while문과 Math.random() 메소드를 이용해서 두 개의 주사위를 던졌을 때 나오는 눈을
// (눈1, 눈2) 형태로 출력하고, 눈의 합이 5가 아니면 계속 주사위를 던지고 눈의 합이
// 5이면 실행을 멈추는 코드는 작성하자
public class Excercise04 {
    public static void main(String[] args) {
        int x = 0, y = 0;
        while (x + y != 5)
        {
            x = (int)(Math.random() * 6) + 1;
            y = (int)(Math.random() * 6) + 1;
            System.out.println("(" + x + ", " + y + ")");
        }
    }
}

/*
public class Excercise04 {
    public static void main(String[] args) {
        while (true)
        {
            x = (int)(Math.random() * 6) + 1;
            y = (int)(Math.random() * 6) + 1;
            System.out.println("(" + x + ", " + y + ")");

            if (x + y == 5)
                break;
        }
    }
}
*/