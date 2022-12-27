package Chapter05;
// new 연산자로 배열 생성
public class ArrayCreateByNew {
    public static void main(String[] args) {
        int[] arr1 = new int[3];
        for (int i = 0; i < 3; i++)
            System.out.println("arr1[" + i + "] : " + arr1[i]);
        arr1[0] = 10;
        arr1[1] = 20;
        arr1[2] = 30;
        
        for (int i = 0; i < 3; i++)
            System.out.println("arr1[" + i + "] : " + arr1[i]);
        
        double[] arr2 = new double[3];
        for (int i = 0; i < 3; i++)
            System.out.println("arr2[" + i + "] : " + arr2[i]);
        arr2[0] = 0.1;
        arr2[1] = 0.2;
        arr2[2] = 0.3;

        for (int i = 0; i < 3; i++)
            System.out.println("arr2[" + i + "] : " + arr2[i]);
        
        String[] arr3 = new String[3];
        for (int i = 0; i < 3; i++)
            System.out.println("arr3[" + i + "] : " + arr3[i]);
        arr3[0] = "1월";
        arr3[1] = "2월";
        arr3[2] = "3월";

        for (int i = 0; i < 3; i++)
            System.out.println("arr3[" + i + "] : " + arr3[i]);
    }
}

/*
값의 목록을 가지고 있지 않지만, 향후 값들을 저장할 배열을 미리 만들고 싶다면
new 연산자로 다음과 같이 배열 객체를 생성시킬 수 있다.

    타입[] 변수 = new 타입[길이];

길이는 배열이 저장할 수 있는 값의 수를 말한다. new 연산자로 배열을 생성할 경우에는
이미 배열 변수가 선언된 후에도 가능하다.

    타입[] 변수 = null;
    변수 = new 타입[길이];

ex) 길이 5인 int[] 배열 생성
    int[] intArray = new[5];
자바는 intArray[0] ~ intArray[4]까지 값이 저장될 수 있는 공간을 확보하고,
배열의 생성 번지를 리터난다. 리턴된 번지는 intArray 변수에 저장된다.

new 연산자로 배열을 처음 생성할 경우, 배열은 자동적으로 기본값으로 초기화 된다.
ex) 학생 30명의 점수를 저장할 배열
    int[] scores = new int[30];

ex) String 배열 생성
    String[] names = new String[30];
*/