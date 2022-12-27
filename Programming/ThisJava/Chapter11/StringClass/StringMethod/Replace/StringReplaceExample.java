package Chapter11.StringClass.StringMethod.Replace;
// 문자열 대치하기
public class StringReplaceExample {
    public static void main(String[] args) {
        String oldStr = "자바는 객체지향언어 입니다. 자바는 풍부한 API를 지원합니다.";
        String newStr = oldStr.replace("자바", "JAVA");
        System.out.println(oldStr);
        System.out.println(newStr);
    }
}

/*
 * 문자열 대치(replace())
 * replace() 메소드는 첫 번째 매개값인 문자열을 찾아 두 번째 매개값인
 * 문자열로 대치한 새로운 문자열을 생성하고 리턴한다.
 * 
 * String oldStr = "자바 프로그래밍";
 * String newStr = oldStr.replace("자바", "JAVA");
 * 
 * String 객체의 문자열은 변경이 불가한 특성을 갖기 때문에 replace() 메소드가
 * 리턴하는 문자열은 원래 문자열의 수정본이 아니라 완전히 새로운 문자열이다.
 * 
 * 따라서 newStr 변수는 새로 생성된 "JAVA 프로그래밍" 문자열을 참조한다.
 */