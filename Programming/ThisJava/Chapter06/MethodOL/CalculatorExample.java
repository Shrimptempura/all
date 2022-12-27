package Chapter06.MethodOL;
// 메소드 오버로딩
// 어떤 메소드가 호출될 것인지는 매개값의 수에 달려있다.
public class CalculatorExample {
    public static void main(String[] args) {
        Calculator myCalcu = new Calculator();

        // 정사각형 넓이 구하기
        double result1 = myCalcu.areaRectangle(10);

        // 직사각형 넓이 구하기
        double result2 = myCalcu.areaRectangle(10, 20);

        // 결과 출력
        System.out.println("정사각형 넓이=" + result1);
        System.out.println("직사각형 넓이=" + result2);
    }
}

/*
<메소드 오버로딩>
클래스 내에 같은 이름의 메소드를 여러 개 선언하는 것을 메소드 오버로딩이라고 한다.
메소드 오버로딩의 조건은 매개 변수의 타입, 개수, 순서 중 하나가 달라야 한다.

    class 클래스 {
        리턴 타입   메소드 이름 (타입 변수, ...) {...}
        무관        동일        매개 변수의 타입, 개수, 순서가 달라야 함
        리턴 타입   메소드 이름 (타입 변수, ...) {...}
    }

메소드 오버로딩이 필요한 이유는 매개값을 다양하게 받아 처리할 수 있도록 하기 위해서이다.

ex) plus() method
int plus(int x, int y) {
    int result = x + y;
    return result;
}

plus() 메소드를 호출하기 위해서는 두 개의 int 매개 값이 필요하다.
하지만 int 타입이 아니라 double로 덧셈하기 위해서는 plus()를 호출할 수 없다.
해갤 방법은 매개 변수가 double 타입으로 선언된 plus() 메소드를 하나 더 선언하는 것이다.

double plus(double x, double y) {
    double result = x + y;
    return result;
}

오버로딩된 메소드들 호출할 경우 JVM은 매개값의 타입을 보고 메소드를 선택한다.
-> int 넣으면 int plus, double 넣으면 double plus가 실행된다.

만약 한개는 int 한개는 double을 넣으면 어떻게 될까?
-> 컴파일 오류가 날 것 같지만, 사실 plus(double x, double y) 메소드가 실행된다.
자바 가상 기게는 이라적으로 매개 변수 타입을 보지만, 매개 변수의 타입이 일치하지 않을 
경우 자동 타입 변환이 가능한지를 검사한다. 첫번째 매개 변수인 int 타입은 double 타입으로
변환이 가능하므로 최종적으로 plus(double s, double y) 메소드가 선택된다.

메소드를 오버로딩할 때 주의할 점은
매개 변수의 타입과 개수, 순서가 똑같을 경우 매개 변수 이름만 바꾸는 것은 메소드
오버로딩이 아니다. 또한 리턴 타입만 다르고 매개 변수가 동일하다면 이것은 오버로딩이 아니다.
왜냐면 리턴 타입은 자바 가상 기계가 메소드를 선택할 때 아무런 도움을 주지 못하기 때문이다.

아래와 같이 선언했다면 오버로딩이 아니기 때문에 컴파일 오류가 발생한다.
int divide(int x, int y) {...}
double divide(int boonja, int boonmo) {...}

메소드 오버로딩의 가장 대표적인 예는 System.out.println() 메소드이다. println() 메소드는
호출할 때 주어진 매개값의 타입에 따라서 오버로딩된 println() 메소드를 호출한다.


*/