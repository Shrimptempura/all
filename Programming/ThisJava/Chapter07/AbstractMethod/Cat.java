package Chapter07.AbstractMethod;
// 추상 메소드 오버라이딩
public class Cat extends Animal {
    public Cat() {
        this.kind = "포유류";
    }

    @Override   // 추상 메소드 재정의
    public void sound() {
        System.out.println("야옹");
    }
}

// Cat클래스는 추상 클래스인 Animal을 상속하고, 추상 메소드인 sound()를 재정의했다.