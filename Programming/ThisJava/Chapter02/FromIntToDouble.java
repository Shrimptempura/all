package Chapter02;
// 정수 타입을 실수 타입으로 변환할 때 정밀도 손실을 피한다.
public class FromIntToDouble {
    public static void main(String[] args) {
        int num1 = 1234567890;
        int num2 = 1234567890;

        double num3 = num2;
        num2 = (int)num3;

        int result = num1 - num2;
        System.out.println(result);
    }
}
/*
double: 부호(1비트) + 지수(11비트) + 가수(52비트)
*/