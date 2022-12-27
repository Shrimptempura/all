package Chapter11.ArraysClass;

import java.util.Arrays;

// 배열 복사
public class ArrayCopyExample {
    public static void main(String[] args) {
        char[] arr1 = {'J', 'A', 'V', 'A'};

        // 방법1
        char[] arr2 = Arrays.copyOf(arr1, arr1.length);
            // ary1 전체를 ary2로 복사
        System.out.println(Arrays.toString(arr2));
        // System.out.println(arr2);        : JAVA

        // 방법2
        char[] arr3 = Arrays.copyOfRange(arr1, 1, 3);
        // arr1[1] ~ arr1[2]를 arr3[0] ~ arr3[1]로 복사
        System.out.println(Arrays.toString(arr3));

        // 방법3
        char[] arr4 = new char[arr1.length];
        System.arraycopy(arr1, 0, arr4, 0, arr1.length);
        for (int i = 0; i < arr4.length; i++)
            System.out.println("arr4[" + i + "]=" + arr4[i]);
    }
}

/*
 * <배열 복사>
 * 배열 복사를 위해 사용할 수 있는 메소드는 copyOf(원본배열, 복사할길이),
 * copyOfRange(원본배열, 시작인덱스, 끝인덱스)이다. copyOf() 메소드는 원본 배열의
 * 0번 인덱스에서 복사할 길이만큼 타겟 배열을 리턴하는데, 복사할 길이는 원본 배열의
 * 길이보다 커도 되며, 타겟 배열의 길이가 된다.
 * 
 * 다음은 arr1[] 배열의 전체 항목을 복사해서 arr2[] 배열을 생성한다.
 * 
 * char[] arr1 = {'J', 'A', 'V', 'A'};
 * char[] arr2 = Arrays.copyOf(arr1, arr1.length);
 * 
 * 
 * copyOfRange(원본배열, 시작인덱스, 끝인덱스)는 원본 배열의 시작 인덱스에서
 * 끝 인덱스까지 복사할 배열을 리턴한다. 시작 인덱스는 포함되지만, 끝 인덱스는 
 * 포함되지 않는다.
 * 
 * 다음은 arr1[] 배열 항목 중 1번, 2번 인덱스 항목을 arr2[] 배열의 0번, 1번 인덱스
 * 항목으로 복사한다.
 * 
 * char[] arr1 = {'J', 'A', 'V', 'A'};
 * char[] arr2 = Arrays.copyOfRange(arr1, 1, 3);
 * 
 * 
 * 
 * 
 * 
 * 단순히 배열을 복사할 목적이라면 Arrays 클래스를 사용하지 않고 System.arraycopy()
 * 메소드를 이용할 수 있다.
 * 
 * System.arraycopy() 메소드는 다음과 같이 5개의 매개값이 필요하다.
 * 
 * System.arraycopy(Object src, int srcPos, Object dest, int destPos, int length)
 *                  원본배열, 원본시작인덱스, 타겟배열, 타겟시작인덱스, 복사개수
 * 
 * 
 * 원본 시작 인덱스는 원본 배열에서 복사할 항목의 시작위치이고, 타겟 시작 인덱스는
 * 타켓 배열에서의 복사 시작 위치를 말한다.
 * 
 * 복사 개수는 원본 시작 인덱스에서부터 몇 개의 항목을 복사할 것인지 말한다.
 * (ary1번에서, ary1번 시작 인덱스를, ary2번에서, ary2번 어디위치에서, 몇개까지(
 *                                                          ary1, ary2 갯수 동일)
 */