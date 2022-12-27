package Chapter05;
// 향상된 for문
public class AdvancedFor {
    public static void main(String[] args) {
        int[] scores = {95, 71, 84, 93, 87};

        int sum = 0;
        for (int score : scores)
            sum += score;
        System.out.println("점수 총합 = " + sum);

        double avg = (double) sum / scores.length;
        System.out.println("점수 평균 = " + avg);
    }
}
/*
자바 5부터 배열 및 컬렉션 객체를 좀 더 쉽게 처리할 목적으로 향상된 for문을 제공한다.
향상된 for문은 반복 실행을 하기 위해 카운터 변수와 증감식을 사용하지 않는다. 
배열 및 컬렉션 항목의 개수만큼 반복하고, 자동적으로 for문을 빠져나간다.


for (2#타입변수 : 1#배열) {
    3#실행문;
}

1) 가져올 항목이 없을 경우 : 바로 for문 종료
1) 가져올 항목이 존재하는 경우 : 2# 타입변수 -> 3# 실행문 -> 1# 배열

for문의 괄호()에는 배열에서 꺼낸 항목을 저장할 변수 선언과 콜론(:) 그리고 배열을
나란히 작성한다.
for문이 처음 실행될 때 1# 배열에서 가져올 첫 번째 값이 존재하는지 평가한다.
가져올 값이 존재하면 해당 값을 2# 변수에 저장한다. 그리고 3# 실행문을 실행한다.
만약 다음 항목이 존재하면 2-> 3-> 1로 다시 진행하고, 가져올 항목이 없으면 for문이 
종료된다.

따라서 for문의 반복 횟수는 배열의 항목 수가 된다.
*/