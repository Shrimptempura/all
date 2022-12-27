package Chapter08.ImplementClass;
// 구현 클래스
public class Audio implements RemoteControl {
    // field
    private int volume;

    // turnOn() 추상 메소드의 실체 메소드
    public void turnOn() {
        System.out.println("Audio를 켭니다.");
    }

    // turnOff() 추상 메소드의 실체 메소드
    public void turnOff() {
        System.out.println("Audio를 끕니다.");
    }

    // setVolume() 추상 메소드의 실체 메소드
    public void setVolume(int volume) {
        if (volume > RemoteControl.MAX_VOLUME)
            this.volume = RemoteControl.MAX_VOLUME;
        else if (volume < RemoteControl.MIN_VOLUME)
            this.volume = RemoteControl.MIN_VOLUME;
        else
            this.volume = volume;
        System.out.println("현재 Audio 볼륨: " + this.volume);
    }
}

/*
(구현 클래스에서 인터페이스의 추상 메소드들에 대한 실체 메소드를 작성할 때 주의할 점)
인터페이스의 모든 메소드는 기본적으로 public 접근 제한을 갖기 때문에 public보다 
더 낮은 접근 제한으로 작성할 수 없다.

public을 생략하면 "Cannot reduce the visibility of the inherited method" compile error

만약 인터페이스에서 선언된 추상 메소드에 대응하는 실체 메소드를 구현 클래스가
작성하지 않으면 구현 클래스는 자동적으로 추상 클래스가 된다.

그러힉 때문에 클래스 선언부에 abstract 키워드를 추가해야 하낟.

    public abstract class Television implements RemoteControl {
        public void turnOn() { ... }        // 42-43 : setVolume() 실체 메소드가 없다.
        public void turnOff() { ... }       // 일부만 구현
    }

<이클립스>
이클립스는 인터페이스의 추상 메소드에 대한 실체 메소드를 자동 생성해주는 기능을 제공한다.
코드 창에서 인터페이스를 implements한 이후 이클립스 메뉴에서 [Source -> Override/
Implemnet Methods ... ] 선택후 추상 메소드들을 체크후 OK
*/