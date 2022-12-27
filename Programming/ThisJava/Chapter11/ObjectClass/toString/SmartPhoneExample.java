package Chapter11.ObjectClass.toString;
// 객체의 문자 정보(toString() 메소드)
public class SmartPhoneExample {
    public static void main(String[] args) {
        SmartPhone myPhone = new SmartPhone("구글", "안드로이드");

        String strObj = myPhone.toString();
        System.out.println(strObj);

        // myPhone.toString()을 자동 호출해서 리턴값을 얻은 후 출력
        System.out.println(myPhone);
    }
}

/*
SmartPhone 클래스에서 toString() 메소드를 오버라이딩하여 제작회사와 운영체제를
리턴한 예제

우린 콘솔에 출력하기 위해 System.out.println() 메소드를 사용해 왔다.
이 메소드의 매개값은 콘솔에 출력할 내용인데, 매개값이 기본타입(byte, short, int,
long, float, double, boolean)인 경우, 해당 값을 그대로 출력한다.

만약 매개값으로 객체를 주면 객체의 toString() 메소드를 호출해서
리턴값을 받아 출력하도록 되어 있다.
*/