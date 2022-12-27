package Chapter11.WrapperClass.StringToPrimitiveValue;
// 문자열을 기본 타입 값으로 변환
public class StringToPrimitiveValueExample {
    public static void main(String[] args) {
        int value1 = Integer.parseInt("10");
        double value2 = Double.parseDouble("3.14");
        boolean value3 = Boolean.parseBoolean("true");

        System.out.println("value1: " + value1);
        System.out.println("value2: " + value2);
        System.out.println("value3: " + value3);
    }
}

/*
 * <문자열을 기본 타입 값으로 변환>
 * 포장 클래스의 주요 용도는 기본 타입의 값을 박싱해서 포장 객체로 만드는 것이지만,
 * 문자열을 기본 타입 값으로 변환할 때에도 많이 사용된다. 대부분의 포장 클래스에는
 * "parse + 기본타입"명으로 되어 있는 정적(static) 메소드가 있다.
 * 
 * 이 메소드는 문자열을 매개값으로 받아 기본 타입 갑승로 변환한다.
 * 
 * 
 * 기본 타입의 값을 이용
 * byte     num = Byte.parseByte("10");
 * short    num = Short.parseShort("100");
 * int      num = Integer.parseInt("1000");
 * long     num = Long.parseLong("10000");
 * float    num = Float.parseFloat("2.5F");
 * double   num = Double.parseDouble("3.5");
 * boolean  bool = Boolean.parseBoolean("true");
 */