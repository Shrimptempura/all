package Chapter08.UsingInterface.AbstractMethod;

import Chapter08.ImplementClass.Audio;

// 인터페이스 사용
public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc = null;    // 인터페이스 변수 선언

        rc = new Television();      // Television 객체를 인터페이스 타입에 대입
        rc.turnOn();                // 11-12 : 인터페이스의 turnOn(), turnOff() 호출
        rc.turnOff();

        rc = new Audio();           // Audio 객체를 인터페이스 타입에 대입
        rc.turnOn();                // 15-16 : 인터페이스의 turnOn(), turnOff() 호출
        rc.turnOff();
    }
}

/*
<추상 메소드 사용>
구현 객체가 인터페이스 타입에 대입되면 인터페이스에 선언된 추상 메소드를 개발 코드에서 호출할 수 있게 된다.
개발 코드에서 RemoteControl의 변수 rc로 turnOn() 또는 turnOff() 메소드를 호출하면
구현 객체의 turnOn()과 turnOff() 메소드가 자동 실행된다.

    RemoteControl rc = new Television();
    rc.turnOn();    --> Television의 turnOn() 실행
    rc.turnOff();   --> Television의 turnOff() 실행

[개발 코드] : MyClass  ===> [인터페이스] : RemoteControl  ===> [구현 객체] : Television, Audio
*/