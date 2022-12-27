package Chapter11.ObjectSClass.Null;

import java.util.Objects;

// 널(null) 여부 조사
public class NullExample {
    public static void main(String[] args) {
        String str1 = "홍길동";
        String str2 = null;

        System.out.println(Objects.requireNonNull(str1));

        try {
            String name = Objects.requireNonNull(str2);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        try {
            String name = Objects.requireNonNull(str2, "이름이 없습니다.");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        try {
            String name = Objects.requireNonNull(str2, ()->"이름이 없다닌깐요");
        } catch (Exception e) {                         // 람다식
            System.out.println(e.getMessage());
        }
    }
}

// 람다식은 인터페이스의 구현 객체이므로 Supplier 구현 객체로 람다식을 대입했다.