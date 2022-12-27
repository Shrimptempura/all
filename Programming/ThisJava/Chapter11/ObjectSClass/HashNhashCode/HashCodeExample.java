package Chapter11.ObjectSClass.HashNhashCode;

import java.util.Objects;

// 해시코드 생성
public class HashCodeExample {
    public static void main(String[] args) {
        Student s1 = new Student(1, "홍길동");
        Student s2 = new Student(1, "홍길동");
        System.out.println(s1.hashCode());
        System.out.println(Objects.hashCode(s2));
    }

    static class Student {
        int sno;
        String name;

        Student(int sno, String name) {
            this.sno = sno;
            this.name = name;
        }

        @Override
        public int hashCode() {
            return Objects.hash(sno, name);
        }

        // 책에 없고 인강내용 추가
        @Override 
        public boolean equals(Object obj) {
            if (obj instanceof Student) {
                Student s = (Student) obj;
                if (s.sno == this.sno) {
                    if (s.name.equals(this.name)) {
                        return true;
                    }
                }
            }
            return false;
        }
    }
}

/*
윗 예제는 Student 객체의 해시코드를 생성하기 위해 Student의 필드인
sno(학생 번호)와 name(학생 이름)을 매개값으로 해서 Objects.hash()
메소드를 호출했다. 학생 번호와 이름이 동일하다면 같은 
해시코드를 얻을 수 있다는 것을 보여준다.

Objects.hash(Object... values) 메소드는 매개값으로 주어진 값들을 이용해서
해시 코드를 생성하는 역할을 하는데, 주어진 매개값들로 배열을 생성하고
Arrays.hashCode(Object[])를 호출해서 해시코드를 얻고 이 값을 리턴한다.

이 메소드는 클래스가 hashCode()를 재정의할 때 리턴 값을 생성하기 위해
사용하면 좋다. 클래스가 여러 가지 필드를 가지고 있을 때 이 필드들로부터
해시코드를 생성하게 되면 동일한 필드값을 가지는 객체는 동일한 해시코드를
가질 수 있다.

    @Override
    public int hashCode() {
        return Objects.hash(field1, field2, field3);
    }

Objects.hashCode(Object o)는 매개값으로 주어진 객체의 해시코드를 리턴하기 때문에
o.hashCode()의 리턴값과 동일하다. 차이점이 매개값이 null이면 0을 리턴한다.
*/