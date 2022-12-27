package Chapter08.MethodDeclaration.StaticMethodDeclaration;
// 메소드 선언
public interface RemoteControl {
    // 상수
    int MAX_VOLUME = 10;
    int MIN_VOLUME = 0;

    // abstract method
    void turnOn();
    void turnOff();
    void setVolume(int volume);

    // default method
    default void setMute(boolean mute) {
        if (mute)
            System.out.println("무음 처리합니다.");
        else
            System.out.println("무음 처리합니다.");
    }

    // static method
    static void changeBattery() {
        System.out.println("건전지를 교환합니다.");
    }
}

/*
<정적 메소드 선언>
정적 메소드는 디폴트 메소드와 마찬가지로 자바 8에서 추가된 인터페이스의 새로운 멤버이다.
형태는 클래스의 정적 메소드와 완전 동일하다.
정적 메소드는 public 특성을 갖기 때문에 public을 생략하더라도 자동적으로
컴파일 과정에서 붙게 된다.

    [public] static 리턴타입 메소드명(매개변수, ...) { ... }

윗 예제는 RemoteControl 인터페이스에서 밧데리를 교환하는 기능을 가진
changeBattery() 정적 메소드를 선언하였다.
*/