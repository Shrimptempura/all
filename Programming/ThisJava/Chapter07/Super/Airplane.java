package Chapter07.Super;
// super 변수
public class Airplane {
    public void land() {
        System.out.println("착륙합니다.");
    }
    public void fly() {
        System.out.println("일반비행합니다.");
    }
    public void takeOff() {
        System.out.println("이룩합니다.");
    }
}

/*
<부모 메소드 호출(super)>
자식 클래스에서 부모 클래스의 메소드를 오버라이딩하게 되면, 부모 클래스의 메소드는
숨겨지고 오버라이딩된 자식 메소드만 사용된다. 그러나 자식 클래스 내부에서 오버라이딩된
부모 클래스의 메소드를 호출해야 하는 상황이 발생한다면 명시적으로 super 키워드를 붙여서
부모 메소드를 호출 할 수 있다.
super는 부모 객체를 참조하고 있기 때문에 부모 메소드에 직접 접근할 수 있다.

super.부모메소드();

class Parent {
    void method1() { ... }
    void method2() { ... }
}

class Child extends Parent {
    void method2() { ... } // Overriding
    void method3() {
        method2();  // 재정의된 호출 31행
        super.method2(); // 27행 부모 메소드 호출
    }
}

Airplane 클래스를 상속해서 SupersonicAirplane 클래스를 만들어 보자.
Airplane의 fly() 메소드는 일반 비행이지만 SupersonicAirplane의 fly()는
초음속 비행 모드와 일반 비행 모드 두가지로 동작하도록 설계해보자.
*/  