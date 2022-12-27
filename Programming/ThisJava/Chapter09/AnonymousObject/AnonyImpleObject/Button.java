package Chapter09.AnonymousObject.AnonyImpleObject;
// UI 클래스
public class Button {
    // 인터페이스 타입 필드
    OnClickListener listener;

    // 매개 변수의 다형성
    void setOnClickListener(OnClickListener listener) {
        this.listener = listener;
    }

    // 구현 객체의 onClick() 메소드 호출
    void touch() {
        listener.onClick();
    }

    // 중첩 인터페이스
    interface OnClickListener {
        void onClick();
    }
}

/*
UI 프로그램에서 흔히 사용되는 버튼이 클릭 이벤트 처리를 구현 객체를 이용해서 처리

Button 클래스의 내용을 보면 중첩 인터페이스(OnClickListener) 타임으로 
필드(listener)를 선언하고 Setter 메소드(setOnClickListener())로 외부에서 
구현 객체를 받아 필드에 대입한다.

버튼 이벤트가 발생했을때(touch() 메소드가 실행되었을 때) 인터페이스를 통해
구현 객체의 메소드를 호출(listenr.onClick())한다.
*/