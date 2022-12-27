package Chapter02;

public class VariableScopeExmaple {
    public static void main(String[] args) {
        int v1 = 15;
        int v2 = 0;
        if (v1 > 10) {
            v2 = v1 - 10;   // v2 선언은 if 블록 내부이므로 if블록 바깥라인에서
                            // 사용불가
        }
        // int v3 = v1 + v2 + 5;   // 틀린게 아니라 경고문, 변수를 쓰고 사용하지 않았다.
        System.out.println(v2);
        // 6행 v2 close위해 내가 임의로 작성한 코드
    }
}
