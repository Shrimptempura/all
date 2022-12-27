package Chapter04;
// if 문
public class IfExample {
    public static void main(String[] args) {
        int score = 93;

        if (score >= 90) {
            System.out.println("점수가 90보다 큽니다.");
            System.out.println("등급은 A 입니다.");
        }

        if (score < 90)
            System.out.println("점수가 90보다 낮습니다");
            System.out.println("등급은 B 입니다.");
            // 일부러 괄호 안씌움, 고로 추가 출력 14행
    }
}
