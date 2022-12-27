package Chapter08.InterfaceInheritance;
// 호출 가능 메소드
public class Example {
    public static void main(String[] args) {
        ImplementationC impl = new ImplementationC();

        InterfaceA ia = impl;
        ia.methodA();
        System.out.println();       // InterfaceA 변수는 methodA()만 호출 가능

        InterfaceB ib = impl;
        ib.methodB();               // InterfaceB 변수는 methodB()만 호출 가능
        System.out.println();

        InterfaceC ic = impl;
        ic.methodA();       // InterfaceC 변수는 methodA,B,C() 모두 호출 가능
        ic.methodB();
        ic.methodC();
    }
}
