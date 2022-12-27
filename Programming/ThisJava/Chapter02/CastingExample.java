package Chapter02;

public class CastingExample {
    public static void main(String[] args) {
        int intValue = 44032;
        char charValue = (char)intValue;
        System.out.println(charValue);

        long longValue = 500;
        intValue = (int)longValue;
        System.out.println(intValue);

        double doubleValue = 3.14;
        intValue = (int)doubleValue;
        System.out.println(intValue);
    }
}
/*
강제 타입 변환
- 큰 크기의 타입은 작은 크기의 타입으로 자동 타입 변환을 할 수 없다.
ex) 4byte인 int타입을 1byte인 byte 타입에 담을 수 없다.
-> int 타입을 4개의 byte로 쪼갠 다음, 끝에 있는 1byte만 byte 타입 변수에 저장하는 것이
가능하다.
-> 10 : 1byte로 표현 가능, long 300 4byte 가능..
-> 실수 타입(float, double)은 정수 타입으로 자동 변환되지 않기 때문에
강제 타입 변환을 사용해야 한다. 이 경우 소수점 이하 부분은 버려지고, 정수 부분만 저장
*/
