package Chapter06.CalculatorInternal;
// Calculator의 excute() 실행
public class CalculatorExample {
    public static void main(String[] args) {
        Calculator myCalc = new Calculator();
        myCalc.execute();
        // Calculator의 execute() 메소드 호출;
    }
}

/*
메소드는 클래스 내,외부의 호출에 의해 실행된다. 클래스 내부의 다른 메소드에서
호출할 경우에는 단순한 메소드 이름으로 호출하면 되지만, 클래스 외부에서 호출할
경우에는 우선 클래스로부터 객체를 생성한 뒤, 참조 변수를 이용해서 메소드를 호출한다.
그 이유는 객체가 존재해야 메소드도 존재하기 때문이다.

    (외부)                                              (객체 내부)
void 외부메소드() {                         [메소드 선언]
    Car car = new Car();                             
    car.run();      //  호출        -->         void run() {...}
    car.stop();     //  ;;                      void stop() {...}
    car.sound();    //  ;;                      void sound() {...}
}                                           void 내부 메소드() {
                                                run();
                                                stop();         
                                                sound();
                                            }

<객체 내부에서 호출>
클래스 내부에서 다른 메소드를 호출할 경우에는 다음과 같은 형태로 작성한다.
메소드가 매개변수를 가지고 있을 때는 매개 변수의 타입과 수에 맞게 매개값을 제공한다.

    메소드(매개값, ...);

예를 들어 method2() 메소드에서 method1() 메소드를 호출하려면 다음과 같다.

    public class ClassName {
        void method1(String p1, int p2) {       // p1 = 홍길동, p2 = 100
            2) 실행
        }

        void method2() {
            method1("홍길동", 100); // 1) 26행에서 21행으로 호출
        }
    }

1) 호출에서 method1("홍길동", 100)이 호출되면 매개값인 "홍길동"은 p1 매개 변수에 대입되고
100은 p2 매개 변수에 대입된다. 그리고 2)실행에서 p1과 p2변수를 이용하게 된다.

메소드가 리턴값이 없거나, 있어도 받고 싶지 않을 경우 위와 같이 모두 호출이 가능하다.
리턴값이 있는 메소드를 호출하고 리턴값을 받고 싶다면 다음과 같이 변수를 선언하고 대입한다.

    타입 변수 = 메소드(매개값, ...);
            리턴값

주의점은 변수 타입은 메소드와 리턴 타입과 동일하거나, 타입 변환이 될 수 있어야 한다.
예를 들어 int 타입은 double 타입을 자동으로 변환하기 때문에 int 리턴값은 double 변수에
대입할 수 있다.


public class ClassName {
    int method1(int x, int y) {
        int result = x + y;
        return result;
    }

    void method2() {
        int result1 = method1(10, 20);      // result1에는 30이 저장
        double result2 = method1(10, 20);   // result2에는 30.0이 저장
    }
}
*/