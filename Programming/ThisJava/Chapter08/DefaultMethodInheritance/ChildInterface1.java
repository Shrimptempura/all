package Chapter08.DefaultMethodInheritance;
// 자식 인터페이스
// ChildInterface1은 ParentInterface를 상속하고 자신의 추상 메소드인
// method3()을 선언한다.
public interface ChildInterface1 extends ParentInterface {
    public void method3();
}

/*
이 경우 ChildInterface1 인터페이스를 구현하는 클래스는 method1()과 method3()의
실체 메소드를 가지고 있어야 하며 ParentInterface의 method2()를 호출할 수 있다.

    Childinterface1 ci1 = new ChildInterface1() {
        @Override
        public void method1() { //실행문 }
        @Override
        public void method3() { //실행문 }
    };

    ci1.method1();
    ci1.method2();      // ParentInterface의 method2() 호출
    ci1.method3();
*/
