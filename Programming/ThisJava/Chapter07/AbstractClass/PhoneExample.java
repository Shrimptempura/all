package Chapter07.AbstractClass;
// 추상 클래스
public class PhoneExample {
    public static void main(String[] args) {
        // Phone phone = new Phone();

        SmartPhone smartPhone = new SmartPhone("홍길동");

        smartPhone.turnOn();            // 9, 11행 : Phone의 method
        smartPhone.internetSearch();
        smartPhone.turnOff();
    }
}

/*
Phone의 생성자를 호출해서 객체를 생성할 수 없음을 보여준다.
대신 자식 클래스인 SmartPhone으로 객체를 생성해서 Phone의 메소드인 turnOn(),
turnOff() 메소드를 사용할 수 있음을 보여준다.
*/