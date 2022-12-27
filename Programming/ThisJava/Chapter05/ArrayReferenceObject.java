package Chapter05;
// 객체를 참조하는 배열
public class ArrayReferenceObject {
    public static void main(String[] args) {
        String[] strArray = new String[3];
        strArray[0] = "Java";
        strArray[1] = "Java";
        strArray[2] = new String("Java");

        System.out.println(strArray[0] == strArray[1]);     // true (같은 객체 참조)
        System.out.println(strArray[0] == strArray[2]);     // false (다른 객체 참조)
        System.out.println(strArray[0].equals(strArray[2]));    // true (문자열 동일)
    }
}

/*
기본 타입(byte, char, short, int, long, float, double, boolean) 배열은 각 항목에
직접 값을 갖고 있지만, 참조 타입(클래스, 인터페이스) 배열은 각 항목에 객체의 번지를
가지고 있다. 예로 들어 String은 클래스 타입이므로 String[] 배열은 각 항목에 문자열이
아니라, String 객체의 주소를 가지고 있다. 즉 String 객체를 참조하게 된다.

String[] strArray = new String[3];
strArray[0] = "Java";
strArray[1] = "C++";
strArray[2] = "C#";

위 코드는 배열 변수 strArray를 선언하고 3개의 문자열 참조하는 배열을 생성한다.

따라서 String[] 배열의 항목도 결국 String 변수와 동일하게 취급되어야 한다.
예로 배열 항목 간에 문자열을 비교하기 위해서는 == 연산자 대신 equals() 메소드를 사용
해야 한다. ==는 객체의 번지 비교이기 때문에 문자열 비교에 사용할 수 없다.
*/