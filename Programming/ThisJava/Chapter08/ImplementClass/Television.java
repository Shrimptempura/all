package Chapter08.ImplementClass;
// 구현 클래스
public class Television implements RemoteControl {
    // field
    private int volume;

    // turnOn() abstract method's nature method
    // turnOn() 추상 메소드의 실체 메소드
    @Override
    public void turnOn() {
        System.out.println("TV를 켭니다.");
    }

    // turnOff() 추상 메소드의 실체 메소드
    @Override
    public void turnOff() {
        System.out.println("TV를 끕니다.");
    }

    // setVolume() 추상 메소드의 실체 메소드
    @Override
    public void setVolume(int volume) {
        // volume은 RemoteControl에서 최저0, 최대10
        if (volume > RemoteControl.MAX_VOLUME)
            this.volume = RemoteControl.MAX_VOLUME;
        else if (volume < RemoteControl.MIN_VOLUME)
            this.volume = RemoteControl.MIN_VOLUME;
        else
            this.volume = volume;
        System.out.println("현재 TV 볼륨 : " + this.volume);
    }
}

/*
다음은 Television과 Audoi라는 이름을 가지고 있는 RemoteConrol 구현 클래스를 작성하는
방법이다.
클래스 선언부 끝에 implements RemoteControl이 붙어 있기 때문에 이 두 클래스는 
RemoteControl 인터페이스로 사용이 가능하다.

RemoteControl에는 3개의 추상 메소드가 있기 때무네 Television과 Audio는 
이 추상 메소드들에 대한 실체 메소드를 가지고 있어야 한다.
*/
