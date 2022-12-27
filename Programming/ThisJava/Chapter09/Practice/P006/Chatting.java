package Chapter09.Practice.P006;
// Catting 클래스의 컴파일 에러 발생 이유 찾기
public class Chatting {
    void startChat(String chatId) {
        // String nickName = null;
        // nickName = chatId;
        String nickName = chatId;
        //9-18 : Chat 로컬 클래스
        // nickName이라는 로컬 변수를 사용중(fianl 특성);
        // 5행 null도 하나의 값임이므로 6행의 chatId를 추가 대입 불가
        // 7행으로 최초값으로 charId가 들어감
        Chat chat = new Chat() {
            @Override
            public void start() {
                while (true) {
                    String inputData = "안녕하세요";
                    String message = "[" + nickName + "] " + inputData;
                    sendMessage(message);
                }
            }
        };
        chat.start();
    }

    class Chat {
        void start() {}
        void sendMessage(String message) {}
    }
}

// 로컬 클래스