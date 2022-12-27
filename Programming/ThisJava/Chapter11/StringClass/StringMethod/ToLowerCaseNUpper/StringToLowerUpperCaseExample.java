package Chapter11.StringClass.StringMethod.ToLowerCaseNUpper;
// 전부 소문자 또는 대문자로 변경
public class StringToLowerUpperCaseExample {
    public static void main(String[] args) {
        String str1 = "Java Programming";
        String str2 = "JAVA Programming";

        System.out.println(str1.equals(str2));

        String lowerStr1 = str1.toLowerCase();
        String lowerStr2 = str2.toLowerCase();
        System.out.println(lowerStr1.equals(lowerStr2));

        System.out.println(str1.equalsIgnoreCase(str2));
    }
}

/*
 * 알파벳 소,대문자 변경(toLowerCase(), toUpperCase())
 * toLowerCase() 메소드는 문자열을 모두 소문자로 바꾼 새로운 문자열을 생성한 후 리턴한다.
 * 반대로 toUpperCase() 메소드는 문자열을 모두 대문자로 바꾼 새로운 문자열을 
 * 생성한 후 리턴한다.
 * 
 *      String original = "Java Programming";
 *      String lowerCase = origianl.toLowerCase();
 *      String upperCase = origianl.toUpperCase();
 *  
 * toLowerCase()와 toUpperCase() 메소드는 영어로 된 문자열을 대소문자 관계없이
 * 비교할 때 주로 이용된다.
 * 
 * equals() 메소드를 사용하려면 사전에 toLowerCase()와 toUpperCase()로 대소문자를
 * 맞추어야 하지만, equalsIgnoreCase() 메소드를 사용하면 이작업이 생략된다.
 */