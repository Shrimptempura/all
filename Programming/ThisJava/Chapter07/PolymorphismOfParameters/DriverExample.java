package Chapter07.PolymorphismOfParameters;
// 실행 클래스
public class DriverExample {
    public static void main(String[] args) {
        Driver driver = new Driver();

        Bus bus = new Bus();
        Taxi taxi = new Taxi();

        driver.drive(bus);      // 자동 타입 변환 : Vehicle vehicle = bus;
        driver.drive(taxi);     // 자동 타입 변환 : Vehicle vehicle = taxi;
    }
}

/*
먼저 Driver 객체와 Bus, Taxi 객체를 생성하고 10 ~ 11행에서 Driver 객체의
drive() 메소드를 호출할 때 Bus 객체와 Taxi 객체를 제공했다. DriverExample 클래스를
실행해보면 10행의 출력 내용은 Bus 객체의 run() 메소드의 실행 결과이다.

그리고 11행의 출력 내용은 Taxi 객체의 run() 실행 결과이다.
이와 같이 매개값의 자동 타입 변환과 메소드 오버라이딩을 이용해서 매개 변수의 다형성을
구현할수 있다.
*/