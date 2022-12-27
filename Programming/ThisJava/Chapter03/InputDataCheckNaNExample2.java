package Chapter03;

public class InputDataCheckNaNExample2 {
    public static void main(String[] args) {
        String userInput = "NaN";
        double val = Double.valueOf(userInput);

        double currentBalance = 10000.0;

        if (Double.isNaN(val)) {
            System.out.println("NaN이 입력되어 처리할 수 없음");
            val = 0.0;
        }

        currentBalance += val;
        System.out.println(currentBalance);
    }
}
/*
10행의 if조건식에서는 Double.isNaN() 메소드를 이용해서 변수 val의 값이 NaN인지 확인한다.
주의할점은 NaN인지 조사할 때 == 연산자를 사용하면 안된다.

NaN은 != 연산자를 제외한 모든 비교 연산자를 사용할 경우 false 값을 리턴하기 때문이다.
Double.isNaN() 메소드는 매개값이 NaN이면 true를 리턴한다.
*/