package Chapter09.MemberClassRestriction;
// 멤버 클래스에서 사용 제한
public class A {
    int field1;
    void method1() { }

    static int field2;
    static void method2() { }

    class B {
        void method() {
            // 12-17 : 모든 필드와 메소드에 접근할 수 있다.
            field1 = 10;
            method1();

            field2 = 10;
            method2();
        }
    }

    static class C {
        void method() {
            // 24-25 : 인스턴스 필드와 메소드는 접근할 수 없다.
            // field1 = 10;
            // method1();

            field2 = 10;
            method2();
        }
    }
}

/*
멤버 클래스가 인스턴스 또는 정적으로 선언됨에 따라 멤버 클래스 내부에서
바깥 클래스의 필드와 메소드를 접근할 때에도 제한이 따른다.

인스턴스 멤버 클래스(B) 안에서는 바깥 클래스의 모든 클래스의 모든 필드와
모든 메소드에 접근할 수 있지만, 

정적 멤버 클래스(C) 안에서는 바깥 클래스의 정적 필드(field2)와 메소드(method2()에만
접근할 수 있고, 인스턴스 필드(field1)와 메소드(method1())는 접근할 수 없다.
*/