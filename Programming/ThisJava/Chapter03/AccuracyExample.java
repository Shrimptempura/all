package Chapter03;
// 정확하게 계산할 때에는 부동소수점 타입을 사용하지 않는다.
public class AccuracyExample {
    public static void main(String [] args) {
        int apple = 1;
        double pieceUnit = 0.1;
        int number = 7;

        double result = apple - number * pieceUnit;

        System.out.println("사과 한개에서 ");
        System.out.println("0.7 조각을 빼면, ");
        System.out.println(result + "조각이 남는다.");
    }
}

// 정확하게 게산해야 할 때는 부동소수점(실수) 타입을 사용하지 않는 것이 좋다.
// 우리는 당연히 result를 0.3으로 생각하지만 출력값을 보면 0.2999999...93이 된다.
// 이것은 이진 포맷의 가수를 사용하는 부동소수점 타입(float, double)은 0.1을
// 정확히 표현할 수가 없어 근사치로 처리하기 때문이다.
// 정확한 계산이 필요하다면 정수 연산으로 변경해서 계산해야 한다.
