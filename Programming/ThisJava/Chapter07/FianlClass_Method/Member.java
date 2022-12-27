package Chapter07.FianlClass_Method;
// 상속할 수 없는 final 클래스
public final class Member {
    ;
}

/*
<final 클래스와 final 메소드>
fianl 키워드는 클래스, 필드, 메소드 선언 시에 사용할 수 있다. final 키워드는
해당 선언이 최종 상태이고, 결코 수정될 수 없음을 뜻한다. fianl 키워드가 클래스, 필드,
메소드 선언에 사용될 경우 해석이 조금씩 달라지는데,

필드 선언 시에 final이 지정되면 초기값 설정 후, 더 이상 값을 변경할 수 없다는 것을 알았다.
그렇다면 클래스와 메소드에 fianl이 지정되면 어떤 효과를 낼까?

클래스와 메소드 선언 시에 fianl 키워드가 지정되면 상속과 관련이 있다.

<상속할 수 없는 final 클래스>
클래스를 선언할 때 fianl 키워드를 class 앞에 붙이게 되면 이 클래스는 최종적인
클래스이므로 상속할 수 없는 클래스가 된다. 즉 final 클래스는 부모 클래스가 될 수 없어
자식 클래스를 만들 수 없다는 것이다.

    public fianl class 클래스 { ... }

fianl 클래스의 대표적인 예는 자바 표준 API에서 제공하는 String 클래스이다.
String 클래스는 다음과 같이 선언되어 있다.

    public fianl class String { ... }

그래서 다음과 같이 자식 클래스를 만들 수 없다.

    public class NewString extends String { ... }

윗 예제는 Member 클래스 선언 시 final을 지정함으로써 Member를 상속해서 
VVIP을 선언할 수 없음을 보여준다.
*/