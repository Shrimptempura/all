package Chapter10.ProcessingCodeExceptionType.MultiCatch;
// Multi Catch
public class MultiCatchExample {
    public static void main(String[] args) {
        try {
            String data1 = args[0];
            String data2 = args[1];
            int value1 = Integer.parseInt(data1);
            int value2 = Integer.parseInt(data2);
            int result = value1 + value2;
            System.out.println(data1 + "+" + data2 + "=" + result);
        } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
            System.out.println("실행 매개값의 수가 부족하거나 숫자로 변환할" +
                "수 없습니다.");
        } catch (Exception e) {
            System.out.println("알수 없는 예외 발생");
        } finally {
            System.out.println("다시 실행하세요");
        }
    }
}

/*
멀티 catch
자바 7부터 하나의 catch 블록에서 여러 개의 예외를 처리할 수 있도록 
멀티(multi) catch 기능을 추가했다.

다음은 멀티 catch 블록을 작성하는 방법을 보여준다. 
catch 괄호() 안에 동일하게 처리하고 싶은 예외를 |로 연결하면 된다.


try {
    ArrayIndexOutOfBoundsException 또는 NumberFormatException 발생 -> 35행
    다른 Exception 발생 -> 38행
} catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
    예외 처리1
} catch (Exception e) {
    예외 처리2
}
*/