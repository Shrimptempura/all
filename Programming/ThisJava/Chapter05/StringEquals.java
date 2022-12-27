package Chapter05;
// 문자열 비교
public class StringEquals {
    public static void main(String[] args) {
        String strVar1 = "신민철";
        String strVar2 = "신민철";

        if (strVar1 == strVar2) 
            System.out.println("strVar1과 strVar2는 참조가 같음");
        else
            System.out.println("strVar1과 strVar2는 참조가 다름");
        
        if (strVar1.equals(strVar2))
            System.out.println("strVar1과 strVar2는 문자열이 같음");
        
        String strVar3 = new String("신민철");
        String strVar4 = new String("신민철");

        if (strVar3 == strVar4)
            System.out.println("strVar3과 strVar4는 참조가 같음");
        else
            System.out.println("strVar3과 strVar4는 참조가 다름");
        
        if (strVar3.equals(strVar4))
            System.out.println("strVar3과 strVar4는 문자열이 같음");
    }
}

/*
ex)
String name;
name = "신용권";
String hobby = "자바";

사실 문자열을 String 변수에 저장한다는 말은 틀린 표현이다.
문자열이 직접 변수에 저장되는 것이 아니라, 문자열은 String 객체로 생성되고
변수는 String 객체를 참조한다. 하지만 일반적으로 String 변수에 저장한다는 표현을 사용한다.

    자바는 문자열 리터럴이 동일하다면 String 객체를 공유하도록 되어 있다.
    다음과 같이 name1과 name2 변수가 동일한 문자열인 "신용권"을 참조할 경우
    name1과 name2는 동일한 String 객체를 참조하게 된다.

    String name1 = "신용권";
    String name2 = "신용권";

    <스택 영역>     <힙 영역>
    name1 ->  
                    신용권
    name2 ->


new 연산자를 사용해서 직접 String 객체를 생성시킬 수 있다.
    new 연산자는 힙 영역에 새로운 객체를 만들 때 사용하는 객체 생성 연산자이다.

    String name1 = new String("신용권");
    String name2 = new String("신용권");
        이 경우 name1과 name2는 서로 다른 String 객체를 참조한다.

동일한 문자열 리터럴로 String 객체를 생성했을 경우 == 연산 결과 true
new 연산자로 String 객체를 생성했을 경우 ==  연산 결과 false

    ** == 연산자는 변수에 저장된 객체 번지가 동일한지를 검사하기 때문이다. **

문자열만 비교할 때에는 String 객체의 equals() 메소드를 사용해야 한다.
equals() 메소드는 원본 문자열과 매개값으로 주어진 비교 문자열이 동일한지 
비교한 후 true 또는 false를 리턴한다.

    boolean result = str1.equals(str2);
                원본문자열     비교 문자열

String 변수는 참조 타입이므로 초기값으로 null을 대입할 수 있다.
null은 String 변수가 참조하는 String 객체가 없다는 뜻이다.
    String hobby = null;

다음 코드처럼 hobby 변수가 String 객체를 참조하였으나, null을 대입함으로써
더 이상 String 객체를 참조하지 않도록 할 수도 있다.

    String hobby = "여행";
    hobby = null;

참조를 잃은 String 객체는 JVM이 참조되지 않은 객체를 쓰레기 객체로 취급하고
쓰레기 수집기(Garbage Collector)를 구동시켜 메모리에서 자동 제거한다.
*/