package Chapter08.DefaultMethodInterfExten;
// // 기존 인터페이스
// public interface MyInterface {
//     public void method1();
// }

// 수정 인터페이스
public interface MyInterface {
    public void method1();

    public default void method2() {
        System.out.println("MyInterface-method2 실행");
    }
}

/*
인터페이스를 수정하더라도 MyClassA는 컴파일 에러가 발생하지 않는다.
*/
