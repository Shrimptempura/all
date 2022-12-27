package Chapter07.FeildPolymorphism;
// Tire의 자식 클래스
public class KumhoTire extends Tire {
    // field
    // constructor
    public KumhoTire(String location, int maxRotation) {
        super(location, maxRotation);
    }

    // method
    // 출력 내용을 달리하기 위해 재정의(Overriding)한 roll() 메소드
    @Override
    public boolean roll() {
        ++accumulatedRotation;
        if (accumulatedRotation < maxRotation) {
            System.out.println(location + " KumhoTire 수명: " +
                (maxRotation - accumulatedRotation) + "회");
            return true;
        }
        else {
            System.out.println("*** " + location + " KumhoTire 펑크 ***");
            return false;
        }
    }
}
