package Chapter07.FeildPolymorphism;
// 타이어 클래스
public class Tire {
    // 필드
    public int maxRotation;             // 최대 회전수(수명)
    public int accumulatedRotation;     // 누적 회전수
    public String location;             // 타이어의 위치

    // 생성자
    public Tire(String location, int maxRotation) {
        this.location = location;
        this.maxRotation = maxRotation;
    }

    // 메소드
    public boolean roll() {
        ++accumulatedRotation;      // 누적 회전수 1증가
        // 정상 회전(누적 < 최대)일 경우 실행
        if (accumulatedRotation < maxRotation) {
            System.out.println(location + " Tire 수명: " +
                (maxRotation - accumulatedRotation) + "회");
            return true;
        }
        else {
            // 펑크(누적 = 최대)일 경우 실행
            System.out.println("*** " + location + " Tire 펑크 ***");
            return false;
        }
    }
}

/*
그냥 언절이 설명
Tire 클래스의 필드에는 최대 회전수(maxRotation), 누적 회전수(accumulatedRotation),
타이어의 위치(location)가 있다.

Tire 클래스의 생성자는 타이어의 위치와 최대 회전수를 매개값으로 받아 각각의 필드에 
저장한다. roll() 메소드는 타이어를 1회전 시키는 메소드... boolean
*/