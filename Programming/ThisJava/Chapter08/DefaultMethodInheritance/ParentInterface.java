package Chapter08.DefaultMethodInheritance;
// 부모 인터페이스
// 추상 메소드와 디폴트 메소드가 선언된 ParentInterface
public interface ParentInterface {
    public void method1();
public default void method2() { /*실행문*/ }
}

/*
<디폴트 메소드가 있는 인터페이스 상속>
인터페이스 간에도 상속이 된다. 부모 인터페이스에 디폴트 메소드가 정의 되어 있을 경우,
자식 인터페이스에서 디폴트 메소드를 활용하는 방법은 3가지가 있다.

1) 디폴트 메소드를 단순히 상속만 받는다.
2) 디폴트 메소드를 재정의(Override)해서 실행 내용을 변경한다.
3) 디폴트 메소드를 추상 메소드로 재선언한다.

*/