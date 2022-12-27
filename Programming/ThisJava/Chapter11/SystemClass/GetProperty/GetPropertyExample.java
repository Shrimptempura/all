package Chapter11.SystemClass.GetProperty;

import java.util.Properties;
import java.util.Set;

// 시스템 프로퍼티 읽기
public class GetPropertyExample {
    public static void main(String[] args) {
        String osName = System.getProperty("os.name");
        String userName = System.getProperty("user.name");
        String userHome = System.getProperty("user.home");

        System.out.println("운영체제 이름: " + osName);
        System.out.println("사용자 이름: " + userName);
        System.out.println("사용자 홈디렉토리: " + userHome);

        System.out.println("--------------------------");
        System.out.println(" [ key ]  value");
        System.out.println("--------------------------");
        Properties props = System.getProperties();
        Set keys = props.keySet();
        for (Object objkey : keys) {
            String key = (String) objkey;
            String value = System.getProperty(key);
            System.out.println("[ " + key + " ] " + value);
        }
    }
}

/*
윗 예제는 운영체제 이름, 사용자 이름, 사용자 홈 디렉토리를 알아내고 출력한다.
그리고 모든 시스템 프로퍼티를 키와 값으로 출력했다.

System.getProperties() 메소드는 모든(키, 값) 쌍을 저장하고 있는 Properties 객체를
리천한다. 이 객체의 keySet() 메소드를 호출하면 키만으로 구성된 Set 객체를
얻을 수 있다. for문은 Set 객체로부터 키를 하나씩 얻어내어 문자열로 변환한 다음,
System.getProperty() 메소드로 값을 얻어 키와 값을 모두 출력한다.
*/