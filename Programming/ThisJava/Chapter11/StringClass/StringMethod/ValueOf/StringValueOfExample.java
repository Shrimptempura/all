package Chapter11.StringClass.StringMethod.ValueOf;
// 기본 타입 값을 문자열로 변환
public class StringValueOfExample {
    public static void main(String[] args) {
        String str1 = String.valueOf(10);
        String str2 = String.valueOf(10.5);
        String str3 = String.valueOf(true);

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
    }
}

/*
 * 문자열 변환(valueOf())
 * valueOf() 메소드는 기본 타입의 값을 문자열로 변환하는 기능을 가지고 있다.
 * String 클래스에는 매개 변수의 타입별로 valueOf() 메소드가 다음과 같이 오버라이딩되어있다.
 * 
 *       static String valueOf(boolean b)
 *       static String valueOf(char c)
 *       static String valueOf(int i)
 *       static String valueOf(long l)
 *       static String valueOf(double d)
 *       static String valueOf(float f)
 */