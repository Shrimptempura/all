package Chapter07.FeildPolymorphism;
// 실행 클래스
public class CarRenewExample {
    public static void main(String[] args) {
        CarRenew car = new CarRenew();

        for (int i = 1; i <= 5; i++) {
            int problemLocation = car.run();
            if (problemLocation != 0) {
                System.out.println(car.tires[problemLocation - 1].location +
                    " HankookTire로 교체");
                car.tires[problemLocation - 1] =
                    new HankookTire(car.tires[problemLocation - 1].location, 15);
            }
            System.out.println("--------------------------------------");
        }
    }
}

/*
8행의 problemLocation은 1 ~ 4까지의 값을 가지므로 CarRenew 클래스의 해당 타이어 인덱스는
problemLocation에서 1을 뺀 0 ~ 3까지이다.
따라서 10행의 car.tires[problemLocation - 1].location은 펑크 타이어의 위치 정보를
읽은 것인데, "앞왼쪽", "앞오른쪽", "뒤왼쪽", "뒤오른쪽"의 값을 얻는다.

11행은 CarRenew의 tires 배열 항목으로 새로운 HankookTire를 대입하는 코드이다.
*/