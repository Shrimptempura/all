package Chapter07.TypeConversion;
// 자동 타입 변환
class A {}

class B extends A {}
class C extends A {}

class D extends B {}
class E extends C {}

public class PromotionExample {
    public static void main(String[] args) {
        B b = new B();
        C c = new C();
        D d = new D();
        E e = new E();

        A a1 = b;
        A a2 = c;
        A a3 = d;
        A a4 = e;

        B b1 = d;
        C c1 = e;
        
        // B b3 = e;        compile error : not inheritance 관계
        // C c2 = d;

        if (a1 == a2)       // yellow code 임시
        if (a3 == a4)
        if (b1 == a1)
        if (c1 == a1)
            ;
    }
}

/*
부모 타입으로 자동 타입 변환된 이후에는 부모 클래스에 선언된 필드와 메소드만 접근이
가능하다. 비록 변수는 자식 객체를 참조하지만 변수로 접근 가능한 멤버는 부모 클래스
멤버로만 한정된다.

그러나 예외가 있는데, 메소드가 자식 클래스에서 오버라이딩되엇다면 자식 클래스의
메소드가 대신 호출된다. 이것은 다형성(Polymorphism)과 관련이 있기 때문에
매우 중요한 성질이므로 잘 알아두어야 한다.
*/