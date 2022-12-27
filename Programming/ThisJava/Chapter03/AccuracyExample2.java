package Chapter03;

public class AccuracyExample2 {
    public static void main(String[] args) {
        int apple = 1;

        int totalPieces = apple * 10;
        int number = 7;
        int temp = totalPieces - number;

        double result = temp / 10.0;

        System.out.println("사과 한개에서 ");
        System.out.println("0.7 조각을 빼면, ");
        System.out.println(result + " 조각이 남는다.");
    }
}

// result1 = 1 - 7*0.1              0.66999 0.29999
// result2 = 3 / 10.0
