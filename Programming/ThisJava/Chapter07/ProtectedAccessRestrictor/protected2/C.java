package Chapter07.ProtectedAccessRestrictor.protected2;
// protected 접근 제한자 테스트
// import Chapter07.ProtectedAccessRestrictor.A;

public class C {
    public void method() {
        // A a = new A();           (x)
        // a.field = "value";       (x)
        // a.method();              (x)
    }
}

/*
다음 C 클래스는 A 클래스와 다른 패키지에 있다. default 접근 제한과 마찬가지로
C 클래스의 생성자와 메소드에서는 A 클래스의 protected 필드, 생성자, 메소드에
접근할 수 없다.
*/