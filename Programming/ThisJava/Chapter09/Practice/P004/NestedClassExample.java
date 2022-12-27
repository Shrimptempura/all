package Chapter09.Practice.P004;

public class NestedClassExample {
    public static void main(String[] args) {
        Car mycar = new Car();

        Car.Tire tire = mycar.new Tire();
        // Engine engine = new Engine();

        Car.Engine engine = new Car.Engine();
    
        // exception warning processing
        System.out.println(tire);
        System.out.println(engine);
    }
}

/*
인스턴스 멤버 클래스(class 안에 class)와 정적 멤버 클래스(class 안에 static class)의
객체 생성의 차이점 알기

인스턴스 멤버 클래스는 상위 클래스가 생성해야만 함
정적 멤버 클래스는 바로 상위 클래스에 접근가능
*/