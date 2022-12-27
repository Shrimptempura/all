package Chapter06.Pratice.NumberOf17;
// 객체를 생성하지 않는다.!!! -> 정적 static 사용
public class PrinterExample {
    public static void main(String[] args) {
        Printer.println(10);
        Printer.println(true);
        Printer.println(5.7);
        Printer.println("홍길동");
        // 정적 호출 = 클래스.필드;  클래스.메소드(매개값, ...);
    }
}

// Printer 객체를 생성하지 않고 PrinterExmaple 클래스에서 다음과 같이 호출할려면
// Printer 클래스를 어떻게 수정해야 할까?