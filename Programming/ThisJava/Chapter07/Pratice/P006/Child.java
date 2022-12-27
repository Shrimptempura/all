package Chapter07.Pratice.P006;

public class Child extends Parent {
    private String name;

    public Child() {
        this("홍길동");     // this : 자기 실행 즉, 11행 Child 실행
        System.out.println("Child() call");
    }

    public Child(String name) {
        this.name = name;
        System.out.println("Child(String name) call");
    }
}
