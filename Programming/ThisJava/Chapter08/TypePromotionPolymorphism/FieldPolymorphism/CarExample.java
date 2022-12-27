package Chapter08.TypePromotionPolymorphism.FieldPolymorphism;
// 필드 다형성 테스트
public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car();

        myCar.run();

        myCar.forntLeftTire = new KumhoTire();
        myCar.forntRightTire = new KumhoTire();

        myCar.run();
    }
}
