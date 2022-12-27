package Chapter11.ObjectClass.HashCode;

import java.util.HashMap;       // HashMap;

// 다른 키로 인식
public class KeyExample {
    public static void main(String[] args) {
        // Key 객체를 식별키로 사용해서 String 값을 저장하는 HashMap 객체 생성
        HashMap <Key, String> hashMap = new HashMap <Key, String>();

        // 식별키 "new Key(1)" 로 "홍길동"을 저장함
        hashMap.put(new Key(1), "홍길동");

        // 식별키 "new Key(1)" 로 "홍길동"을 읽어옴
        String value = hashMap.get(new Key(1));
        System.out.println(value);
    }
}

/*
이런 경우 HashMap의 식별자로 Key 객체를 사용하면 저장된 값을 찾아오지 못한다.
왜냐하면 number 필드값이 같더라도 hashCode() 메소드에서 리턴하는 해시코드가
다르기 때문에 다른 식별자로 인식하기 때문이다.

윗 예제는 "new key(1)" 객체로 "홍길동"을 저장하고 다시 "new Key(1)" 객체로
저장된 "홍길동"을 읽을려고 했지만 결과는 null이 나온다.

의도한 대로 "홍길동"을 읽으려면 다음과 같이 재정의한 hashCode() 메소드를
Key 클래스에 추가하면 된다. (Key.java에서 hashCode Override 추가)

hashCode()의 리턴값을 number 필드값으로 했기 때문에
저장할 때의 "new Key(1)"과 읽을 때의 "new Key(1)"은 같은 해시코드가 리턴된다.
*/