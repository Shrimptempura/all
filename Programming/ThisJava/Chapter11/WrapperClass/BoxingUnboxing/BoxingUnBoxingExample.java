package Chapter11.WrapperClass.BoxingUnboxing;
// 기본 타입의 값을 박싱하고 언박싱하기
public class BoxingUnBoxingExample {
    public static void main(String[] args) {
        // Boxing
        Integer obj1 = new Integer(100);
        // Java 9 deprecated, Boxing -> Autoboxing
        Integer obj2 = new Integer("200");
        Integer obj3 = Integer.valueOf("300");

        // UnBoxing
        int value1 = obj1.intValue();
        int value2 = obj2.intValue();
        int value3 = obj3.intValue();

        System.out.println(value1);
        System.out.println(value2);
        System.out.println(value3);
    }
}
