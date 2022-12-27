package Chapter07.AbstractClass;
// 실체 클래스
public class SmartPhone extends Phone {
    // constructor
    public SmartPhone(String owner) {
        super(owner);
    }

    // method
    public void internetSearch() {
        System.out.println("인터넷 검색을 합니다.");
    }
    
}

/*
Phone 추상 클래스를 상속해서 SmartPhone 자식 클래스를 정의한 것이다.
SmartPhone 클래스의 생성자를 보면 super(owner); 코드로 Phone의 생성자를 호출하고 있다.
*/