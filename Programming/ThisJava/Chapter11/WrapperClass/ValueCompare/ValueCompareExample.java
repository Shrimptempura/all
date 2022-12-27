package Chapter11.WrapperClass.ValueCompare;
// 포장 객체 비교
public class ValueCompareExample {
    public static void main(String[] args) {
        System.out.println("[-128~127 초과값일 경우]");
        Integer obj1 = 300;
        Integer obj2 = 300;
        System.out.println("==결과: " + (obj1 == obj2));
        System.out.println("언박싱후 ==결과: " + (obj1.intValue() == obj2.intValue()));
        System.out.println("equals() 결과: " + obj1.equals(obj2));
        System.out.println();

        System.out.println("[-128~127 범위값일 경우]");
        Integer obj3 = 10;
        Integer obj4 = 10;
        System.out.println("==결과: " + (obj3 == obj4));
        System.out.println("언박싱후 ==결과: " + (obj3.intValue() == obj4.intValue()));
        System.out.println("equals() 결과: " + obj3.equals(obj4));
    }
}

/*
 * <포장 값 비교>
 * 포장 객체는 내부의 값을 비교하기 위해 ==와 != 연산자를 사용할 수 없다.
 * 이 연사자는 내부의 값을 비교하는 것이 아니라 포장 객체의 참조를 비교하기 때문이다.
 * 
 * 예를 들어 다음 두 Integer 객체는 300이라는 동일한 값을 갖고 있지만
 * == 연산의 결과는 false가 나온다.
 * 
 * Integer obj1 = 300;
 * Integer obj2 = 300;
 * System.out.println(obj1 == obj2);
 * 
 * 
 * 
 * 내부의 값만 비교하려면 언박싱한 값을 얻어 비교해야 한다.
 * 그러나 자바 언어 명세에 보면 다음과 같은 규칙이 있다. 박싱된 값이 다음 표에
 * 나와 있는 값이라면 ==와 != 연산자로 내부의 값을 바로 비교할 수 있다.
 * 
 * 그 이외의 경우에는 박싱된 값을 ==와 != 연산자로 비교할 수 없다.
 * 
 * 
        * 타입         |   값의 범위
        * booelan          true, false
        * char             \u0000 ~ \u007f
        * byte, short, int     -128 ~ 127  
 * 
 * 
 * 포장 객체에 정확히 어떤 값이 저장될지 모르는 상황이라면 ==와 != 연산자는
 * 사용하지 않는 것이 좋다. 직접 내부 값을 언박싱해서 비교하거나, equals() 메소드로
 * 내부 값을 비교하는 것이 좋다.
 * 
 * 포장 클래스의 equals() 메소드는 내부의 값을 비교하도록 오버라이딩되어 있다.
 */