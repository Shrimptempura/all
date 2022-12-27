package Chapter09.NestedInterface;
// 구현 클래스
public class MessageListener implements Button.OnClickListener {
    @Override
    public void onClick() {
        System.out.println("메시지를 보냅니다.");
    }
}

// Button의 중첩 인터페이스인 OnClickLintener를 구현한 클래스