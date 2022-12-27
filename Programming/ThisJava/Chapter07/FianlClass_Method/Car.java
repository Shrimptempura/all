package Chapter07.FianlClass_Method;
// 재정의할 수 없는 final 메소드
public class Car {
    // 필드
    public int speed;

    // 메소드
    public void speedUp() {
        speed += 1;
    }

    // final 메소드
    public final void stop() {
        System.out.println("차를 멈춤");
        speed = 0;
    }
}

/*
<오버라이딩할 수 없는 fianl 메소드>
메소드를 선언할 때 final 키워드를 붙이게 되면 이 메소드는 최종적인 메소드이므로
오버라이딩(Overriding)할 수 없는 메소드가 된다.

즉 부모 클래스를 상속해서 자식 클래스를 선언할 때 부모 클래스에 선언된
fianl 메소드는 자식 클래스에서 재정의할 수 없다는 것이다.

    public final 리턴타입 메소드([매개변수, ...]) { ... }

윗 예제는 Car 클래스의 stop() 메소드를 final로 선언해서 Car를 상속한 SportCar 클래스에서
stop() 메소드를 오버라이딩할 수 없음을 보여준다.
*/