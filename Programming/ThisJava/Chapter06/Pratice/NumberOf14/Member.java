package Chapter06.Pratice.NumberOf14;

public class Member {
    String name;
    String id;
    String password;
    int age;

    Member(String name, String id) {
        this.name = name;
        this.id = id;
    }
}

// Member 객체를 생성할 때 name 필드와 id 필드를 외부에서 받은 값으로 초기화하려면
// 생성자를 어떻게 선언해야할까 ex) Member user1 = new Member("홍길동", "hong");