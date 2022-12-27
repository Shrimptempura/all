package Chapter07.AbstractClass;
// 추상 클래스
public abstract class Phone {
    // field
    public String owner;

    // consturctor
    public Phone(String owenr) {
        this.owner = owner;
    }

    // method
    public void turnOn() {
        System.out.println("폰 전원을 켭니다.");
    }
    public void turnOff() {
        System.out.println("폰 전원을 끕니다.");
    }
}

/*
<추상 클래스 선언>
추상 클래스를 선언할 때에는 클래스 선언에 abstract 키워드를 붙여야 한다.
abstract를 붙이게 되면 new 연산자를 이용해서 객체를 만들지 못하고 상속을 통해
자식 클래스만 만들 수 있다.

    public abstract class 클래스 {
        // field
        // constructor
        // method
    }

추상 클래스도 일반 클래스와 마찬가지로 필드, 생성자, 메소드 선언을 할 수 있다.
new 연산자로 직접 생성자를 호출할 수는 없지만 자식 객체가 생성될 때 super(...)를
호출해서 추상 클래스 객체를 생성하므로 추상 클래스도 생성자가 반드시 있어야 한다.
*/
