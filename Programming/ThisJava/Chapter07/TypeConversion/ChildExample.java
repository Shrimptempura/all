package Chapter07.TypeConversion;
// 자동 타입 변환 후의 멤버 접근
public class ChildExample {
    public static void main(String[] args) {
        Child child = new Child();

        Parent parent = child;      // 자동 타입 변환
        parent.method1();
        parent.method2();
        // parent.method3();    호출 불가능
    }
}

/*
1) class Parent {
    void method1() { ... }
    void method2() { ... }
}

2) class Child extends Parent {
    void method2() { ... }      // Overriding
    void mehotd3() { ... }
}

3) class ChildExmaple.java {
    public static void main(String[] args) {
        Child child = new Child();

        Parent parent = child;

        parent.method1();       // 16행 가능

        parent.method2();       // 17행 불가능, 21행 가능

        parent.method3();       // 22행 x, 호출 불가능
    }
}

Child 객체는 method3() 메소드를 가지고 있지만, Parent 타입으로 변환된 이후에는
method3()을 호출할 수 없다. 그러나 method2() 메소드는 부모와 자식 모두에게 있다.
이렇게 오버라이딩된 메소드는 타입 변환 이후에도 자식 메소드가 호출된다.
*/