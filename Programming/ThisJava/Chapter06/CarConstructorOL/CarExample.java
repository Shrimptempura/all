package Chapter06.CarConstructorOL;
// 객체 생성 시 생성자 선택
public class CarExample {
    public static void main(String[] args) {
        Car car1 = new Car();
        System.out.println("car1.company : " + car1.company);
        System.out.println();

        Car car2 = new Car("자가용");
        System.out.println("car2.company : " + car2.company);
        System.out.println("car2.model : " + car2.model);
        System.out.println();

        Car car3 = new Car("자가용", "빨강");
        System.out.println("car3.company : " + car3.company);
        System.out.println("car3.model : " + car3.model);
        System.out.println("car3.color : " + car3.color);
        System.out.println();

        Car car4 = new Car("택시", "검정", 200);
        System.out.println("car4.company : " + car4.company);
        System.out.println("car4.model : " + car4.model);
        System.out.println("car4.color : " + car4.color);
        System.out.println("car4.maxSpeed : " + car4.maxSpeed);
    }
}

/*
생성자 오버로딩(Constructor Overloading)
외부에서 제공되는 다양한 데이터들을 이용해서 객체를 초기화하려면 생성자도
다양화될 필요가 있다. Car 객체를 생성할 때 외부에서 제공되는 데이터가 없다면 기본 생성자로
Car 개체를 생성해야 하고, 외부에서 model 데이터가 제공되거나 model과 color가 제공될 
경우에도 Car 객체를 생성할 수 있어야 한다. 생성자가 하나뿐이라면 이러한 요구 조건을
수용 할 수 없다.

그래서 자바는 다양한 방법으로 객체를 생성할 수 있도록 생성자 오버로딩을 제공한다.
생성자 오버로딩이란 매개 변수를 달리하는 생성자를 여러 개 선언하는 것이다.

생성자 오버로딩 시 주의점중 하나는 매개 변수의 타입과 개수 그리고 선언된 순서가
똑같을 경우 매개 변수 이름만 바꾸는 것은 생성자 오버로딩이라고 볼 수 없다.

생성자가 오버로딩되어 있을 때, new 연산자로 생성자를 호출 할 때 제공되는 매개값의 
타입과 수의 의해 호출될 생성자가 결정된다.

new Car()는 기본 생성자로 객체를 생성하고, new Car("그랜저")는 Car(String model)
생성자로 객체를 생성한다. new Car("그랜저", "흰색")는 Car(String model, String color, 
int maxSpeed) 생성자로 객체를 생성한다.
*/