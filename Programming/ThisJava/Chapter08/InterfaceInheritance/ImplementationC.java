package Chapter08.InterfaceInheritance;
// 하위 인터페이스 구현
public class ImplementationC implements InterfaceC {
    public void methodA() {
        System.out.println("ImplementationC-methodA() 실행");
    }

    public void methodB() {
        System.out.println("ImplementationC-methodB() 실행");
    }

    public void methodC() {
        System.out.println("ImplementationC-methodC() 실행");
    }
}
