package Chapter08.ParameterPolymorphism;
// 구현 클래스
public class Bus implements Vehicle {
    @Override
    public void run() {
        System.out.println("버스가 달립니다.");
    }
}
