package Chapter06.thisCar;
// 다른 생성자를 호출해서 중복 코드 줄이기
public class Car {
    // 필드
    String company = "현대 자동차";
    String model;
    String color;
    int maxSpeed;

    // 생성자
    Car() {
        ;
    }

    Car(String model) {
        this(model, "은색", 250);
    }
    
    Car(String model, String color) {
        this(model, color, 250);
    }

    Car(String model, String color, int maxSpeed) {
        this.model = model;
        this.color = color;
        this.maxSpeed = maxSpeed;
    }
}

/*
다른 생성자 호출(this())
- 생성자 오버로딩이 많아질 경우 생성자 간의 중복된 코드가 발생할 수 있다.
    매개 변수의 수만 달리하고 필드 초기화 내용이 비슷한 생성자에서 이러한 현상을 많이
    볼수 있다.

이 경우에는 필드 초기화 내용은 한 생성자에만 집중적으로 작성하고 나머지 생성자는
초기화 내용을 가지고 있는 생성자를 호출하는 방법으로 개선할 수 있다.

생성자에서 다른 생성자를 호출할 때에는 다음과 같이 this() 코드를 사용한다.

    클래스([매개변수선언, ...]) {
        this(매개변수, ..., 값, ...);       // 클래스의 다른 생성자 호출
        실행문;
    }

this()는 자신의 다른 생성자를 호출하는 코드로 반드시 생성자의 첫줄에서만 허용된다.
this()의 매개값은 호출되는 생성자의 매개 변수 타입에 맞게 제공해야 한다.
this() 다음에는 추가적인 실행문들이 올 수 있다. 이 말은 호출되는 생성자의 실행이 
끝나면 원래 생성자로 돌아와서 다음 실행문을 진행한다는 뜻이다.

ex)
Car(String model) {
    this.model = model
    ;;
    ;;

Car(String model, String color) {
    this.model = model
    ;;
    ;;
}
... 반복
}

앞의 코드를 보면 세 개의 생성자 내용이 비슷하므로 앞에 두 개의 생성자에서 this()를
사용해서 마지막 생성자인 Car(String model, String color, int maxSpeed)를 호출하도록
수정하면 중복 코드를 최소화 할 수 있다.


    16행 호출 -> // this(model, "은색", 250);
    -> 20행 호출 -> // this(model, color, 250);
    -> 23행으로.. // Car(String model, String color, int maxSpeed);
    공통 실행 코드 24 ~ 26행 코드
    //  this.model = model... this.color = color... this.maxSpeed = maxSpeed;
*/