package Chapter06.StaticInitialization;
// 정적 초기화 블록
public class Television {
    static String company = "Samsung";
    static String model = "LCD";
    static String info;

    static {
        info = company + "-" + model;
    }
}
