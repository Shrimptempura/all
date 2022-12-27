package Chapter06.Temp;
// 패키지가 선언된 클래스 컴파일
public class Application {
    public static void main(String[] args) {
        System.out.println("애플리케이션을 실행합니다.");
    }
}

/*
<패키지 선언이 포함된 클래스 컴파일>
패키지 선언이 포함된 클래스를 명령 프로프트에서 컴파일할 경우, 단순히 javac ClassName.java
로 컴파일 해서는 패키지 폴더가 생기지 않는다. 패키지 폴더가 자동으로 생성되려면
javac 명령어 다음에 -d 옵션을 추가하고 패키지가 생성될 경로를 다음과 같이 지정해야 한다.

javac -d .          ClassName.java          // 현재 폴더 내에 생성
javac -d ..\bin     ClassName.java          // 현재 폴더와 같은 위치의 bin 폴더에 생성
javac -d C:\Temp\bin    ClassName.java      // C:\Temp\bin 폴더에 생성

<Application.java가 C:\Temp 폴더에 작성되어다고 가정>   1행부터
C:\Temp>javac -d . Application.java
컴파일 성공시 패키지 폴더들이 생성되고 마지막에 Application.class가 저장된다.

Application 클래스는 main() 메소드가 선언되었기 때문에 실행이 가능하다.
패키지에 소속된 클래스를 명령 프롬프트에 실행하려면 바이트 코드 파일(*.class)이 있는
폴더에서 java 명령어를 사용해서는 안된다.

패키지는 클래스의 일부분이므로 패키지가 시작하는 폴더에서 java 명령어를 사용해야 한다.
Application 클래스의 패키지 sec12는 C:\Temp 폴더에 있기 때문에 C:\Temp 폴더에서 다음과
같이 java 명령어를 실행해야 한다.

    C:\Temp>java sec12.exam01_package_compile.Application
*/