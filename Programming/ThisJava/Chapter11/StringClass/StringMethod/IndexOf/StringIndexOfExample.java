package Chapter11.StringClass.StringMethod.IndexOf;
// 문자열 포함 여부 조사
public class StringIndexOfExample {
    public static void main(String[] args) {
        String subject = "자바 프로그래밍";

        int location = subject.indexOf("프로그래밍");
        System.out.println(location);

        if (subject.indexOf("자바") != -1)
            System.out.println("자바와 관련된 책이군요");
        else
            System.out.println("자바와 관련없는 책이군요");
    }
}

/*
문자열 찾기(indexOf())
indexOf() 메소드는 매개값으로 주어진 문자열이 시작되는 인덱스를 리턴한다.
만약 주어진 문자열이 포함되어 있지 않으면 -1을 리턴한다. 

    String subject = "자바 프로그래밍";
    int index = subject.indexOf("프로그래밍");

index 변수에는 3이 저장되는데, "자바 프로그래밍"에서 "프로그래밍" 문자열의
인덱스 위치가 3이기 때문이다.

자바   프로그래밍
0 1  2 3 4 5 6  7

indexOf() 메소드는 if문의 조건식에서 특정 문자열이 포함되어 있는지 여부에 따라 
실행코드를 달리 할때 자주 사용된다. -1값을 리턴하면 특정 문자열이 포함되어 있지
않다는 뜻이다.

if (문자열.indexOf("찾는문자열") != -1) {
    // 포함되어 있는 경우
}
else {
    // 포함되어 있지 않는 경우
}
*/