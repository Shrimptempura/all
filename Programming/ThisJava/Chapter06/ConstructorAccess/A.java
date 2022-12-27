package Chapter06.ConstructorAccess;
// 생성자의 접근 제한
public class A {
    // 필드
    A a1 = new A(true);
    A a2 = new A(1);
    A a3 = new A("문자열");

    // 생성자
    public A(boolean b) {}      // public 접근 제한
    A(int b) {}                 // default 접근 제한
    private A(String s) {}      // private 접근 제한
}

// 5 ~ 7행을 보면 A 클래스 내부에서는 A의 모든 생성자를 호출할 수 있음을 알수 있다.

/*
<생성자의 접근 제한>
객체를 생성하기 위해 new 연산자로 생성자를 호출해야 한다. 하지만 생성자를 어디에서나
호출할 수 있는 것은 아니다. 생성자가 어떤 접근 제한을 갖는냐에 따라 호출 여부가
결정된다. 생성자는 다음과 같이 public, protected, default, private 접근 제한을 가질수 있다.

public class ClassName {
    // public 접근 제한
    public ClassName(...) {...}

    // protected 접근 제한
    protected ClassName(...) {...}

    // default 접근 제한
    ClassName(...) {...}

    // private 접근 제한
    private ClassName(...) {...}
}

// 이것이 자바다 260쪽
// public, protected, default, private 세부 설명 생략
*/