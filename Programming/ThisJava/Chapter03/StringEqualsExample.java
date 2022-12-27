package Chapter03;
// 문자열 비교
public class StringEqualsExample {
    public static void main(String[] args) {
        String strVar1 = "신민철";
        String strVar2 = "신민철";
        String strVar3 = new String("신민철");

        System.out.println(strVar1 == strVar2);         // true
        System.out.println(strVar1 == strVar3);         // false
        System.out.println();
        System.out.println(strVar1.equals(strVar2));    // true
        System.out.println(strVar1.equals(strVar3));    // true
    }
}

/*
String 타입의 문자열을 비교할 때에는 대소(<, <= ...) 연산자를 사용할수 없다. 
동등 연산자(==, !=) 비교 연산자는 사용할 수 있으나 문자열이 같은지, 다른지를
비교하는 용도로는 사용되지 않는다.
기본 타입(byte, char, short, int...)인 변수의 값을 비교할 때에는 == 연산자를 
사용하지만 참조 타입인 String 변수를 비교할 때 == 연산자를 사용하면 원하지 않는
결과가 나올수가 있다.

String strVar1 = "신용권";
String strVar2 = "신용권";
String strVar3 = new String("신용권");

    자바는 문자열 리터럴이 동일하다면 동일한 String 객체를 참조하도록 되어 있다.
    그래서 변수 strVar1과 strVar2는 동일한 String 객체의 번지값을 가지고 있다.
    그러나 변수 strVar3은 객체 생성 연산자인 new로 생성된 새로운 String 객체의
    번지값을 가지고 있다.

    이 경우 변수 strVar1과 strVar2의 == 연산은 true를 산출하고 strVar2와 strVar3의
    == 연산은 false를 산출한다. == 연산자는 변수에 저장된 값만 비교하기 때문이다.

strVar1 == strVar2      // true
strVar2 == strVar3      // false

동일한 String 객체이건 다른 String 객체이건 상관없이 String 객체의 문자열만 비교하고
싶다면 == 연산자 대신에 equals() 메소드를 사용해야 한다.

equals() 메소드는 원본 문자열과 매개값으로 주어진 비교 문자열이 동일한지 비교한 후
true 또는 false를 리턴한다.

boolean result = str1.equals(str2);     // str1 = 원본 문자열, str2 = 비교 문자열

strVar1.equals(strVar2);        // true
strVar2.equals(strVar3);        // ture
*/