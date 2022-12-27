package Chapter06.field_method_access.package1;
// 필드와 메소드의 접근 제한

public class A {
    // 필드
    public int field1;      // public 접근 제한
    int field2;             // dafault 접근 제한
    // private int field3;     // private 접근 제한, field3에 노란줄 때문에 주석처리함

    // 생성자
    public A() {        // 10 ~ 18행, 클래스 내부일 경우 접근 제한자의
        field1 = 1;     // 영향을 받지 않는다.
        field2 = 1;
        // field3 = 1;

        method1();
        method2();
        method3();
    }

    // 메소드
    public void method1() {}        // public 접근 제한
    void method2() {}               // default 접근 제한
    private void method3() {}       // private 접근 제한
}

// A 클래스 내부에서든 접근 제한과 상관없이 필드와 메소드를 모두 사용할 수 있다.

/*
<필드와 메소드의 접근 제한>
필드와 메소드를 선언할 때 고려해야 할 사항은 클래스 내부에서만 사용할 것인지,
패키지 내에서만 사용할 것인지, 아니면 다른 패키지에서도 사용할 수 있도록 할 것인지를
결정해야 한다.
이것은 필드와 메소드가 어떤 접근 제한을 갖느냐에 따라 결정된다.
필드와 메소드는 다음과 같이 public, protected, default, private 접근 제한을 가질수 있다.

// 필드선언
[public | protected | private ] [static] 타입 필드;

// 메소드 선언
[public | protected | private] [static] 리턴 타입 메소드 (...) {...}

이것이 자바다 263쪽 public, protected, default, private 설명은 생략함
*/