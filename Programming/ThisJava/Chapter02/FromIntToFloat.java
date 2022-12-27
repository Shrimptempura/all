package Chapter02;
// 정수 타입을 실수 타입으로 변환할 때 정밀도 손실을 피한다.
public class FromIntToFloat {
    public static void main(String[] args) {
        int num1 = 1234567890;
        int num2 = 1234567890;

        float num3 = num2;
        num2 = (int)num3;

        int result = num1 - num2;
        System.out.println(result);
    }
}
/*
float: 부호(1비트) + 지수(8비트) + 가수(23비트)
int 값을 손실 없이 float 타입의 값으로 변환할 수 있으려면 가수 23비트로 표현 가능한
값이어야 한다. 1234567890은 23비트로 표현할 수 없기 때문에 근사치로 변환된다.
-> 즉 정밀도 손실 발생
*/