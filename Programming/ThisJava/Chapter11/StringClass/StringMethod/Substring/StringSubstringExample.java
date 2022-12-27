package Chapter11.StringClass.StringMethod.Substring;
// 문자열 추출하기
public class StringSubstringExample {
    public static void main(String[] args) {
        String ssn = "880815-1234567";

        String firstNum = ssn.substring(0, 6);
        System.out.println(firstNum);

        String secondNum = ssn.substring(7);
        System.out.println(secondNum);
    }
}

/*
 * 문자열 잘라내기(substring())
 * substring() 메소드는 주어진 인덱스에서 문자열을 추출한다.
 * substring() 메소드는 매개값의 수에 따라 두 가지 형태로 사용된다.
 * 
 * substring(int beginIndex, int endIndex)는 주어진 시작과 끝 인덱스 사이의
 * 문자열을 추출하고, substring(int beginIndex)는 주어진 인덱스부터
 * 끝까지 문자열을 추출한다.
 * 
 * String ssn = "880815-1234567";
 * String firstNum = ssn.substring(0, 6);
 * String secondNum = ssn.substring(7);
 * 
 * ssn.substring(0, 6)은 인덱스 0(포함) ~ 6(제외) 사이의 문자열을 추출하는 것이고,
 * substring(7)은 인덱스 7부터의 문자열을 추출한다.
 */