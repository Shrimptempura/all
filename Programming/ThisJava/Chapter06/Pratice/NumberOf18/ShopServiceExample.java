package Chapter06.Pratice.NumberOf18;

public class ShopServiceExample {
    public static void main(String[] args) {
        ShopService obj1 = ShopService.getInstance();
        ShopService obj2 = ShopService.getInstance();

        if (obj1 == obj2)
            System.out.println("같은 ShopService 객체 입니다.");
        else
            System.out.println("다른 ShopService 객체 입니다.");
    }
}

// ShopService 객체를 싱글톤으로 만들자, ShopServiceExample 클래스에서
// ShopService의 getInstance() 메소드로 싱글톤을 얻을 수 있도록
// ShopService의 클래스를 작성하자

// 싱글톤(Singleton) : 전체 프로그램에서 단 하나의 객체만 만들도록 보장
// 클래스 외부에서 new 연산자로 생성자를 호출할 수 없도록 막아야 한다. -> private
// 자신의 타입인 정적 필드를 하나 선언하고 자신의 객체를 생성해 초기화한다.
// private로 외부 필드값 변경 불가능이므로 대신 외부 호출가능한 getInstance()
// 를 선언하고 정적 필드에서 참조하고 있는 자신의 객체를 리턴해줌