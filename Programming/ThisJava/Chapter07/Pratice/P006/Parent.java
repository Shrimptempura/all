package Chapter07.Pratice.P006;

public class Parent {
    public String nation;

    public Parent() {
        this("대한민국");       // 자기 실행 : 12행 실행 this
        System.out.println("Parent() call");
    }

    public Parent(String nation) {
        // super();
        this.nation = nation;
        System.out.println("Parent(String nation) call");
    }
}

// Parent 클래스를 상속받아 Child 클래스를 다음과 같이 작성했다.
// ChildExmaple 클래스를 실행했을때 호출되는 각 클래스의 생성자 순서를 생각하며
// 출력 결과를 작성해 보자

// super와 this는 첫째줄에 무조건 존재해야 하므로 같이 사용 불가

/*
1. Parent(String nataion) call
2. Parent() call
3. Child(String name) call
4. Child() call
*/
