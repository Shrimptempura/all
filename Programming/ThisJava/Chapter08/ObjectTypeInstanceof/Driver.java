package Chapter08.ObjectTypeInstanceof;
// 객체 타입 확인
import Chapter08.ForcedTypeCasting.*;

public class Driver {
    public void drive(Vehicle vehicle) {    // vehicle : Bus, Taxi 객체
        if (vehicle instanceof Bus) {       // vehicle 매개 변수가 참조하는 객체가
                                            // Bus인지 조사
            // Bus 객체일 경우 안전하게 강제 타입 변환시킴
            Bus bus = (Bus) vehicle;
            bus.checkFare();    // Bus 타입으로 강제 타입 변환을 해야 하는 이유
        }
        vehicle.run();
    }
}
