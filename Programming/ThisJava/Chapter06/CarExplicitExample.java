package Chapter06;
// 생성자를 호출해서 객체 생성
public class CarExplicitExample {
    public static void main(String[] args) {
        CarExplicit myCarExplicit = new CarExplicit("검정", 3000);
        // CarExplicit myCarExpicit();  (X) ---> 기본 생성자를 호출 할 수 없다.
        System.out.println(myCarExplicit);
        // 7행 Exception warining yellow line;
    }
}

/*
생성자 선언
- 기본 생성자 대신 우리가 생성자를 명시적으로 선언하려면 다음과 같은 형태로 작성하면 된다.
    (생성자 블록)
    클래스(매개변수 선언, ...) {
        // 객체의 초기화 코드
    }

생성자는 메소드와 비슷한 모양을 가지고 있으나, 리턴 타입이 없고 클래스 이름과 동일하다.
생성자 블록 내부에는 객체 초기화 코드가 작성되는데, 일반적으로 필드에 초기값을 저장하거나
메소드를 호출하여 객체 사용 전에 필요한 준비를 한다.

매개 변수 선언은 생략할 수도 있고, 여러 개를 선언해도 좋다. 매개 변수는 new 연산자로
생성자를 호출할 때 외부의 값을 생성자 블록 내부로 전달하는 역학을 한다

예를 들어 다음과 같이 Car 생성자를 호출할 때 세 개의 값을 제공한다고 보자
    Car myCar = new Car("그랜저", "검정", 300);

두 개의 매개값은 String 타입이고 마지막 매개값은 int 타입인 것을 볼 수 있다.
세 매개값을 생성자가 받기 위해서는 다음과 같이 생성자를 선언해야 한다.

    pulic class Car {
        // 생성자
        Car (String model, String color, int maxSpeed) {...}
    }

클래스에 생성자가 명시적으로 선언되어 있을 경우에는 반드시 선언된 생성자를 호출해서
객체를 생성해야만 한다. 다음 예제를 보면 Car 클래스에 생성자 선언이 있기 때문에
기본 생성자(Car())를 호출해서 객체를 생성할 수 없고 Car(String color, int cc)를
호출해서 객체를 생성해야 한다.
*/