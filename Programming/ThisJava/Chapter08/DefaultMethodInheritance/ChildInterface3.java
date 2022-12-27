package Chapter08.DefaultMethodInheritance;
// 자식 인터페이스
// ChildInterface3은 ParentInterface를 상속하고 ParentInterface의 디폴트 메소드인
// method2()를 추상 메소드로 재선언한다. 그리고 자신의 추상 메소드인
// method3()을 선언한다.
public interface ChildInterface3 extends ParentInterface {
    @Override
    public void method2();      // 추상 메소드로 재선언
    public void method3();
}

/*
이 경우 ChildInterface3 인터페이스를 구현하는 클래스는 method1()과 method2(),
method3()의 실체 메소드를 모두 가지고 있어야 한다.

    ChildInterface3 ci3 = new ChildInterface3() {
        @Override
        public void method1() { //실행문 }
        @Override
        public void method2() { //실행문 }
        @Override
        public void method3() { //실행문 }
    };

    ci3.method1();
    ci3.method2();      // ChildInterface3 구현 객체의 method2() 호출
    ci3.method3();
*/
