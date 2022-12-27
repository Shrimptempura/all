package Chapter07.FeildPolymorphism;
// Tire의 자식 클래스
public class HankookTire extends Tire {
    // field
    // constructor
    public HankookTire(String location, int maxRotation) {
        super(location, maxRotation);
    }

    // method
    // 출력 내용을 달리하기 위해 재정의(Overrideing)한 roll() method
    @Override
    public boolean roll() {
        ++accumulatedRotation;
        if (accumulatedRotation < maxRotation) {
            System.out.println(location + " HankookTire 수명:" + 
                (maxRotation - accumulatedRotation) + "회");
            return true;
        }
        else {
            System.out.println("*** " + location + " HankookTire 펑크 ***");
            return false;
        }
    }
}

/*
두 한국,금호 클래는 Tire 클래스를 상속받는다. 생성자는 타이어의 위치, 최대 회전수를
매개값으로 받아서 부모인 Tire 클래스의 생성자를 호출할 때 넘겨주었다.

roll() 메소드는 오버라이딩되었는데, 정상 회전과 펑크 났을 때 출력하는 내용이
Tire 클래스의 roll() 메소드와 다르다.
*/