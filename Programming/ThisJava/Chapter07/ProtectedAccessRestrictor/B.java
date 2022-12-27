package Chapter07.ProtectedAccessRestrictor;
// protected 접근 제한자 테스트
public class B {
    public void method() {
        A a = new A();      // (o)
        a.field = "value";  // (o)
        a.method();         // (o)
    }
}

/*
B 클래스는 A 클래스와 동일한 패키지에 있다. default 접근 제한과 마찬가지로
B 클래스의 생성자와 메소드에서는 A 클래스의 protected 필드, 생성자, 메소드에
얼마든지 접근이 가능하다.
*/