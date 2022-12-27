package Chapter06.StaticMember;
// 정적 멤버 사용
public class CalculatorExample {
    public static void main(String[] args) {
        double result1 = 10 * 10 * Calculator.pi;
        int result2 = Calculator.plus(10, 5);
        int result3 = Calculator.minus(10, 5);

        System.out.println("result1 : " + result1);
        System.out.println("result2 : " + result2);
        System.out.println("result3 : " + result3);
    }
}

/*
<정적 멤버와 static>
정적 멤버는 클래스에 고정된 멤버로서 객체를 생성하지 않고 사용할 수 있는 필드와 
메소드를 말한다. 이들은 각각 정적 필드, 정적 메소드라고 부른다.
정적 멤버는 객체(인스턴스)에 소속된 멤버가 아니라 클래스에 소속된 멤버이기 때문에
클래스 멤버라고도 한다.

<정적 멤버 선언>
정적 필드와 정적 메소드를 선언 방법은 필드와 메소드 선언시 static 키워드를 추가로 붙인다.

    puliv class 클래스 {
        // 정적 필드
        static 타입 필드 [= 초기값];

        // 정적 메소드
        static 리턴 타입 메소드(매개변수선언, ...) {...}
    }

정적 필드와 정적 메소드는 클래스에 고정된 멤버이므로 클래스 로더가 클래스(바이트 코드)를
로딩해서 메소드 메모리 영역에 적재할 때 클래스 별로 관리한다. 따라서 클래스의 로딩이 끝나면
바로 사용할 수 있다.

필드를 선언할 때 인스턴스 필드로 선언할 것인가, 아니면 정적 필드로 선언할 것인가의
판단 기준은 객체마다 가지고 있어야 할 데이터라면 인스턴스 필드로 선언하고, 객체마다 가지고 있을
필요성이 없는 공용적인 데이터라면 정적 필드로 선언하는 것이 좋다.

예로 Calculator 클래스에서 파이(pi)는 Calculator 객체마다 가지고 있을 필요가 없는 
변하지 않는 공용적인 데이터이므로 정적 필드로 선언하는 것이 좋다.
그러나 객체마다 색깔이 다르다면 색깔은 인스턴스 필드로 선언해야 한다.

    public class Calculator {
        String color;
        static double pi = 3.14159;
    }

메소드인 경우, 인스턴스 메소드로 선언할 것인가, 정적 메소드로 선언할 것인가의 기준은
인스턴스 필드를 이용해서 실행해야 한다면 인스턴스 메소드로, 인스턴스 필드를 사용하지 않으면
정적 메소드로 서언한다. 

ex) Calculator 클래스의 덧셈, 뺄셈 기능은 인스턴스 필드를 이용하기 보다는 외부에서 
주어진 매개값들을 가지고 덧셈과 뺌셈을 수행하므로 정적 메소드로 선언하는 것이 좋다.
하지만 인스턴스 필드인 색깔을 변경하는 메소드는 인스턴스 메소드를 선언해야 한다.

    public class Calculator {
        String color;                                           // 인스턴스 필드
        void setColor(String color) {this.color = color;}       // 인스턴스 메소드
        static int plus(int x, int y) {return x + y;}           // 정적 메소드
        static int minu(int x, int y) {return x - y;}           // 정적 메소드
    }

<정적 멤버 사용>
클래스가 메모리로 로딩되면 정적 멤버를 바로 사용할 수 있는데, 클래스 이름과 함께 
도트(.) 연산자로 접근한다.

    클래스.필드;
    클래스.메소드(매개값, ...);
*/