package Chapter08.UsingInterface.DefaultMethod;
// 디폴트 메소드 사용
public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc = null;

        rc = new Television();
        rc.turnOn();
        rc.setMute(true);

        rc = new Audio();
        rc.turnOn();
        rc. setMute(true);
    }
}
