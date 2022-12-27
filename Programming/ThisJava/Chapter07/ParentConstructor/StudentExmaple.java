package Chapter07.ParentConstructor;

public class StudentExmaple {
    public static void main(String[] args) {
        Student student = new Student("홍길동", "123456-1234567", 1);
        System.out.println("name : " + student.name);   // 부모에서 물려받은 필드 출력
        System.out.println("ssn : " + student.ssn);     // ;;
        System.out.println("studnetNo : " + student.studentNo);
    }
}
