package Chapter06.CarReturn;
// return 문
public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car();

        myCar.setGas(5);    // Car의 setGas() 메소드 호출

        boolean gasState = myCar.isLeftGas();   // Car의 isLeftGas() 메소드 호출
        if (gasState)
        {
            System.out.println("출발합니다.");
            myCar.run();    // Car의 run() 메소드 호출
        }

        if (myCar.isLeftGas())  // Car의 isLeftGas() 메소드 호출
            System.out.println("gas를 주입할 필요가 없습니다.");
        else
            System.out.println("gas를 주입하세요");
    }
}

/*
<리턴값이 없는 메소드(void)>
void로 선언된 리턴값이 없는 메소드에서도 return문을 사용할 수 있다.
다음과 같이 return문을 사용하면 메소드 실행을 강제 종료시킨다.
    return;

while 문 뒤에 실행문에 추가적으 더 있을 때, break문을 사용하자!
-> return문을 메소드를 즉시 종료시키기 때문
*/