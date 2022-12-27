package Chapter06.field_method_access.package2;         // 패키지가 다름
// 필드와 메소드의 접근 제한
import Chapter06.field_method_access.package1.A;

public class C {
    public C() {
        A a = new A();
        a.field1 = 1;           // (o)
        // a.field2 = 1;        // (x)  default 필드 접근 불가(컴파일 에러)
        // a.field3 = 1;        // (x)  private 필드 접근 불가(컴파일 에러)

        a.method1();            // (o)
        // a.method2();         // (x)  default 메소드 접근 불가(컴파일 에러)
        // a.method3();         // (x)  private 메소드 접근 불가(컴파일 에러)
    }
}
