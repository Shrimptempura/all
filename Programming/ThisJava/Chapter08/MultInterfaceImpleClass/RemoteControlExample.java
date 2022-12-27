package Chapter08.MultInterfaceImpleClass;

public class RemoteControlExample {
    public static void main(String[] args) {
        SmartTelevision tv = new SmartTelevision();

        RemoteControl rc = tv;
        rc.turnOn();
        rc.turnOff();
        rc.setVolume(5);

        Searchable searchable = tv;
        searchable.search("https://naver.com");
    }
}

// 책에 없는 예시