package Chapter06.MethodOL;
// 메소드 오버로딩
public class Calculator {
    // 정사각형의 넓이
    double areaRectangle(double width) {
        return width * width;
    }

    // 직사각형 넓이
    double areaRectangle(double width, double height) {
        return width * height;
    }
}
