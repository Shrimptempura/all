package Chapter11.ObjectSClass.Compare;
// 세 개의 학생 객체를 Studentcomparator로 비교해서 결과를 리턴
import java.util.Comparator;
import java.util.Objects;

// 비교자 사용
public class CompareExample {
    public static void main(String[] args) {
        Student s1 = new Student(1);
        Student s2 = new Student(1);
        Student s3 = new Student(2);

        int result = Objects.compare(s1, s2, new StudentComparator());
        System.out.println(result);
        result = Objects.compare(s1, s3, new StudentComparator());
        System.out.println(result);
    }

    static class Student {
        int sno;
        Student(int sno) {
            this.sno = sno;
        }
    }

    static class StudentComparator implements Comparator<Student> {
        @Override
        public int compare(Student o1, Student o2) {
            /*
             * if (o1.sno < o2.sno)
             * return -1;
             * else if (o1.sno == o2.sno)
             * return 0;
             * else
             * return 1;
             */
            return Integer.compare(o1.sno, o2.sno);
        }
    }
}
