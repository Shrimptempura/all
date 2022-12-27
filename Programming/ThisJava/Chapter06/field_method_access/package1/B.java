package Chapter06.field_method_access.package1;     // A.java와 패키지가 동일
// 필드와 메소드의 접근 제한
public class B {
    public B() {
        A a = new A();
        a.field1 = 1;       // (o)
        a.field2 = 1;       // (o)
        // a.field3 = 1;    // (x)  private 필드 접근 불가(컴파일 에러)

        a.method1();        // (o)
        a.method2();        // (o)
        // a.method3();     // (x)  private 메소드 접근 불가(컴파일 에러)
    }
}

/*
패키지가 동일한 B 클래스에서는 A 클래스의 private 필드와 메소드를 제외한 다른 필드와
메소드는 사용할 수 있다. 그러나 다음과 같이 패키지가 다른 C 클래스에서는 A 클래스의
public 필드와 메소드를 제외한 다른 필드와 메소드를 사용할 수 없다.  
*/