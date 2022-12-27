package Chapter08.MethodDeclaration.AbstractMethodDeclaration;
// 메소드 선언
public interface RemoteControl {
    // 상수
    public int MAX_VOLUME = 10;
    public int MIN_VOLUME = 0;

    // 추상 메소드
    public void turnOn();                   // 9 ~ 11 : 메소드 선언부만 작성
    public void turnOff();                  // (추상 메소드)
    public void setVolume(int volume);
}

/*
<추상 메소드 선언>
인터페이스를 통해 호출된 메소드는 최종적으로 객체에서 실행된다.
그렇기 때문에 인터페이스의 메소드는 실행 블록이 필요 없는 추상 메소드로 선언한다.
추상 메소드는 리턴 타입, 메소드명, 매개 변수만 기술되고 중괄호 {}를 붙이지 않는 메소드를
말한다.

인터페이스에 선언된 추상 메소드는 모두 public abstract의 특성을 갖기 때문에 public abstract를
생략하더라도 자동적으로 컴파일 과정에서 붙게된다.

추상메소드 (메소드 선언부) (호출 방법만 기술) [public abstract] 리턴타입 
                                                메소드명(매개변수, ...);

윗 예제 (RemoteControl.java)는 인터페이스에서 turnOn(), turnOff(), setVolume()
추상 메소드를 선언했다. 세 메소드는 모두 리턴 타입이 void라는 것과 turnOn(), turnOff()
메소드는 호출 시 매개값이 필요 없고, setVolume() 메소드만 int 매개값이 필요함을 알려준다.
*/
