package Chapter06;
// 매개 변수의 수를 모를 경우
public class ComputerExample {
    public static void main(String[] args) {
        Computer myCom = new Computer();

        int[] values1 = {1, 2, 3};
        int result1 = myCom.sum1(values1);
        System.out.println("result: " + result1);

        int result2 = myCom.sum1(new int[] {1, 2, 3, 4, 5});
        System.out.println("result2: " + result2);

        int result3 = myCom.sum2(1, 2, 3);
        System.out.println("result3: " + result3);

        int result4 = myCom.sum2(1, 2, 3, 4, 5);
        System.out.println("result4: " + result4);
    }
}

/*
<매개 변수의 수를 모를 경우>
예를 들어 여러 개의 수를 모두 합산하는 메소드를 선언해야 한다면, 몇 개의 매개 변수가
입력될지 알수 없다.

해결책)
    int sum1(int[] values) { }

sum1() 메소드를 호출할 때 배열을 넘겨줌으로써 배열의 항목 값들을 모두 전달 할 수 있다.
배열의 항목 수는 호출할 때 결정된다.

    int[] values = {1, 2, 3};
    int result = sum1(values);
    int result = sum1(new int[] {1, 2, 3, 4, 5});

매개 변수를 배열 타입으로 선언하면, 메소드를 호출하기 전에 배열을 생성해야하는
불편한 점이 있다. 그래서 배열을 생성하지 않고 값의 리스트만 넘겨주는 방법이 있다.
다음과 같이 sum2() 메소드의 매개 변수를 "..."를 사용해서 선언하게 되면,
메소드 호출 시 넘겨준 값의 수에 따라 자동으로 배열이 생성되고 매개값으로 사용된다.

    int sum2(int ... values) { }

"..."로 선언된 매개 변수의 값은 다음과 같이 메소드 호출 시 리스트로 나열해주면 된다.

    int result = sum2(1, 2, 3);
    int result = sum2(1, 2, 3, 4, 5);

"..."로 선언된 매개 변수는 배열 타입이므로 다음과 같이 배열을 직접 매개값으로 사용해도
좋다.

    int[] values = {1, 2, 3};
    int result = sum2(values);
    int result = sum2(new int[] {1, 2, 3, 4, 5});


sum1()과 sum2() 메소드의 실행문들은 완전 일치한다.
매개 변수의 선언 방법만 다를 뿐이지 매개 변수의 타입이 배열이므로 처리 내용이 같다.
*/