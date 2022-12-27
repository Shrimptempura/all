package Chapter04;
// float 타입 카운터 변수
public class ForFloatCounterExample {
    public static void main(String[] args) {
        float x;
        for (x = 0.1f; x <= 1.0f; x += 0.1f) 
        {
            System.out.println(x);
        }
    }
}
// 여기서 for문은 10번 반복이나
/* 0.1은 float 타입으로 정확하게 표현할 수 없기 때문에 x에 더해지는 실제값은 약간 크다. 
--> 결국 루프는 9번만 실행된다.
*/

