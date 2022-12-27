package Chapter06.AccessModifier2;      // AccessModifier랑 패키지가 다름
// 클래스의 접근 제한
import Chapter06.AccessModifier.*;

public class C {
    // A a;        // (x)      A 클래스 접근 불가(컴파일 에러)
    B b;        // (o)
}

// C 클래스는 A 클래스와 다른 패키지이므로 default 접근이 제한된 A 클래스에는 접근이
// 되지 않지만, public으로 공개된 B 클래스는 접근이 가능하다. 그래서 C 클래스에서
// B 클래스를 이용하여 필드 선언 및 생성자/메소드 내부에서 변수 선언이 가능하다.