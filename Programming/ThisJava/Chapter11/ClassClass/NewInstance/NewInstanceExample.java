package Chapter11.ClassClass.NewInstance;
// 동적 객체 생성 및 실행
public class NewInstanceExample {
    public static void main(String[] args) {
        try {
            Class clazz = Class.forName("Chapter11.ClassClass.NewInstance.SendAction");
            // Class clazz = Class.forName(Chapter11.ClassClass.NewInstance.ReceiveAction);
            Action action = (Action) clazz.newInstance();
            action.execute();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (InstantiationException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        }
    }
}

// Class 유형의 newInstance() 메서드는 버전 9Java 이후 더 이상 사용되지 않습니다.