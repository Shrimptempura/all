package Chapter11.ClassClass.NewInstance;
// 발신 클래스
public class SendAction implements Action {
    @Override
    public void execute() {
        System.out.println("데이터를 보냅니다.");
    }
}
