package Chapter02;
// 변환으로 인한 데이터 손실이 발생되지 않도록 한다.
public class CheckValueBeforeCasting {
    public static void main(String[] args) {
        int i = 128;
        if ((i < Byte.MIN_VALUE) || (i > Byte.MAX_VALUE)) {
            System.out.println("byte 타입으로 변환할 수 없습니다.");
            System.out.println("값을 다시 확인해 주세요");
        } else {
            byte b = (byte)i;
            System.out.println(b);
        }
    }
}
/* 강제 타입 변환에서의 주의점)
입력받은 값을 변환할 때 값의 손실이 발생하면 안된다. 미리 검사하는 것이 좋다.
*/
