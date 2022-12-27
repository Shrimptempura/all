package Chapter02;
// 연산식에서의 자동 타입 변환
public class OperationsPromotionExample {
    public static void main(String[] args) {
        byte byteValue1 = 10;
        byte byteValue2 = 20;
        // byte byteValue3 = byteValue1 + byteValue2;   컴파일 에러s
        int intValue1 = byteValue1 + byteValue2;
        System.out.println(intValue1);

        char charValue1 = 'A';
        char charValue2 = 1;
        // char charValue3 = charValue1 + charValue2;   컴파일 에러
        int intValue2 = charValue1 + charValue2;
        System.out.println("유니코드 =" + intValue2);
        System.out.println("출력문자 =" + (char)intValue2);

        int intValue3 = 10;
        int intValue4 = intValue3 / 4;
        System.out.println(intValue4);

        int intValue5 = 10;
        // intValue6 = 10 / 4.0;    컴파일 에러
        double doubleValue = intValue5 / 4.0;
        System.out.println(doubleValue);
    }
}
/*
연산은 기본적은 같은 타입의 피연산자(operand)간에만 수행되기 때문에 서로 다른 타입의
피연사자가 있을 경우 두 피연산자 중 크기가 큰 타입으로 자동 변환된 후 연산을 수행한다.

ex) int와 double 덧셈 연산 = int 타입 피연사자가 double 타입으로 자동 변환되고 연산 수행
당연히 연산의 결과는 double

ex) 만약 int 타입으로 꼭 연산을 해야 한다면 double 타입을 int 타입으로 강제 변환후 연산
int result = intValue + (int)doubleValue;

크기가 4byte보다 작은 타입(byte, char, short)은 4byte인 int타입으로 변환된 후 연산
-> 따라서 연산의 결과도 int 타입
ex) char ai = 'A';
int result = ai + 1;        // 
char na = (char)result;
*/