package Chapter09.AnonymousObject.AnonyImpleObject;
// UI 클래스
public class Window {
    Button button1 = new Button();
    Button button2 = new Button();

    // 필드 선언과 초기값 대입
    Button.OnClickListener listener = new Button.OnClickListener() {
        @Override
        public void onClick() {
            System.out.println("전화를 겁니다.");
        }
    };

    Window() {
        // 매개값으로 필드 대입 -> 7행
        button1.setOnClickListener(listener);
        // 매개값으로 익명 구현 객체 대입
        button2.setOnClickListener(new Button.OnClickListener() {
            @Override
            public void onClick() {
                System.out.println("메시지를 보냅니다");
            }
        });
    }
}
