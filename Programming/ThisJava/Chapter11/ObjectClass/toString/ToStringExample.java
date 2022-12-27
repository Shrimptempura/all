package Chapter11.ObjectClass.toString;

import java.util.Date;      // Date;
// 객체의 문자 정보(toString() 메소드), Object 클래스와 Date 클래스의
// toString() 메소드의 리턴값 출력해본 결과
public class ToStringExample {
    public static void main(String[] args) {
        Object obj1 = new Object();
        Date obj2 = new Date();
        System.out.println(obj1.toString());
        System.out.println(obj2.toString());
    }
}

/*
Object 클래스의 toString() 메소드는 객체의 문자 정보를 리턴한다.
객체의 문자 정보란 객체를 문자열로 표현한 값을 말한다.
기본적으로 Object 클래스의 toString() 메소드는 "클래스명@16진수해시코드"로
구성된 문자 정보를 리턴한다.

    Object obj = new Object();
    System.out.println(obj.toString());

        -> java.lang.Object@53bd815b

Object의 toString() 메소드의 리턴값은 자바 애플리케이션에는 별 값어치가 없는
정보이므로 Object 하위 클래스는 toString() 메소드를 재정의(오버라이딩)하여
간결하고 유익한 정보를 리턴하도록 되어 있다.

예를 들어 java.util 패키지의 Date 클래스는 toString() 메소드를 재정의하여
현재 시스템의 날짜와 시간 정보를 리턴한다.

그리고 String 클래스는 toString() 메소드를 재정의해서 저장하고 있는 문자열을
리턴한다. 
*/