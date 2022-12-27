package Chapter11.ObjectClass.HashCode;
// hashCode() 메소드 재정의 추가, Equals폴더의 Member 추가
public class Member {
    public String id;

    public Member(String id) {
        this.id = id;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Member) {
            Member member = (Member) obj;
            if (id.equals(member.id)) {
                return true;
            }
        }
        return false;
    }

    // id가 동일한 문자열인 경우 같은 해시 코드를 리턴
    @Override
    public int hashCode() {
        return id.hashCode();
    }
}

/*
저장할 때의 new Key(1)과 읽을 때의 new Key(1)은 사실 서로 다른 객체이지만
HashMap은 hashCode()의 리턴값이 같고, equals() 리턴값이 true가 나오기 때문에
동등 객체로 평가한다.

즉, 같은 식별키로 인식한다는 뜻이다. 결론적으로 말해서 객체의 동등 비교를 위해서는
Object의 equals() 메소드만 재정의하지 말고 hashCode() 메소드도 재정의해서
논리적 동등 객체일 경우 동일한 해시코드가 리턴하도록 해야 한다.

윗 예제 Member.java는 이전 예제에서 사용한 Member 클래스를 보완하는 측면에서
hashCode() 메소드를 재정의한 것이다. id 필드값이 같을 경우 같은 해시코드를
리턴하도록 하기 위해 String의 hashCode() 메소드의 리턴값을 활용했다.

String의 hashCode()는 같은 문자열일 경우 동일한 해시코드를 리턴한다.
*/