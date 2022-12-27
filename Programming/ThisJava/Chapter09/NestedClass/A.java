package Chapter09.NestedClass;
// 바깥 클래스
class A {
    A() {
        System.out.println("A 객체가 생성됨");
    }

    // 인스턴스 멤버 클래스
    class B {
        B() {
            System.out.println("B 객체가 생성됨");
        }
        int field1;
        // static int field2;
        void method1() { }
        // static void method2() { }
    }

    // 정적 멤버 클래스
    static class C {
        C() {
            System.out.println("C 객체가 생성됨");
        }
        int field1;
        static int field2;
        void method1() { }
        static void method2() { }
    }

    void method() {
        // 로컬 클래스
        class D {
            D() {
                System.out.println("D 객체가 생성됨");
            }
            int field1;
            // static int field2;
            void method1() { }
            // static void metho2() { }
        }
        D d = new D();
        d.field1 = 3;
        d.method1();
    }
}

/*
로컬 클래스는 접근 제한자(public, private) 및 static 사용불가
메소드 내부에서만 사용되므로 접근을 제한할 필요x 
로컬 클래스 내부에는 인스턴스 필드와 메소드만 선언가능하고 
정적 필드와 메소드는 선언불가
*/