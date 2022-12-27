package Chapter06.CarExternal;
// 클래스 외부에서 메소드 호출
public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.keyTurnOn();
        myCar.run();
        int speed = myCar.getSpeed();
        System.out.println("현재 속도: " + speed + "km/h)");
    }
}

/*
<객체 외부에서 호출>
외부 클래스에서 메소드를 호출하려면 우선 다음과 같이 클래스로부터 객체를 생성해야 한다.
메소드는 객체에 소속된 멤버이므로 객체가 존재하지 않으면 메소드도 존재하지 않기 때문이다.

    클래스 참조변수 = new 클래스(매개값, ...);

객체가 참조되었다면 참조 변수와 함께 도트(.) 연산자를 사용해서 메소드를 호출할 수 있다.
도트(.) 연산자는 객체 접근 연산자로 객체가 가지고 있는 필드나, 메소드에 접근할때 사용된다.

참조 변수.메소드(매개값, ...);      // 리턴값이 없거나. 있어도 리턴값을 받지 않을 경우
타입 변수 = 참조변수.메소드(매개값, ...); // 리턴값이 있고, 리턴값을 받고 싶을 경우

다음은 Car 객체의 keyTurnOn() 메소드와 run() 메소드를 호출하는 코드이다.
KeyTurnOn()과 run()메소드는 리턴값이 없기 때문에 단순 호출만 했고, getSpeed() 메소드는
리턴값이 있으므로 리턴값을 받아 변수 speed에 저장했다.

    Car myCar = new Car();
    myCar.keyTurn();
    myCar.run();
    int speed = myCar.getSpeed();
*/