package Chapter06;
// 외부 클래스에서 Car 필드값 읽기와 변경
public class CarExample {
    public static void main(String[] args) {
        // 객체 생성
        Car myCar = new Car();

        // 필드값 읽기
        System.out.println("제작회사: " + myCar.company);
        System.out.println("모델명 : " + myCar.model);
        System.out.println("색깔 : " + myCar.color);
        System.out.println("최고속도 : " + myCar.maxSpeed);
        System.out.println("현재속도 : " + myCar.speed);

        // 필드값 변경
        myCar.speed = 60;
        System.out.println("수정된 속도 : " + myCar.speed);
    }
}
/*
<필드>
- 객체의 고유 데이터, 객체가 가져야 할 부품, 객체의 현재 상태 데이터를 저장하는 곳
ex) 자동차 예시
    고유데이터 : 제작회사, 모델, 색깔, 최고 속도
    상태데이터 : 현재 속도, 엔진 회전 수
    부품 : 차체, 엔진, 타이어

<필드 선언>
필드 선언은 클래스 중괄호 {} 블록 어디서든 존재할 수 있다.
생성자 선언과 메소드 선언의 앞과 뒤 어떤 곳에서도 필드 선언이 가능하다.
하지만 생성자와 메소드 중괄호 블록 내부에는 선언될 수 없다.

생성자와 메소드 중괄호 블록 내부에 선언된 것은 보두 로컬 변수가 된다.

필드 선언은 변수 선언 형태와 비슷하다.
    타입 필드 [ = 초기값];

타입은 필드에 저장할 데이터의 종류를 결정한다. 기본타입(int,double..), 참조타입(class, ary..)
필드의 초기값은 필드 선언 시 주어질 수도 있고, 생략될 수도 있다.

초기값이 지정되지 않은 필드들은 객체 생성 시 자동으로 기본 초기값을 가진다.
*/


/*
필드를 사용한다는 것은 필드값을 읽고, 변경하는 작업을 말한다. 클래스 내부의 생성자나
메소드에서 사용할 경우 단순히 필드 이름으로 읽고 변경하면 되지만, 클래스 외부에서
사용할 경우 우선적으로 클래스로부터 객체를 생성한 뒤 필드를 사용해야 한다.
그 이유는 필드는 객체 소속된 데이터이므로 객체가 존재하지 않으면 필드도 존재하지
않기 때문이다.


    Person 클래스
    void method() {
        // Car 객체 생성
        Car myCar = new Car();
        // 필드 사용
        myCar.speed = 60;   // 값 변경
    }

    Car 클래스
    // 필드
    int speed;      // *

    // 생성자
    Car() {
        speed = 0;      // *
    }

    // 메소드
    void method(...) {
        speed = 10;     // *
    }

위 그림을 보면 Car 클래스의 speed 필드는 생성자와 메소드에서 변경이 가능하다.
사용방법은 변수와 동일한데, 차이점은 변수는 자신이 선언된 생성자 또는 메소드 블록 내부
에서만 사용할 수 있는 반면, 필드는 생성자와 모든 메소드에서 사용이 가능하다.
외부 Person 클래스에서 Car 클래스의 speed 필드값을 사용하려면 
Car 객체를 우선 생성해야 한다.
    Car myCar = newCar();

myCar 변수가 Car 객체를 참조하게 되면 도트(.)연산자를 사용해서 speed 필드에
접근할 수 있다. 도트(.) 연산자는 객체 접근 연산자로 객체가 가지고 있는 필드나,
메소드를 사용하고자 할때 사용된다. 

다음 코드는 Car 객체의 speed 필드값을 60으로 변경하고 있다.
    myCar.speed = 60;
*/