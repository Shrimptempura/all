package Chapter08.TypePromotionPolymorphism.FieldPolymorphism;
// 구현 클래스
public class HankookTire implements Tire {
    // 5-8 : Tire 인터페이스 구현
    @Override 
    public void roll() {
        System.out.println("한국 타이어가 굴러갑니다.");
    }
}
