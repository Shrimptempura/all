package Chapter11.StringClass.StringMethod.CharAt;
// 주민등로번호에서 남자와 여자를 구분하는 방법
public class StringCharAtExample {
    public static void main(String[] args) {
        String ssn = "010624-1230123";
        char sex = ssn.charAt(7);
        switch (sex) {
            case '1':
            case '3':
                System.out.println("남자입니다.");
                break;
            case '2':
            case '4':
                System.out.println("여자입니다.");
                break;
        }
    }
}

/* 
 * 문자 추출(charAt())
 * charAt() 메소드는 매개값으로 주어진 인덱스의 문자를 리턴한다.
 * 여기서 0에서부터 "문자열길이-1"까지의 번호를 말한다.
 * 
 * String subject = "자바 프로그래밍";
 * char charValue = subject.charAt(3);
 * 
 * "자바 프로그래밍" 문자열은 다음과 같다.
 * 
 * 자바  프로그래밍
 * 0 1 2 3 4 5 6 7
 * charAt(3)은 3인덱스 위치에 있는 문자를 말한다. 즉 '프'문자가 해당된다.
 * 윗 예제는 주민번호에서 인덱스 7번 문자를 읽어 남자와 여자를 구별한다.
 */