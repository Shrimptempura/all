package Chapter11.ObjectClass.Clone.ThinClone;
// 복제할 수 있는 클래스 선언
public class Member implements Cloneable {
    public String id;
    public String name;
    public String password;
    public int age;
    public boolean adult;

    public Member(String id, String name, String password, int age, boolean adult) {
        this.id = id;
        this.name = name;
        this.password = password;
        this.age = age;
        this.adult = adult;
    }

    public Member getMember() {
        Member cloned = null;
        try {
        // clone() 메소드의 리턴 타입은 Object이므로 Member 타입으로 캐스팅해야 함
            cloned = (Member) clone();
        } catch (CloneNotSupportedException e) { }
        return cloned;
    }
}

/*
Member 클래스가 Clanedable 인터페이스를 구현했기 때문에 getMember() 메소드에서
clone() 메소드로 자신을 복제한 후, 복제한 객체를 외부로 리턴할 수 있다.
*/