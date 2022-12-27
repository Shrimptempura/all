package Chapter04;
// 바깥쪽 반복문 종료
public class BreakOutter {
    public static void main(String[] args) {
        Outter: for (char upper = 'A'; upper <= 'Z'; upper++)
        {
            for (char lower = 'a'; lower <= 'z'; lower++)
            {
                System.out.println(upper + "-" + lower);
                if (lower == 'g')
                    break Outter;
            }
        }
        System.out.println("프로그램 실행 종료");
    }
}

/*
중첩된 반복문에서 바깥쪽 반복문까지 종료시키려면 바깥쪽 반복문에 이름(라벨)을 붙이고
"break 이름;"을 사용한다.

중첩된 for문에서 lower 변수가 'g'를 갖게 되면 바깥쪽 for문까지 빠져나오게 했다.
Outter: for~        break Outter;
*/