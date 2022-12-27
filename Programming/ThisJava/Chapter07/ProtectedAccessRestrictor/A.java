package Chapter07.ProtectedAccessRestrictor;
// protected 접근 제한자
public class A {
    protected String field;

    protected A() {
        ;
    }

    protected void method() {
        ;
    }
}

/*
<protected 접근 제한자>
접근 제한자는 public, protected, default, private 4가지 종류가 있다.
-> 갈수록 접근 제한 강화

접근제한    적용할 내용                         접근할 수 없는 클래스
public      클래스, 필드, 생성자, 메소드        없음
protected   필드, 생성자, 메소드                자식 클래스가 아닌 다른 패키지에 소속된
                                                클래스
default     클래스, 필드, 생성자, 메소드        다른 패키지에 소속된 클래스
private     필드, 생성자, 메소드                모든 외부 클래스

protected는 public과 default 접근 제한의 중간쯤에 해당된다.
같은 패키지에서는 default와 같이 접근 제한이 없지만 다른 패키지에서는 
자식 클래스만 접근을 허용한다.

    <package1>
    public class A {
        protected 멤버
    }

    class B {
        ;       // protected 접근 o
    }
=============================
    <package2>
    class C {
        ;       // protected 접근 x
    }

    class D extends A {
        ;       // protected 접근 o
    }

protected는 필드와 생성자, 메소드 선언에 사용될 수 있다.
다음 A 클래스를 보면 protected로 선언된 필드, 생성자, 메소드가 있다.
*/