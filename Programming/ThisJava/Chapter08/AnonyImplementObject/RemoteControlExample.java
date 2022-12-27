package Chapter08.AnonyImplementObject;
// RemoteControl의 익명 구현 객체
public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc = new RemoteControl() {
            @Override
            public void turnOn() { /* 실행문 */ }
            @Override
            public void turnOff() { /* 실행문 */ }
            @Override
            public void setVolume(int volume) { /* 실행문 */ }
        };
    }
}

/*
모든 객체는 클래스로부터 생성되는데, 익명 구현 객체도 예외는 아니다.
RemoteControlExample.java를 컴파일하면 자바 컴파일러에 의해 자동으로 다음과 같은
클래스 파일이 만들어진다.

    RemoteControlExample$1.class

RemoteControlExample 이름 뒤에 $가 붙고 생성 번호가 붙는데 1번부터 시작한다.
만약 두 번째 익명 구현 객체를 만들었다면 클래스 파일명은 RemoteControlExamle$2.class
가 된다.

        // 나는 안됨;;;;
*/