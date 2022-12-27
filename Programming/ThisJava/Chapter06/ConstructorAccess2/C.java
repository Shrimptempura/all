package Chapter06.ConstructorAccess2;       // 패키지가 다름, ConstructorAccess
// 생성자의 접근 제한
import Chapter06.ConstructorAccess.A;

public class C {
    // 필드
    A a1 = new A(true);             // (o)
    // A a2 = new A(1);             // (x)       default 생성자 접근 불가(컴파일 에러)
    // A a3 = new A("문자열")       // (x)       private 생성자 접근 불가(컴파일 에러)
}

/*
가끔 전체 프로그램에서 단 하나의 객체만 만들도록 보장해야 하는 경우가 있다.
이럴 경우 여러 개의 객체를 만들지 못하도록 설계해야 하는데 이를 싱글톤(Singleton) 패턴
이라고 한다. 싱글톤 패턴은 생성자를 private 접급제한으로 선언하고,
자신의 유일한 객체를 리턴하는 getInstance() 정적 메소드를 선언하는 것을 말한다.
*/