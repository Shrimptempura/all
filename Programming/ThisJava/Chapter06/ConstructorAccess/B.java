package Chapter06.ConstructorAccess;    // 패키지 동일

public class B {
    // 필드
    A a1 = new A(true);         // (o)
    A a2 = new A(1);            // (o)
    // A a3 = new A("문자열");     // (x)  private 생성자 접근 불가(컴파일 에러)
}

/*
패키지가 동일한 B 클래스에서는 A 클래스의 private 생성자를 제외하고 다른 생성자를 
호출할 수 있다.

C 클래스(Cahpter06.ConstructorAccess2)에서는 A 클래스의 public 생성자를 제외하고 다른
생성자를 호출 할 수 없다.
*/