package Chapter11.RegulardNPatternClass;

import java.util.regex.Pattern;

// 문자열 검증하기
public class PatternExample {
    public static void main(String[] args) {
        String regExp = "(02|010)-\\d{3,4}-\\d{4}";
        String data = "010-123-4567";
        boolean result = Pattern.matches(regExp, data);
        if (result)
            System.out.println("정규식과 일치합니다.");
        else
            System.out.println("정규식과 일치하지 않습니다.");

        regExp = "\\w+@\\w+\\.\\w+(\\.\\w+)?";
        data = "angel@navercom";    // 의도적 .누락: false 도출
        result = Pattern.matches(regExp, data);
        if (result)
            System.out.println("정규식과 일치합니다.");
        else
            System.out.println("정규식과 일치하지 않습니다.");
    }
}

/*
 * boolean result = Pattern.matches("정규식", "검증할 문자열");
 * 
 * java.util.regex.Pattern 클래스의 정적 메소드인 matches() 메소드가 제공한다.
 * 첫번째 매개값은 정규 표현식, 두 번째 매개값은 검증할 문자열이다.
 * 검증 후 결과가 boolean 타입으로 리턴된다.
 */