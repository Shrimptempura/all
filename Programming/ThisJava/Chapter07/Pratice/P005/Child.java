package Chapter07.Pratice.P005;

public class Child extends Parent {
    private int studentNo;

    public Child(String name, int studentNo) {
        this.name = name;
        this.studentNo = studentNo;
    }
}
// Child 크래스의 constructor에서 compile erorr occurrence reason?
// 부모 생성자를 올바르게 호출하지 않았다. 7행을 지우고, super(name);