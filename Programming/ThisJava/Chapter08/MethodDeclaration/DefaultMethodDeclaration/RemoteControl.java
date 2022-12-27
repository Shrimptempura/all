package Chapter08.MethodDeclaration.DefaultMethodDeclaration;
// 메소드 선언
interface RemoteControl {
    // 상수
    int MAX_VOLUME = 10;
    int MIN_VOLUME = 0;

    // 추상 메소드
    void turnOn();
    void turnOff();
    void setVolume(int volume);

    // 디폴트 메소드,                   실행 내용까지 작성
    default void setMute(boolean mute) {
        if (mute)
            System.out.println("무음 처리합니다.");
        else
            System.out.println("무음 해제합니다.");
    }
}

/*
<디폴트 메소드 선언>
디폴트 메소드는 자바 8에서 추가된 인터페이스의 새로운 멤버이다.
형태는 클래스의 인스턴스 메소드와 동일한데, default 키워드가 리턴 타입 앞에 붙는다.
디폴트 메소드는 public 특성을 갖기 때문에 public을 생략하더라도 자동저긍로 컴파일
과정에서 붙게 된다.
    [public] default 리턴타입 메소드명(매개변수, ...) { ... }

윗 예제는 RemoteControl 인터페이스에서 무음 처리 기능을 제공하는 setMute() 디폴트 메소드를
선언하였다.
*/