package Chapter08.ImplementClass;
// 인터페이스 변수에 구현 객체 대입
public class RemoteControlExmaple {
    public static void main(String[] args) {
        RemoteControl rc;
        rc = new Television();
        rc = new Audio();
    }
}

// 실행은 안됨
/*
구현 클래스가 작성되면 new 연산자로 객체를 생성할 수 있다.

문제는 어떤 타입의 변수에 대입하느냐이다. 다음과 같이 Television 객체를 생성하고
Television 변수에 대입한다고 인터페이스를 사용하는 것이 아니다.

    Television tv = new Television();

인터페이스로 구현 객체를 사용하려면 다음과 같이 인터페이스 변수를 선언하고, 구현 객체를
대입해야 한다. 인터페이스 변수는 참조 타입이기 때문에 구현 객체가 대입될 경우
구현 객체의 번지를 저장한다.

    인터페이스 변수;                |   인터페이스 변수 = 구현객체
    변수 = 구현객체;                |

RemoteControl 인터페이스로 구현 객체인 Television과 Audio를 사용하려면 다음과 같이
RemoteControl 타입 변수 rc를 선언하고 구현 객체를 대입해야 한다.

인터페이스 사용 방법은 다음 절에서 알아본다.
여기서는 구현 객체를 인터페이스 변수에 대입해서 사용한다는 것만 알아두자.
*/