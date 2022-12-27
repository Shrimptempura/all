package Chapter10.ExecutionException.ArrayIndexOutOfBoundsException;
// ArrayIndexOutOfBoundsException
public class ArrayIndexOutOfBoundExceoptionExample {
    public static void main(String[] args) {
        String data1 = args[0];
        String data2 = args[1];

        System.out.println("args[0]: " + data1);
        System.out.println("args[1]: " + data2);
    }
}

/*
배열에서 인덱스 범위를 초과하여 사용할 경우 실행 예외인
java.lang.ArrayIndexOutOfBoundsException이 발생한다.

예를 들어 길이가 3인 int[] arr = new int[3] 배열을 선언했다면,
배열 항목을 지정하기 위해 arr[0] ~ arr[2]를 사용할 수 있다.

하지만 arr[3]을 사용하면 인덱스 범위를 초과했기 때문에
ArrayIndewOutOfBoundsException이 발생한다.

5행에서 ArrayIndewOutOfBoundsException이 발생한다.
그 이유는 두 개의 실행 매개값을 주지 않았기 때문에 args[0], args[1]과 같이
인덱스를 사용할 수 없다.
*/