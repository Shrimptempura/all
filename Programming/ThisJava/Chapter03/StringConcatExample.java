package Chapter03;
// 문자열 연결 연산자(+)
public class StringConcatExample {
    public static void main(String[] args) {
        String str1 = "JDK" + 6.0;
        String str2 = str1 + " 특징";
        System.out.println(str2);

        String str3 = "JDK" + 3 + 3.0;
        String str4 = 3 + 3.0 + "JDK";
        System.out.println(str3);
        System.out.println(str4);
    }
}

/*
문자열 연결 연산자인 +는 문자열을 서로 결합하는 연산자이다.
피연산자 중 한쪽이 문자열이면 +연산자는 문자열 연결 연산자로 사용되고
숫자가 있으면 숫자값으로 계산된다.
*/
