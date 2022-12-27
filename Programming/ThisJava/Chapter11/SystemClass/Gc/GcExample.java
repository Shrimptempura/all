package Chapter11.SystemClass.Gc;
// gc 메소드
public class GcExample {
    public static void main(String[] args) {
        Employee emp;

        emp = new Employee(1);      // 쓰레기가 됨
        emp = null;
        emp = new Employee(2);      // 쓰레기가 됨
        emp = new Employee(3);

        System.out.print("emp가 최종적으로 참조하는 사원번호: ");
        System.out.println(emp.eno);
        System.gc();
    }
}

class Employee {
    public int eno;

    public Employee(int eno) {
        this.eno = eno;
        System.out.println("Employee(" + eno + ") 가 메모리에 생성됨");
    }
    
    // 소멸자
    public void finalize() {
        System.out.println("Employee(" + eno + ") 이 메모리에서 제거됨");
    }
}

/*
윗 예제는 쓰레기 수집기가 객체를 삭제하는지 확인하기 위해 11.3.5 객체 소멸자
(finalize())에서 학습한 소멸자를 이용하였다.

쓰레기 수집기는 객체를 삭제하기 전에 마지막으로 객체의 소멸자를 실행한다.
*/