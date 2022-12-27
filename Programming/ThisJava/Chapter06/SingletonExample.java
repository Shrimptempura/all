package Chapter06;
// 싱글톤 객체
public class SingletonExample {
    public static void main(String[] args) {
        /*
        Singleton obj1 = new Singleton();       // compile error
        Singleton obj2 = new Singleton();       // compile error
        */

        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();

        if (obj1 == obj2)
            System.out.println("같은 Singleton 객체 입니다.");
        else
            System.out.println("다른 Singleton 객체 입니다.");
    }
}

/*
<싱글톤(Sigleton)>
가끔 전체 프로그램에서 단 하나의 객체만 만들도록 보장해야 할 경우가 있다.
싱글톤을 만들려면 클래스 외부에서 new 연산자로 생성자를 호출할 수 없도록 막아야 한다.
생성자를 호출한 만큼 객체가 생성되기 때문이다.

생성자를 외부에서 호출할 수 없도록 하려면 생성자 앞에 private 접근 제한자를 붙여준다.

그리고 자신의 타입인 정적 필드를 하나 선언하고 자신의 객체를 생성해 초기화한다.
참고로 클래스 내부에서는 new 연산자로 생성자 호출이 가능하다. 정적 필드도 private 
접근 제한자를 붙여 외부에서 필드값을 변경하지 못하도록 막는다.

대신 외부엥서 호출할 수 있는 정적 메소드인 getInstance()를 선언하고 정적 필드에서
참조하고 있는 자신의 객체를 리턴해준다.

싱글톤을 만드는 코드
public class 클래스 {
    // 정적 필드
    private static 클래스 singleton = new 클래스();

    // 생성자
    private 클래스() {}

    // 정적 메소드
    static 클래스 getInstance() {
        return sigleton;
    }
}

외부에서 객체를 얻는 유일한 방법은 getInstance() 메소드를 호출하는 방법이다.
getInstance() 메소드는 단 하나의 객체만 리턴하기 때문에 아래 코드에서 변수1과 변수2는
동일한 객체를 참조한다.

클래스 변수1 = 클래스.getInstance();
클래스 변수2 = 클래스.getInstance();
*/