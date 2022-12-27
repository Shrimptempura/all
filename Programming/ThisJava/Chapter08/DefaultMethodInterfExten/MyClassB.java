package Chapter08.DefaultMethodInterfExten;
// 새로운 구현 클래스
public class MyClassB implements MyInterface {
    @Override
    public void method1() {
        System.out.println("MyClassB-method1() 실행");
    }

    @Override   // 디폴트 메소드 재정의
    public void method2() {
        System.out.println("MyClassB-method2() 실행");
    }
}

// 수정된 인터페이스를 구현한 새로운 구현 클래스인 MyClassB,
// MyClassB는 method2()를 재정의해서 내용을 변경했다.