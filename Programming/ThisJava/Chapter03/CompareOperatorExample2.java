package Chapter03;
// 비교 연산자2
public class CompareOperatorExample2 {
    public static void main(String[] args) {
        int v2 = 1;
        double v3 = 1.0;
        System.out.println(v2 == v3);       // true

        double v4 = 0.1;
        float v5 = 0.1f;
        System.out.println(v4 == v5);       // false
        System.out.println((float)v4 == v5);    // true
        System.out.println((int)(v4 * 10) == (int)(v5 * 10));   // true
    }
}

// 0.1 == 0.1f (이진 포맷의 가수 부동 소수점 타입은 0.1을 정확히 표현불가)
// 0.1f ==> 0.1의 근사값, 0.100000001419...