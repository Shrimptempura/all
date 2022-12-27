package Chapter11.ObjectSClass.toString;

import java.util.Objects;

// 객체 문자 정보
public class ToStringExample {
    public static void main(String[] args) {
        String str1 = "홍길동";
        String str2 = null;

        System.out.println(Objects.toString(str1));
        System.out.println(Objects.toString(str2));
        System.out.println(Objects.toString(str2, "이름이 없습니다."));
    }
}

/*
<객체 문자 정보(toString())>
Objects.toString()은 객체의 문자 정보를 리턴하는데, 다음 두 가지로 오버로딩되있다.

리턴 타입       메소드(매개 변수)               설명
String          toString(Object o)              not null -> o.toString()
                                                null -> "null"
String          toString(Object o,              not null -> o.toString()
                    String nullDefault)         null -> nullDefault

첫 번째 매개값이 not null이면 toString()으로 얻은 값을 리턴하고,
null이면 "null" 또는 두 번째 매개값인 nullDefault를 리턴한다.
*/