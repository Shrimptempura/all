package Chapter06.StaticMethodnB;
// 정적 메소드와 블록 선언 시 주의점
public class Car {
    int speed;

    void run() {
        System.out.println(speed + "으로 달립니다.");
    }

    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.speed = 60;
        myCar.run();
    }
}

/*
<정적 메소드와 블록 선언 시 주의 점>
정적 메소드와 정적 블록을 선언할 때 주의할 점은 객체가 없어도 실행된다는 특징 때문에,
이들 내부에 인스턴스 필드나 인스턴스 메소드를 사용할 수 없다. 또한 객체 자신의 참조인
this 키워드도 사용이 불가능하다.

ex) 컴파일 오류 예시

public class ClassName {
    // 인스턴스 필드와 메소드
    int field1;
    void method1() {...}

    // 정적 필드와 메소드
    static int field2;
    static void method2() {...}

    // 정적 블록
    static {
        field1 = 10;            // (X)
        method1();              // (X)
        field2 = 10;            // (O)
        method2();              // (O)
    }

    // 정적 메소드
    static void Method3 {
        this.field1 = 10;       // (X)
        this.method1();         // (X)
        field2 = 10;            // (O)
        mthod2();               // (O)
    }
}

정적 메소드와 정적 블록에서 인스턴스 멤버를 사용하고 싶다면 다음과 같이 객체를
먼저 생성하고 참조 변수로 접근해야 한다.
static void Method3() {
    ClassName obj = new ClassName();
    obj.field1 = 10;
    obj.method1();
}

main() 메소드도 동일한 규칙이 적용된다. main() 메소드도 정적(static) 메소드이므로
객체 생성 없이 인스턴스 필드와 인스턴스 메소드를 main() 메소드에서 바로 사용할 수 없다.

    public class Car {
        int speed;

        void run() {...}

        public static void main(String[] args) {
            speed = 60;     // (X)
            run();          // (X)
        }
    }

수정본
public static void main(String[] args) {
    Car myCar = new Car();
    myCar.speed = 60;
    myCar.run();
}
*/