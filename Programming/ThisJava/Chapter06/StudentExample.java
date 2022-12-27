package Chapter06;
// 클래스로 부터 객체 생성
public class StudentExample {
    public static void main(String[] args) {
        Student s1 = new Student();
        System.out.println("s1 변수가 Student 객체를 참조합니다." + s1);

        Student s2 = new Student();
        System.out.println("s2 변수가 Student 객체를 참조합니다." + s2);
    }
}

/*
Student 클래스는 하나지만 new 연산자를 사용한 만큼 객체가 메모리에 생성된다.
이러한 객체들은 Student 클래스의 인스턴스들이다.
비록 같은 클래스로부터 생성되었지만 각각이 Student 객체는 자신만의 고유 데이터를
가지면서 메모리에서 활동하게 된다.

s1과 s2가 참조하는 Student 객체는 완전히 독립된 서로 다른 객체이다.

Student와 StudnetExample 클래스의 용도
클래스의 용도
라이브러리(API : Application program Interface)용, 다른 하나는 실행용

Studnet는 라이브러리 클래스, StudentExample은 실행 클래스

하지만 Student에 main() 메소드를 작성해서 라이브러리인 동시에 실행 클래스로 만들 수 있다.

    하지만 대부분 객체 지향 프로그램은 라이브러리와 실행 클래스가 분리되어 있다.
*/