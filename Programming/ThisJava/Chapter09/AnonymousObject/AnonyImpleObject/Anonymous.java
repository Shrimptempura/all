package Chapter09.AnonymousObject.AnonyImpleObject;
// 익명 구현 클래스와 객체 생성
public class Anonymous {
    // 필드 초기값으로 대입
    // 6-16 : 필드 선언과 초기값 대입
    RemoteControl field = new RemoteControl() {
        @Override
        public void turnOn() {
            System.out.println("TV를 켭니다.");
        }

        @Override
        public void turnOff() {
            System.out.println("TV를 끕니다.");
        }
    };

    void method1() {
        // 로컬 변수값으로 대입
        // 21-30 : 로컬 변수 선언과 초기값 대입
        RemoteControl localVar = new RemoteControl() {
            @Override
            public void turnOn() {
                System.out.println("Audio를 켭니다.");
            }
            @Override
            public void turnOff() {
                System.out.println("Audio를 끕니다.");
            }
        };
        // 로컬 변수 사용
        localVar.turnOn();
    }

    void method2(RemoteControl rc) {
        rc.turnOn();
    }
}
