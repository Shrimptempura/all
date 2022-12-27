package Chapter07.FeildPolymorphism;
// Tire를 부품으로 가지는 클래스
public class Car {
    // 필드
    // 자동차는 4개의 타이어를 가진다.
    Tire frontLeftTire = new Tire("앞왼쪽", 6);
    Tire frontRightTire = new Tire("앞오른쪽", 2);
    Tire backLeftTire = new Tire("뒤왼쪽", 3);
    Tire backRightTire = new Tire("뒤오른쪽", 4);

    // constructor
    // method
    int run() {
        // 모든 타이어를 1회 회전시키기 위해 각 Tire 객체의 roll() 메소드를
        // 호출한다. false를 리턴하는 roll()이 있을 경우 stop() 메소드를 호출하고
        // 해당 타이어 번호를 리턴한다.
        System.out.println("[자동차가 달립니다.]");
        if (frontLeftTire.roll() == false) {
            stop();
            return 1;
        }
        if (frontRightTire.roll() == false) {
            stop(); 
            return 2;
        }
        if (backLeftTire.roll() == false) {
            stop();
            return 3;
        }
        if (backRightTire.roll() == false) {
            stop();
            return 4;
        }
        return 0;
    }

    void stop() {
        // 펑크 났을 때 실행
        System.out.println("[자동차가 멈춥니다.]");
    }
}

/* 그냥 설명 언저리
Car 클래스의 필드는 4개의 타이어를 가지며, Tire 객체를 생성할 때 타이어의 위치와
최대 회전수를 생성자의 매개값으로 지정했다. 
frontLeftTire 필드는 최대회전수를 6으로 주어, 6회전시 펑크가 나도록 했다.

run() 메소드는 4개의 타이어를 한번씩 1회전시키는 메소드이다.

각각의 Tire 객체의 roll() 메소드를 호출해서 리턴값이 false가 되면(펑크 나면)
stop() 메소드를 호출하고 해당 위치의 타이어 번호를 리턴한다.
stop() 메소드는 타이어가 펑크 날 때 자동차를 멈추는 메소드이다.
*/