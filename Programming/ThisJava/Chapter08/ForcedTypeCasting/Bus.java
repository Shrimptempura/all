package Chapter08.ForcedTypeCasting;
// 구현 클래스
public class Bus implements Vehicle {
    @Override
    public void run() {
        System.out.println("버스가 달립니다.");
    }

    public void checkFare() {
        System.out.println("승차요금을 계산합니다.");
    }
}
