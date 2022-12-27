package Chapter03;

public class CharOperationExample {
    public static void main(String[] args) {
        char c1 = 'A' + 1;
        char c2 = 'A';
        // char C3 = C2 + 1     compile error
        System.out.println("c1: " + c1);
        System.out.println("c2: " + c2);
        // System.out.println("c3: " + c3);
    }
}

/*
7행, 변수 c2에 1을 더하면 c2는 int 타입으로 변환되고 1과 연산되기 때문에
산출 타입을 int 타입이 된다. 따라서 char 타입 변수 c3에 대입을 할 수 없어 컴파일 에러발생
fix ->
char c3 = (char) (c2 + 1);
*/