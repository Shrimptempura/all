package Chapter05;
// for문으로 배열 복사
public class ArrayCopyByFor {
    public static void main(String[] args) {
        int[] oldIntArray = {1, 2, 3};
        int[] newIntArray = new int[5];

        for (int i = 0; i < oldIntArray.length; i++)
        // 0부터 oldIntArray.length(3) 미만, 즉 0, 1, 2
            newIntArray[i] = oldIntArray[i];
            // 복사가 012 완료

        for (int i = 0; i < newIntArray.length; i++)
            System.out.print(newIntArray[i] + ", ");
            // 5까지 출력, 복사 미완료 -> 0
    }
}

/*
oldIntArray        복사         newIntArray
|1|2|3|         -------->        |1|2|3|0|0|

복사되지 않은 항목은 int[] 배열의 기본 초기값인 0이 그대로 유지된다.
*/