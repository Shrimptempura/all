package Chapter07.MethodRedefinition;
// 부모 클래스
public class Calculator {
    double areaCircle(double r) {
        System.out.println("Calculator 객체의 areaCirecle() 실행");
        return 3.141592 * r * r;
    }
}

/*
<메소드 재정의>
부모 클래스의 모든 메소드가 자식 클래스에게 맞게 설계되어 있다면 가장 이상적인
상속이지만, 어떤 메소드는 자식 클래스가 사용하기에 적합하지 않을 수도 있다.
이 경우 상속된 일부 메소드는 자식 클래스에서 다시 수정해서 사용해야 한다.

자바는 이런 경우를 위해 메소드 오버라이딩(Overriding) 기능을 제공한다.

<메소드 재정의(@Override)>
메소드 오버라이딩은 상속된 메소드의 내용이 자식 클래스에 맞지 않을 경우, 자식 클래스에서
동일한 메소드를 재정의하는 것을 말한다. 메소드가 오버라이딩되었다면 부모 객체는
메소드는 숨겨지기 때문에, 자식 객체에서 메소드를 호출하면 오버라이딩된 자식 메소드가
호출된다.

1) class Parent {
    void method1() { ... }
    void method2() { ... }
}

2) class Child extends Parent {
    void method2() { ... }      // 재정의
    void metohd3() { ... }
}

3) class ChildeExample {
    public static void main(String[] args) {
        Child child =  new Child();
        child.method1();        // 1번
        child.method2();        // 재정의된 2번 메소드 호출
        child.method3();        // 2번
    }
}

메소드 오버라이딩의 규칙
1) 부모의 메소드와 동일한 시그니처(리턴 타입, 메소드 이름, 매개 변수 리스트)를 가진다.
2) 접근 제한을 더 강하게 오버라이딩 할 수 있다.
3) 새로운 예외(Exception)를 throws할 수 없다. 

접근 제한을 더 강하게 오버라이딩 할 수 없다는 것은 부모 메소드가 public 접근 제한을
가지고 있을 경우 오버라이딩하는 자식 메소드는 default나 private 접근 제한으로 수정할
수 없다는 것이다.

반대로는 가능하다. 부모 메소드가 defualt 접근 제한을 가지면 재정의되는 자식 메소드는
default 또는 public 접근 제한을 가질 수 있다.

다음 예제는 Calculator의 자식 클래스인 Computer에서 원의 넓이를 구하는
Calculator의 areaCircle() 메소드를 사용하지 않고, 좀 더 정확한 원의 넓이를 구하도록
오버라이딩 했다.
*/