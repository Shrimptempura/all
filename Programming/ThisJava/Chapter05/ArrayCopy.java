package Chapter05;
// System.arraycopy()로 배열 복사
public class ArrayCopy {
    public static void main(String[] args) {
        String[] oldStrArray = {"java", "array", "copy"};
        String[] newStrArray = new String[5];

        System.arraycopy(oldStrArray, 0, newStrArray, 0, oldStrArray.length);

        for (int i = 0; i < newStrArray.length; i++)
            System.out.print(newStrArray[i] + ", ");
    }
}

/*
System.arraycopy() 호출하는 법          // src = source

    System.arraycopy(Object src, int srcPos, Object dest, int desPos, int length);
    // 5개 받음

src 매개값 = 원본 배열, srcPos = 원본 배열에서 복사할 항목의 시작 인덱스
dest 매개값 = 새 배열, destPos = 새 배열에서 붙여넣을 시작 인덱스, length = 복사할 개수

ex)
원본 배열 arr1, 새 배열 arr2, arr1의 모든 항목을 arr2에 복사하려면..
    System.arraycopy(arr1, 0, arr2, 0, arr1.length);

복사되지 않은 항목은 String[] 배열의 기본 초기값 null이 그대로 유지된다.

참조 타입 배열일 경우, 배열 복사가 되면 복사되는 값이 객체의 번지이므로 새 배열의
항목은 이전 배열의 항목이 참조하는 객체와 동일하다.
    이것은 얕은 복사(shallow copy)라고 한다.
    반대로 깊은 복사(deep copy)는 참조하는 객체도 별도로 생성하는 것을 말한다.
*/