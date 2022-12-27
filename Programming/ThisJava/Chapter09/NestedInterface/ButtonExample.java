package Chapter09.NestedInterface;
// 버튼 이벤트 처리
public class ButtonExample {
    public static void main(String[] args) {
        Button btn = new Button();

        btn.setOnClickListener(new CallListener());
        btn.touch();

        btn.setOnClickListener(new MessageListener());
        btn.touch();

        // 14-20 : 익명구현 미리 예습부분
        btn.setOnClickListener(new Button.OnClickListener() {
            @Override
            public void onClick() {
                System.out.println("사진을 찍습니다.");
            }
        });
        btn.touch();
    }
}

/*
버튼을 클릭했을 때 두 가지 방법으로 이벤트를 처리하는 방법.
어떤 구현 객체를 생성해서 Button 객체의 setOnClickListener() 메소드로
세팅하느냐에 따라서 Button의 touch() 메소드의 실행 결과가 달라진다.
*/