package Chapter10.AutomaticResourceClosing;
// AutoCloseable 구현 클래스
public class TryWithResourceExample {
    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("file.txt")) {
            fis.read();
            throw new Exception();      // 강제적으로 예외 발생시킴
        } catch (Exception e) {
            System.out.println("예외 처리 코드가 실행되었습니다.");
        }
    }
}

/*
윗 예제는 직접 AutoCloseable을 구현해서 FileInputStream 클래스를 작성했다.
TryWithResourceExample 클래스의 main() 메소드에서 try-with-resources를 사용하면 
발생하는 즉시 자동으로 FileInputStream의 close()가 호출 하는 것을 볼 수 있다.
*/