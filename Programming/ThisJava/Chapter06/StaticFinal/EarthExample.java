package Chapter06.StaticFinal;
// 상수 사용
public class EarthExample {
    public static void main(String[] args) {
        System.out.println("지구의 반지름: " + Earth.EARTH_RADIUS + " km");
        System.out.println("지구의 표면적: " + Earth.EARTH_SURFACE_AREA + " km^2");
    }
}

/*
<상수(static final)>
일반적으로 불변의 값을 상수라 부른다. 불변의 값은 파이나, 지구의 무게 및 둘레 등이다.
이런 불변의 값을 저장하는 필드를 자바에서는 상수(constant)라 한다.
final 필드는 한 번 초기화되면 수정할 수 없는 필드라고 했다.

그렇다면 final 필드를 상수라고 부를수도 있을까?
-> 아니다. final 필드를 상수라고 부르지 않는다.

왜냐하면 불변의 값은 객체마다 저장할 필요가 없는 공용성을 띠고 있으며, 여러 가지 값으로
초기화될 수 없기 때문이다. fianl 필드는 객체마다 저장되고, 생성자의 매개값을 통해서
여러 가지 값을 가질 수 있기 때문에 상수가 될 수 없다.

상수는 static이면서 final이어야 한다. static final 필드는 객체마다 저장되지 않고,
클래스에만 포함된다. 그리고 한 번 초기값이 저장되면 변경할 수 없다.

    static final 타입 상수 [= 초기값];

초기값이 단순 값이라면 선언 시에 주는 것이 일반적이지만, 복잡한 초기화일 경우
정적 블록에서도 할수 있다.

    static final 타입 상수;
    static {
        상수 = 초기값;
    }

상수 이름은 모두 대문자로 작성하는 것이 관례이다. 단어로 혼합되었다면 _를 사용한다.
*/