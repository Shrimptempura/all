package Chapter02;

public class PromotionExample {
    public static void main(String[] args) {
        byte byteValue = 10;
        int intValue = byteValue;       // int <- byte
        System.out.println(intValue);

        char charValue = '가';
        intValue = charValue;           // int <- char
        System.out.println("가의 유니코드=" + intValue);

        intValue = 500;
        long longValue = intValue;      // long <-int
        System.out.println(longValue);

        intValue = 200;
        double doubleValue = intValue;  // double <- int
        System.out.println(doubleValue);
    }
}
/*
자동 타입 변환 : 작은 크기를 가지는 타입이 큰 크기를 가지는 타입에 저장될 때 발생
타입의 구분법 : 메모리 크기
예외법 : char는 2byte, char의 범위는 0~65535이므로 음수가 저장될 수 없다.
음수가 저장될 수 있는 byte 타입을 char 타입으로 자동 변환시킬 수 없다.
*/