package Chapter11.SystemClass.CurrentTimeMillisNnanoTime;
// 프로그램 실행 소요 시간 구하기
public class SystemTimeExample {
    public static void main(String[] args) {
        long time1 = System.nanoTime();     // 시작 시간 읽기

        int sum = 0;
        for (int i = 0; i <= 1000000; i++) {
            sum += i;
        }

        long time2 = System.nanoTime();     // 끝 시간 읽기

        System.out.println("1~1000000까지의 합: " + sum);
        System.out.println("계산에 " + (time2 - time1) + " 나노초가 "
            + "소요되었습니다.");
    }
}

/*
System 클래스의 currenTimimeMillis() 메소드와 nanoTime() 메소드는 컴퓨터의
시계로부터 현재 시간을 읽어서 밀리세컨드(1/1000초) 단위와 나노세컨드(1/10^9초)
단위의 long 값을 리턴한다.

    long time = System.currnetTimeMillis();
    long time = System.nanoTime();

리턴 값은 주로 프로그램의 실행 소요 시간 측정에 사용된다. 프로그램 시작시
시각을 읽고, 프로그램이 끝날 때 시각을 읽어서 차이를 구하면 프로그램 실행 
소요 시간이 나온다. 

윗 예제는 for문을 사용해 1부터 1000000까지의 합을 구하는데 걸린 시간을 출력한다.
*/