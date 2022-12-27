package Chapter11.ArraysClass;
// 배열 항목 비교
import java.util.Arrays;

public class EqualsEaxmple {
    public static void main(String[] args) {
        int[][] original = {{1, 2}, {3, 4}};

        // 얕은 복사후 비교
        System.out.println("[얕은 복제후 비교]");
        int [][] cloned1 = Arrays.copyOf(original, original.length);
        System.out.println("배열 번지 비교: " + original.equals(cloned1));
        System.out.println("1차 배열 항목값 비교: " + Arrays.equals(original, cloned1));
        System.out.println("중첩 배열 항목값 비교 " + Arrays.deepEquals(original,cloned1));

        // 깊은 복사후 비교
        System.out.println("\n[깊은 복제후 비교]");
        int[][] cloned2 = Arrays.copyOf(original, original.length);
        cloned2[0] = Arrays.copyOf(original[0], original[0].length);
        cloned2[1] = Arrays.copyOf(original[1], original[1].length);
        System.out.println("배열 번지 비교: " + original.equals(cloned2));
        System.out.println("1차 배열 항목값 비교: " + Arrays.equals(original, cloned2));
        System.out.println("중첩 배열 항목값 비교: " + Arrays.deepEquals(original, cloned2));
    }
}

/*
 * <배열 항목 비교>
 * Arrays의 equals()와 deepEquals()는 배열 항목을 비교한다.
 * equals()는 1차 항목의 값만 비교하고, deepEquals()는 1차 항목이 서로 다른 배열을 
 * 참조할 경우 중첩된 배열의 항목까지 비교한다. 윗 예제는 배열 복사 후 항목을 비교한다.
 * 
 * [얕은 복사]
 * original     100(1|2)     200(3|4)         Cloned1
 * : original과 Cloned1이 각각 100과 200을 참조..
 * 
 * 
 * [깊은 복사]
 * original - 100(1|2) - 200(3|4)                 Cloned2 - 300(1|2) - 400(3|4)
 * : 각각 새로운 객체 참조
 */