package Chapter06;
// 필드값 출력
public class FieldInitValueExample {
    public static void main(String[] args) {
        FieldInitValue fiv = new FieldInitValue();

        System.out.println("byteField: " + fiv.byteField);
        System.out.println("shortField: " + fiv.shortField);
        System.out.println("intField: " + fiv.intField);
        System.out.println("longField: " + fiv.longField);
        System.out.println("booleanField: " + fiv.boleanField);
        System.out.println("charField: " + fiv.charField);
        System.out.println("floatField: " + fiv.floatField);
        System.out.println("doubleField: " + fiv.doubleField);
        System.out.println("aryField: " + fiv.aryField);
        System.out.println("referenceField: " + fiv.referenceField);
    }
}

/*
<생성자(Constructor)>
- new 연산자와 같이 사용되어 클래스로부터 객체를 생성할 때 호출되어 객체의 초기화를 
    담당한다. 객체 초기화란 필드를 초기화하거나, 메소드를 호출해서 객체를 사용할
    준비를 하는 것을 말한다. 

    생성자를 실행시키지 않고는 클래스로부터 객체를 만들 수 없다. new 연산자에 의해
    생성자가 성공적으로 실행되면 힙(heap) 영역에 객체가 생성되고 객체의 주소가 리턴된다.
    리턴된 객체의 주소는 클래스 타입 변수에 저장되어 객체에 접근할 때 이용된다.

    만약 생성자가 성공적으로 실행되지 않고 예외(에러)가 발생했다면 객체는 생성되지 않는다.

<기본 생성자>
모든 클래스는 생성자가 반드시 존재하고, 하나 이상을 가질 수 있다.
우리가 클래스 내부에 생성자 선언을 생략했다면 컴파일러는 다음과 같이 중괄호 {} 블록
내용이 비어있는 기본 생성자 (Default Constructor)를 바이트 코드에 자동 추가한다.

    [public] 클래스() {}

클래스가 public class로 선언되면 기본 생성자에도 public이 붙지만, 클래스가 public 없이
class로만 선언되면 기본 생성자에도 public이 붙지 않는다.

예를 들어 Car 클래스를 설계할 때 생성자를 생략하면 기본 생성자가 다음과 같이 생성된다.

소스 파일(Car.java)                     바이트 코드 파일(Car.class)
public class Car {          ->          public class Car {
                                            public Car() { }    // 자동 추가
}                                       }           ㄴ> 기본 생성자


그렇기 때문에 클래스에 생성자를 선언하지 않아도 다음과 같이 new 연산자 뒤에
기본 생성자를 호출해서 객체를 생성시킬수 있다.

    Car myCar = new Car();
                    ㄴ> 기본 생성자

그러나 클래스에 명시적으로 선언한 생성자가 한 개라도 있으면, 컴파일러는 기본 생성자를
추가하지 않는다. 명시적으로 생성자를 선언하는 이유는 객체를 다양하게 초기화하기 위해서이다.
*/