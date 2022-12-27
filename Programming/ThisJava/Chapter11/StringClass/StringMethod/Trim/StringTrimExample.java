package Chapter11.StringClass.StringMethod.Trim;
// 앞뒤 공백 제거
public class StringTrimExample {
    public static void main(String[] args) {
        String tel1 = "  02";
        String tel2 = "123    ";
        String tel3 = "    1234    ";

        String tel = tel1.trim() + tel2.trim() + tel3.trim();
        System.out.println(tel);
    }
}

/*
 * 문자열 앞뒤 공백 잘라내기(trim())
 * trim() 메소드는 문자열의 앞뒤 공백을 제거한 새로운 문자열을 생성하고 리턴한다.
 * 다음 코드를 보면 newStr 변수는 새로 생성된 "자바 프로그래밍" 문자열을 참조한다.
 * trim() 메소드는 앞뒤의 공백만 제거할 뿐 중간의 공백은 제거하지 않는다.
 * 
 *      String oldStr = "    자바 프로그래밍    ";
 *      String newStr = oldStr.trim();
 * 
 * trim() 메소드를 사용한다고 해서 원래 문자열의 공백이 제거되는 것은 아니다.
 * 다음의 oldStr.trim()은 oldStr의 공백을 제거하는 것은 아니다.
 * 
 * 스택(stack)영역          힙(heap)영역
 * oldStr    -->            "   자바 프로그래밍  "
 * newStr    -->            "자바 프로그래밍"
 */