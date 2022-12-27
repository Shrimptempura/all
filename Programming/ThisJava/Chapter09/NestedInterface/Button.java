package Chapter09.NestedInterface;
// 중첩 인터페이스
public class Button {
    // 인터페이스 타입 필드
    OnClickListener listener;

    // 매개 변수의 다형성
    void setOnClickListener(OnClickListener listener) {
        this.listener = listener;
    }

    void touch() {
        // 구현 객체의 onClick() 메소드 호출
        listener.onClick();
    }

    // 중첩 인터페이스
    interface OnClickListener {
        void onClick();
    }
}

/*
<중첩 인터페이스(Nested Interface)>
중첩 인터페이스는 클래스의 멤버로 선언된 인터페이스를 말한다.
인터페이스를 클래스 내부에 선언하는 이유는 해당 클래스와 긴밀한 관계를 맺는
구현 클래스를 만들기 위해서이다.

특히 UI 프로그래밍에서 이벤트를 처리할 목적으로 많이 사용된다.

    class A {
        ''interface I {         // 중첩 인터페이스
            void method();
        }''
    }

예를 들어 Button을 클릭했을 때 이벤트를 처리하는 객체를 받고 싶다고 가정해보자
그렇다고 아무 객체나 받으면 안되고, Button 내부에 선언된 중첩 인터페이스를 구현한
객체만 받아야 한다면 윗 예제와 같다.

Button 클래스의 내용을 보면 중첩 인터페이스(OnClickListener) 타입으로
필드(listener)를 선언하고 Setter 메소드(setOnClickListerer())로 구현 객체를 받아
필드에 대입한다. 

버튼 이벤트가 발생했을 때(touch() 메소드가 실행되었을 때) 인터페이스를 통해
구현 객체의 메소드를 호출(listener.onClick())한다.
*/