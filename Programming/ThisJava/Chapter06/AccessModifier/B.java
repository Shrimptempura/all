package Chapter06.AccessModifier;

public class B {
    A a;            // (o)      A 클래스 접근 가능(필드로 선언할 수 있음)
}
// B 클래스는 A 클래스와 같은 패키지이므로 A 클래스에 접근이 가능하다.
// 그래서 B 클래스에서 A 클래스를 이용하여 필드 선언 및 생성자/메소드 내부에서
// 변수 선언이 가능하다.
