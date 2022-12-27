package Chapter07.ObjectTypeInstanceof;
// 객체 타입 확인
public class InstanceofExample {
    public static void method1(Parent parent) {
        if (parent instanceof Child) {
            Child child = (Child)parent;
            System.out.println("method1 - Child로 변환 성공");
        }
        else
            System.out.println("method1 - Child로 변환되지 않음");
    }

    public static void method2(Parent parent) {
        Child child = (Child)parent;
        System.out.println("method2 - Child로 변환 성공");
    }

    public static void main(String[] args) {
        Parent parentA = new Child();
        method1(parentA);
        method2(parentA);

        Parent parentB = new Parent();
        method1(parentB);
        method2(parentB);
    }

}

/*
InstanceofExample 클래스에서 method1()과 method2()는 모두 Parent 타입의 매개값을
받도록 선언했다.

InstanceofExample 클래스에서 method1()과 method2()를 호출할 경우, Child 객체를 매개값으로
전달하면 두 메소드 모두 예외가 발생하지 않지만, Parent 객체를 매개값으로 전달하면 
method2()에서는 ClassCastException이 발생한다.

method1()은 instanceof 연산자로 변환이 가능한지 확인한 후 변환을 하지만,
method2()는 무조껀 변환하려고 했기 때문이다.

예외가 발생하면 프로그램은 즉시 종료되기 때문에 method1()과 같이 강제 타입 변환을
하기 전에 instanceof 연산자로 변환시킬 타입의 객체인지 조사해서 잘못된 매개값으로
프로그램이 종료되는 것을 막아야 한다.
*/