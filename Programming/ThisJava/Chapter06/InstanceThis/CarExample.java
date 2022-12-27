package Chapter06.InstanceThis;
// 인스턴스 멤버와 this
public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car("포르쉐");
        Car yourCar = new Car("벤츠");

        myCar.run();
        yourCar.run();
    }
}

/*
<인스턴스 멤버와 this>
인스턴스(instance) 멤버란 객체(인스턴스)를 생성한 후 사용할 수 있는 필드와 메소드를
말하는데, 이들은 각각 인스턴스 필드, 인스턴스 메소드라고 부른다. 우리가 지금까지
작성한 모든 필드와 메소드는 인스턴스 멤버들이었다. 인슨턴스 필드와 메소드는 객체에 소속된
멤버이기 때문에 객체 없이는 사용할 수 없다. Car 클래스에 gas 필드와 setSpeed() 메소드가
다음과 같이 선언되어있다고 가정한다.

    public class Car {
        // 필드
        int gas;

        // 메소드
        void setSpeed(int speed) {...}
    }

gas 필드와 setSpeed() 메소드는 인스턴스 멤버이기 때문에 외부 클래스에서 사용하기 위해
우선 Car 객체(인스턴스)를 생성하고 참조 변수 myCar 또는 yourCar로 접근해야 한다.

    Car myCar = new Car();
    myCar.gas = 10;
    myCar.setSpeed(60);
    Car yourCar = new Car();
    yourCar.gas = 20;
    yourCar.setSpeed(80);

인스턴스 필드 gas는 객체마다 따로 존재하고, 인스턴스 메소드 setSpeed()는 객체마다
존재하지 않고 메소드 영역에 저장되고 공유된다.

객체 외부에서 인스턴스 멤버에 접근하기 위해 참조 변수를 사용하는 것고 마찬가지로
객체 내부에서도 인스턴스 멤버에 접근하기 위해 this를 사용할 수 있다.
우리가 자신을 "나"라고 하듯, 객체는 자신을 "this"라 한다.
따라서 this.model은 자신이 가지고 있는 model 필드라는 뜻이다.

this는 주로 생성자와 메소드의 매개 변수 이름이 필드와 동일한 경우, 인스턴스 멤버인
필드임을 명시하고자 할 때 사용한다.

다음은 매개 변수 model의 값을 필드 model에 저장한다.

    Car(String model) {
        this.model = model;
    }
    void setModel(String model) {
        this.model = model;
    }
*/