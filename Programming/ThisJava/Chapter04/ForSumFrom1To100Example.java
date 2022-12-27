package Chapter04;
// 1부터 100까지 합을 출력
public class ForSumFrom1To100Example {
    public static void main(String[] args) {
        int i, sum = 0;

        for (i = 1; i <= 100; i++)
            sum += i;
        System.out.println("1~100 합 : " + sum);
    }
}
