package Chapter11.ObjectSClass.EqualsNdeepEquals;

import java.util.Arrays;
import java.util.Objects;

// 객체 동등 비교
public class EqualsAndDeepEqualsExample {
    public static void main(String[] args) {
        Integer o1 = 1000;
        Integer o2 = 1000;
        System.out.println(Objects.equals(o1, o2));
        System.out.println(Objects.equals(o1, null));
        System.out.println(Objects.equals(null, o2));
        System.out.println(Objects.equals(null, null));
        System.out.println(Objects.deepEquals(o1, o2) + "\n");

        Integer[] ary1 = {1, 2};
        Integer[] ary2 = {1, 2};
        System.out.println(Objects.equals(ary1, ary2));
        System.out.println(Objects.deepEquals(ary1, ary2));
        System.out.println(Arrays.deepEquals(ary1, ary2));
        System.out.println(Objects.deepEquals(null, ary2));
        System.out.println(Objects.deepEquals(ary1, null));
        System.out.println(Objects.deepEquals(null, null));
    }
}
