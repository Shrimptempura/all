package Chapter09.Practice.P005;
// 익명 구현 클래스와 객체 생성
public class AnonymousExample {
    public static void main(String[] args) {
        Anonymous anony = new Anonymous();
        anony.field.run();      // 익명 객체 필드 사용
        anony.method1();        // 익명 객체 로컬 변수 사용
        anony.method2(          // 익명 객체 매개값 사용
            new Vehicle() {     // 9-14 :매개값, void method2(Vehicle v) {v.run()}
                @Override
                public void run() {
                    System.out.println("트럭이 달립니다.");
                }
            }
        );
    }
}
