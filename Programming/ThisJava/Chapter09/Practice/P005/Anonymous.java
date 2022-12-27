package Chapter09.Practice.P005;
// 익명 구현 클래스와 객체 생성
public class Anonymous {
    Vehicle field = new Vehicle() {
        @Override
        public void run() {
            System.out.println("자전거가 달립니다.");
        }
    };

    void method1() {
        Vehicle localVar = new Vehicle() {
            @Override
            public void run() {
                System.out.println("승용차가 달립니다.");
            }
        };

        localVar.run();
        // anony.method1();은 객체 생성후, 재정의까지만하고, 19행 명령에 의해
        // 재정의된 run() 메소드 실행, 19행 없으면 출력 불가
    }

    void method2(Vehicle v) {
        v.run();
        // 뭐든 올수 있는데 AnonyEx에서 new Vehicle과 run() 재정의
        // v는 Vehicle, v.run() -> anonyEx의 재정의된 method output
        // !!으로 추정, 확실x
    }
}
