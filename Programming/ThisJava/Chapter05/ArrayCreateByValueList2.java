package Chapter05;
// 값의 리스트로 배열 생성
public class ArrayCreateByValueList2 {
    public static void main(String[] args) {
        int[] scores;
        scores = new int[] {83, 90, 87};
        int sum1 = 0;
        for (int i = 0; i < 3; i++)
            sum1 += scores[i];

        System.out.println("총합 : " + sum1);

        int sum2 = add(new int[] {83, 90, 87});
        System.out.println("총합 : " + sum2);
        System.out.println();
    }

    public static int add(int[] scores) {
    // 총합을 계산해서 리턴하는 메소드
        int sum = 0;
        for (int i = 0; i < 3; i++)
            sum += scores[i];

        return sum;
    }
}


/*
값의 목록으로 배열 객체 생성할때 주의점
-> 배열 변수를 이미 선언한 후에 다른 실행 문에서 중괄호를 사용한 배열 생성은 허용x

    타입[] 변수;
    변수 = {값0, 값1, 값2 ...};     compile error

배열 변수를 미리 선언한 후, 값 목록들이 나중에 결정되는 상황이라면 
다음과 같이 new 연산자를 사용해서 값 목록을 지정해주면 된다.

new 연산자 바로 뒤에는 배열 변수 선언에서 사용한 "타입[]"를 붙여주고 
중괄호 {}에는 값들을 나열해 주면된다.

변수 = new 타입[] {값0, 값1, 값2, ...};
ex)
    String[] naems = null;
    names = new String[] {"신용권", "홍길동", "감자바"};

메소드의 매개값이 배열인 경우에도 마찬가지이다. 아래와 같이 매개 변수로 
int[] 배열이 선언된 add() 메소드가 있을 경우, 값 목록으로 배열을 생성함과 동시에
add() 메소드 매개값으로 사용하고자 할 때는 반드시 new 연산자를 사용해야 한다.

int add(int[] scores) {...}
---------------------------
int result = add({95, 85, 90});     // compile error
int result = add(new int[] {95, 85, 90});



*/