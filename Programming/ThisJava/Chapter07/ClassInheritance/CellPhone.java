package Chapter07.ClassInheritance;
// 부모클래스
public class CellPhone {
    // 필드
    String model;
    String color;

    // 생성자

    // 메소드
    void powerOn() {
        System.out.println("전원을 켭니다.");
    }
    void powerOff() {
        System.out.println("전원을 끕니다.");
    }
    void bell() {
        System.out.println("벨이 울립니다.");
    }
    void sendVoice(String message) {
        System.out.println("자기: " + message);
    }
    void receiveVoice(String message) {
        System.out.println("상대방: " + message);
    }
    void hangUp() {
        System.out.println("전화를 끊습니다.");
    }
}

/* 현실에서 상속은 부모가 자식을 선택해서 물려주지만, 프로그램에서는 자식이 부모를
선택한다. 자식 클래스를 선언할 때 어떤 부모 클래스를 상속받을 것인지를 결정하고
선택된 부모 클래스는 다음과 같이 extends 뒤에 서술한다.

    class 자식클래스 extends 부모클래스 {
        // 필드
        // 생성자
        // 메소드
    }
예를 들어 Car 클래스를 상속해서 SportsCar 클래스를 설계하고 싶다면 다음과 같다
    class SportsCar extends Car {
        ;
    }

다른 언어와 달리 자바는 다중 상속을 허용하지 않는다.
즉 여러 개의 부모 클래스를 상속할 수 없다. 그러므로 다음과 같이 extends 뒤에는
단 하나의 부모 클래스만 와야한다.

    class 자식클래스 extends 부모클래스1, 부모클래스2(x) {
        ;
    }
*/
