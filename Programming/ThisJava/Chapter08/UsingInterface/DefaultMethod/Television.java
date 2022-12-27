package Chapter08.UsingInterface.DefaultMethod;
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