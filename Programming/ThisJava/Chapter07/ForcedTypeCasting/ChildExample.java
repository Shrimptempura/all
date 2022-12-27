package Chapter07.ForcedTypeCasting;
// 강제 타입 변환(캐스팅)
public class ChildExample {
    public static void main(String[] args) {
        Parent parent = new Child();    // 자동 타입 변환
        parent.field1 = "data1";
        parent.method1();
        parent.method2();

        /*
        parent.field2 = "data2";        // (불가능)
        parent.meethod3();              // (불가능)
        */

        Child child = (Child) parent;   // 강제 타입 변환
        child.field2 = "yyy";   // (가능)
        child.method3();        // (가능)
    }
}
