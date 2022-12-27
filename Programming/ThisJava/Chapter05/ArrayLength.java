package Chapter05;
// 배열의 length 필드
public class ArrayLength {
    public static void main(String[] args) {
        int[] scores = {83, 90, 87};

        int sum = 0;
        for (int i = 0; i < scores.length; i++)
            sum += scores[i];

        System.out.println("총합 : " + sum);

        double avg = (double) sum / scores.length;
        System.out.println("평균 : " + String.format("%.2f", avg));
    }
}

/*
코드에서 배열의 길이를 얻으려면 다음과 같이 배열 객체의 length 필드를 읽으면 된다.
참고로 필드는 객체 내부의 데이터를 말한다. 배열의 length 필드를 읽기 위해서는
배열 변수에 도트(.) 연산자를 붙이고 length를 적어주면 된다.

    배열 변수.length;

int[] intArray = {10, 20, 30};
int num = intArray.length;      // 배열 intArray가 3개의 값을 가지고 있기 때문에
                                // 변수 num에는 3이 저장된다.

length 필드는 '읽기 전용 필드'이기 때문에 값을 바꿀 수가 없다.
그래서 다음과 같이 작성하면 안된다,
    int Array.length = 10;  // 잘못된 코드

8행, for문 조건식에서 < 연산자를 사용한 이유는 배열의 마지막 인덱스는 배열의 길이 - 1
이기 때문이다. 만약 인덱스 초과시 ArrayIndesOutOfBoundsException이 발생한다.
*/