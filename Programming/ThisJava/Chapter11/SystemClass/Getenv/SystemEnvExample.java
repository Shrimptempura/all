package Chapter11.SystemClass.Getenv;
// JAVA_HOME 환경 변수 값 읽기
public class SystemEnvExample {
    public static void main(String[] args) {
        String javaHome = System.getenv("JAVA_HOME");
        System.out.println("JAVA_HOME: " + javaHome);
    }
}

/*
<환경 변수 읽기(getenv())
대부분의 운영체제는 실행되는 프로그램들에게 유용한 정보를 제공할 목적으로 환경 변수
(Environment Variable)를 제공한다. 환경 변수는 프로그램상의 변수가 아니라 운영체제에서
이름(Name)과 값(value)으로 관리되는 문자열 정보다.

환경 변수는 운영체제가 설치될 때 기본적인 내용이 설정되고, 사용자가 직접 설정하거나
응용프로그램이 설치될 때 자동적으로 추가 설정되기도 한다.

사용자가 환경 변수를 설정하는 방법은 운영체제마다 조금씩 다르다.

자바 프로그램에서 환경 벼수의 값이 필요할 경우 System.getenv() 메소드를 사용하나.
매개값으로 환경 변수 이름을 주면 값을 리턴 한다.

    String value = System.getenv(String name);
*/