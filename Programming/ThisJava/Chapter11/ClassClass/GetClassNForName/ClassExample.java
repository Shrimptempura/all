package Chapter11.ClassClass.GetClassNForName;
// getClass와 forName() 예제
public class ClassExample {
    public static void main(String[] args) { 
        Car car = new Car();
        Class clazz1 = car.getClass();
        System.out.println();
        System.out.println(clazz1.getName());
        System.out.println(clazz1.getSimpleName()); 
        System.out.println(clazz1.getPackage().getName());
        System.out.println();

        try {
            Class clazz2 = Class.forName("Chapter11.ClassClass.GetClassNForName.Car");
            System.out.println(clazz2.getName());
            System.out.println(clazz2.getSimpleName());
            System.out.println(clazz2.getPackage().getName());
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
// 두가지 방법으로 Car 클래스의 Class 객체를 얻고, Class의 메소드를 이용해
// 클래스의 전체 이름과 간단한 이름 그리고 패키지 이름을 얻어 출력

/*
<Class 객체 얻기(getClass(), forName())>
프로그램에서 Class 객체를 얻기 위해서는 Object 클래스가 가지고 있는 getClass()
메소드를 이용하면 된다. Object는 모든 클래스의 최상위 클래스이므로 모든 클래스에서
getClass() 메소드를 호출할 수 있다.

    Class clazz = obj.getClass();

getClass() 메소드는 해당 클래스로 객체를 생성했을 때만 사용할 수 있는데,
객체를 생성하기 전에 직접 Class 객체를 얻을 수도 있다.

Class는 생성자를 감추고 있기 때문에 new 연산자로 객체를 만들 수 없고,
정적 메소드인 forName()을 이용해야 한다.

forName() 메소드는 클래스 전체 이름(패키지가 포함된 이름)을 매개값으로 받고
Class 객체를 리턴한다.

    try {
        Class clazz = Class.forName(String className);
    } catch (ClassNotFoundException e) {
        ;
    }

Class.forName() 메소드는 매개값으로 주어진 클래스를 찾지 못하면
ClassNotFoundException 예외를 발생시키기 때문에 예외 처리가 필요하다.
*/