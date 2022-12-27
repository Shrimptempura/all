package Chapter10.ProcessingCodeExceptionType.CatchKind;
// 다중 catch
public class CatchByExceptionKindExample {
    public static void main(String[] args) {
        try {
            String data1 = args[0];
            String data2 = args[1];
            int value1 = Integer.parseInt(data1);
            int value2 = Integer.parseInt(data2);
            int result = value1 + value2;
            System.out.println(data1 + "+" + data2 + "=" + result);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("실행 매개값의 수가 부족합니다.");
            System.out.println("[실행방법]");
            System.out.println("java CatchByExceptionKindExample num1 num2");
        } catch (NumberFormatException e) {
            System.out.println("숫자로 변환할 수 없습니다.");
        } finally {
            System.out.println("다시 실행하세요");
        }
    }
}

/*

// try 블록에서 ArrayIndexOutOfBoundsException이 발생하면 첫번째 catch 블록을
// 실행하고, 그 밖에 다른 예외가 발생하면 두 번째 catch 블록을 실행한다.

Catch 순서
다중 catch 블록을 작성할 때 주의할 점은 상위 예외 클래스가 하위 예외 클래스보다
아래쪽에 위치해야 한다.

try 블록에서 예외가 발생했을 때, 예외를 처리해줄 catch 블록은 위에서부터 차례대로
검색된다. 

만약 상위 예외 클래스의 catch 블록이 위에 있다면, 하위 예외 클래스의 catch 블록은
실행되지 않는다. 

왜냐하면 하위 예외는 상위 예외를 상속했기 때문에 상위 예외 타입도 되기 때문이다.
따라서 다음은 잘못된 코딩이다.

try {
    ArrayIndexOutOfBoundsException 발생 -> 42행
    NumberFormatException 발생 -> 42행
} catch (Exception e) {
    예외 처리1
} catch(ArrayIndexOutOfBoundsException e) {     // xxxxxxxxxx
    예외 처리2
}


ArrayIndexOutOfBoundsException과 NumberFormatException은 모두 Exception을 
상속받기 때문에 첫 번째 catch 블록만 선택되어 실행된다.
두 번째 catch 블록은 어떤 경우에라도 실행되지 않느다.
위 코드는 다음과 같이 수정해야 한다.

try {
    ArrayIndexOutOfBoundsException 발생 -> 56행
    다른 Exception 발생 -> 59행
} catch (ArrayIndexOutOfBoundsException e) {
    예외 처리1
} catch (Exception e) {
    예외 처리2
}
*/