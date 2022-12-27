package Chapter11.StringClass.StringMethod.Length;
// 문자열의 문자 수 얻기
public class StringLengthExample {
    public static void main(String[] args) {
        
        String ssn = "7306241230123";
        int length = ssn.length();
        if (length == 13)
            System.out.println("주민번호 자리수가 맞습니다.");
        else
            System.out.println("주민번호 자리수가 틀립니다.");
    }
}

/*
 * 문자열 길이(length())
 * length() 메소드는 문자열의 길이(문자의 수)를 리턴한다.
 * 
 * String subject = "자바 프로그래밍";
 * int length = subject.length();
 * 
 * lenth 변수에는 8이 저장된다. subject 객체의 문자열의 길이는 공백 포함
 */