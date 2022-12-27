package Chapter08.TypePromotionPolymorphism.FieldPolymorphism;
// 필드 다형성
public class Car {
    // 인터페이스 타입 필드 선언과 초기 구현 객체 대입
    Tire forntLeftTire = new HankookTire();
    Tire forntRightTire = new HankookTire();
    Tire backLeftTire = new HankookTire();
    Tire backRightTire = new HankookTire();

    void run() {
        // 인터페이스에서 설명된 roll() 메소드 호출
        forntLeftTire.roll();
        forntRightTire.roll();
        backLeftTire.roll();
        backRightTire.roll();
    }
}
