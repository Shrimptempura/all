package Chapter08.DefaultMethodInheritance;
// 자식 인터페이스
// ChildInterface2는 ParentInterface를 상속하고 ParentInterface의 디폴트 메소드인
// method2()를 재정의한다. 그리고 자신의 추상 메소드인 method3()을 선언한다.
public interface ChildInterface2 extends ParentInterface {
    @Override
    public default void method2() { /*실행문*/ }

    public void method3();
}

/* 이 경우도 ChildInterface2 인터페이스를 구현하는 클래스는 method1()과
method3()의 실체 메소드를 가지고 있어야 하며, ChildInterface2에서 재정의한
method2()를 호출할 수 있다.

    ChildInterface2 ci2 = new ChildInterface2() {
        @Override
        public void method1() { //실행문 }
        @Override
        public void method3() { //실행문 }
    };

    ci2.method1();
    ci2.method2();      // ChildInterface2의 method2() 호출
    ci2.method3();
*/
