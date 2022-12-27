package Chapter10.AutomaticResourceClosing;
// AutoCloseable 구현 클래스
public class FileInputStream implements AutoCloseable {
    private String file;

    public FileInputStream(String file) {
        this.file = file;
    }

    public void read() {
        System.out.println(file + "을 읽습니다.");
    }

    @Override
    public void close() throws Exception {
        System.out.println(file + "을 닫습니다.");
    }
}

/*
윗 예제는 직접 AutoCloseable을 구현해서 FileInputStream 클래스를 작성했다.
TryWithResourceExample 클래스의 main() 메소드에서 try-with-resources를 사용하면 
발생하는 즉시 자동으로 FileInputStream의 close()가 호출 하는 것을 볼 수 있다.
*/