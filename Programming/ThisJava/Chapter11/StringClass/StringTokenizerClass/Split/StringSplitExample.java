package Chapter11.StringClass.StringTokenizerClass.Split;
// 문자열 분리
public class StringSplitExample {
    public static void main(String[] args) {
        String text = "홍길동&이수홍=박연수,김자바-최명호";

        String[] names = text.split("&|,|=|-");
        // ,역할을 |가 해주는것 --> 7행은 & , =을 구분자 delimiter로 주었다.

        for (String name : names)
            System.out.println(name);
    }
}

/*
 * split() 메소드
 * String 클래스의 split() 메소드는 다음과 같이 호출된다.
 * 
 *      String[]  result = "문자열".split("정규표현식");
 *  정규 표현식을 구분자(delimiter)로 해서 문자열을 분리한 후,
 *  배열에 저장하고 리턴한다.
 * 
 * 예를 들어 다음과 같은 문자열이 있다.
 * "홍길동&이수홍,박연수,김자바-최명호";
 * &, 쉼표(,), -를 제외하고 사람 이름만 따로 뽑아내고 싶은 경우
 * 
 * &, 쉼표(,), -를  파이프(|) 기호로 연결한 정규 표현식을 매개값으로 제공하면
 * split() 메소드는 이 기호들을 구분자로 해서 부분 문자열을 추출한다.
 * 
 *      String[] names = text.split("&|, |-");
 */