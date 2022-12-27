package Chapter07.AbstractMethod;
// 추상 메소드 선언
public abstract class Animal {      // 추상 클래스
    public String kind;

    public void breathe() {
        System.out.println("숨을 쉽니다.");
    }

    public abstract void sound();       // 추상 메소드, {} (x)
}

// Animal 클래스를 추상 클래스로 선언하고 sound() 메소드를 추상 메소드로 선언했다.