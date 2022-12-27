package Chapter09.OutterfieldMethodRestriction;
// 바깥 필드와 메소드에서 사용 제한
public class A {
    // 인스턴스 필드
    B field1 = new B();     // (o)
    C field2 = new C();     // (o)

    // 인스턴스 메소드
    void method1() {
        B var1 = new B();       // (o)
        C var2 = new C();       // (o)
    }

    // 정적필드 초기화
    // static B field3 = new B();   (x)
    static C field4 = new C();      // (o)

    // 정적 메소드
    static void method2() {
        // B var1 = new B();        // (x)
        C var2 = new C();           // (o)
    }

    // 인스턴스 멤버 클래스
    class B {}

    //정적 멤버 클래스
    static class C {}
}

/*
<바깥 필드와 메소드에서 사용 제한>
멤버 클래스가 인스턴스 또는 정적으로 선언됨에 따라 바깥 클래스의 피르돠 메소드에
사용 제한이 생긴다.

윗 예제는 인스턴스 멤버 클래스(B)는 바깥 클래스의 인스턴스 필드(field1)의 초기값이나
인스턴스 메소드(method1())에서 객체를 생성할 수 있으나

정적 필드(field3)의 초기값이나 정적 메소드(method2())에서는 객체를 생성할 수 없다.

반면 정적 멤버 클래스(C)는 모든 필드의 초기값이나 모든 메소드에서
객체를 생성할 수 있다.
*/