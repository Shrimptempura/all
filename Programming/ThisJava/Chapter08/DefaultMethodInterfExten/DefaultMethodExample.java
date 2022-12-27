package Chapter08.DefaultMethodInterfExten;
// 디폴트 메소드 사용
public class DefaultMethodExample {
    public static void main(String[] args) {
        MyInterface mi1 = new MyClassA();
        mi1.method1();
        mi1.method2();

        MyInterface mi2 = new MyClassB();
        mi2.method1();
        mi2.method2();
    }
}

/*
MyClassA와 MyClassB를 객체로 생성해서 인터페이스 변수로 method1()과
method2()를 호출해 보았다. 실행 결과를 보면 MyClassA의 method2()는
MyInterface에 정의된 디폴트 메소드가 실행되었고, MyClassB의 method2()는 
재정의한 MyClassBdml method2()가 실행되었다.
*/