package Chapter07.ParentConstructor;
// 자식 클래스
public class Student extends People {
    public int studentNo;
    public Student(String name, String ssn, int studentNo) {
        super(name, ssn);       // 부모 생성자 호출
        this.studentNo = studentNo;
    }
}

/*
Student 클래스의 생성자는 name, ssn, studentNo를 매개값으로 받아서 name과 ssn은 다시
부모 생성자를 호출하기 위해 매개값으로 넘겨준다. 6행의 super(name, ssn)은 
People 생성자인 People(String name, String ssn)을 호출한다.

6행을 주석처리하면 "Implicit super constructor People() is undefinde. Must explicitly
invoke another constructor"라는 컴파일 오류가 발생한다.

이것은 부모의 기본 생성자가 없으니 다른 생성자를 명시적으로 호출하라는 것이다.
*/