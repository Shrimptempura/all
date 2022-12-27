package Chapter06.getter_setter;
// Getter와 Setter 메소드 선언
// Car 클래스의 speed와 stop 필드에 대한 Getter와 Setter를 작성한 것
public class Car {
    // 필드
    private int speed;
    private boolean stop;

    // 생성자

    // 메소드
    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        if (speed < 0) {
            this.speed = 0;
            return;
        }
        else
            this.speed = speed;
    }

    public boolean isStop() {
        return stop;
    }

    public void setStop(boolean stop) {
        this.stop = stop;
        this.speed = 0;
    }
}

/*
<Getter와 Setter 메소드>
일반적으로 객체 지향 프로그래밍에서 객체의 데이터는 객체 외부에서 직접적으로 접근하는
것을 막는다. 그 이유는 객체의 데이터를 외부에서 마음대로 읽고 변경할 경우 객체의 
무결성(결점이 없는 성질)이 깨어질 수 있기 때문이다. 예를 들어 자동차의 속도는
음수가 될 수 없다. 실제로 다음 코드는 Car 객체의 speed 필드값을 -100으로 변경시킨다.

    myCar.speed = -100;

이러한 문제점을 해결하기 위해 객체 지향 프로그래밍에서는 메소드를 통해서
데이터를 변경하는 방법을 선호한다. 데이터는 외부에서 접근할 수 없도록 막고
메소드는 공개에서 외부에서 메소드를 통해 데이터에 접근하도록 유도한다.
그 이유는 메소드는 매개값을 검증해서 유효한 값만 데이터로 저장할 수 있기 때문이다.

이러한 역할을 하는 것이 Setter이다. 예를 들어 자동차 속도를 setSpeed() 메소드로
변경할 경우 다음과 같이 검증 코드를 작성할 수 있다.

    void setSpeed(double speed) {
        if (speed < 0) {        // 52 ~ 54행, 매개값이 음수일 경우, speed 필드에
            this.speed = 0;     // 0으로 저장하고, 메소드 실행 종료
            return;
        }
        else
            this.speed = speed;
    }

외부에서 객체의 데이터를 읽을 때도 메소드를 사용하는 것이 좋다.
객체 외부에서 객체의 필드값을 사용하기에 부적절한 경우도 있다.
이런 경우에는 메소드로 필드값을 가공한 후 외부로 전달하면 된다.
이런 메소드가 바로 Getter이다.

    double getSpeed() {
        double km = seed * 1.6;     // 66 ~ 67행, 필드값인 마일을 km 단위로
        return km;                  // 환산 후 외부로 리턴
    }

클래스를 선언할 때 가능하다면 필드를 private로 선언해서 외부로부터 보호하고,
필드에 대한 Setter와 Getter 메소드를 작성해서 필드값을 안전하게 변경/사용하는 것이
좋다. 다음은 Setter와 Getter 메소드를 선언하는 방법을 보여준다.
검증 코드나 변환 코드는 필요에 따라 추가해야 한다.

private 타입 fieldName;     // 필드 접근 제한자 : private

// Getter
public 리턴 타입 getFieldName() {
    return fieldName;
}
    // 접근 제한자: public
    // 리턴 타입 : 필드 타입
    // 메소드 이름 : get + 필드이름(첫문자 대문자)
    // 리턴값 : 필드값


// Setter
public void setFieldName(타입 fieldName) {
    this.fieldName = fieldName;
}
    // 접근 제한자 : public
    // 리턴 타입 : void
    // 메소드 이름 : set + 필드이름(첫문자 대문자)
    // 매개 변수 타입 : 필드 타입


필드 타입이 boolean일 경우에는 Getter는 get으로 시작하지 않고
is로 시작하는 것이 관례이다. 예를 들어 stop 필드의 Getter와 Setter는 다음과 같다.

    private boolean stop;       // 필드 접근 제한자 : private

    // Getter
    public boolean isStop() {
        return stop;
    }
        // 접근 제한자 : public
        // 리턴 타입 : 필드타입
        // 메소드 이름 : is + 필드이름(첫문자 대문자)
        // 리턴값 : 필드값

    // Setter
    public void setStop(boolean stop) {
        this.stop = stop;
    }
        // 접근 제한자 : public
        // 리턴 타입 : void
        // 메소드 이름 : set + 필드이름(첫문자 대문자)
        // 매개 변수 타입 : 필드타입


만약 외부에서 필드값을 읽을 수만 있고 변경하지 못하도록 하려면(읽기 전용) Getter 메소드만
선언해도 좋고, 아니면 Setter 메소드를 private 접근 제한을 갖도록 선언해도 좋다.
이클립스는 클래스에 선언된 필드에 대해 자동적으로 Getter와 Setter 메소드를 생성시키는
기능이 있다. 필드를 선언한 후 메뉴에서[Source -> Generate Getters and Setters]를
선택하면 선언된 필드에 대한 Getterd와 Setter를 자동 생성시킬 수 있는 대화상자가
실행된다.
*/
