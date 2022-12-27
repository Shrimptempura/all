package Chapter05;
// 열거 타입 선언
public enum Week {      // 기존 형식 public static ... -> public enum
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THUTSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}

/*
<열거 타입>
데이터 중에서 몇 가지로 한정된 값만 갖는 경우, ex) 요일, 계절
이와 같이 한정된 값만 갖는 데이터 타입이 열거 타입(enumeration type)이다.

열거 타입은 몇 개의 열거 상수(enumeration constant) 중에서 하나의 상수를 
저장하는 데이터 타입이다.

<열거 타입 선언>
열거 타입 선언하기 위해서는 먼저 열거 타입의 이름을 정하고 열거 타입 이름으로
소스 파일(.java)을 생성해야 한다. 열거 타입 이름은 관례적으로 첫 문자를 대문자로 하고
나머지는 소문자로 구성한다. 만약 여러 단어로 구성된 이름이라면 단어 첫 문자는 대문자가
관례이다.

public enum 키워드는 열거 타입을 선언하기 위한 키워드이다. 반드시 소문자로 작성한다.
->  public enum 열거타입이름 {...}

열거 상수 선언은 관례적으로 모두 대문자로 작성한다.
열거 상수가 여러 단어로 구성될 경우 단어 사이를 밑줄로 연결이 관례적이다.
ex) LOGIN_SUCCES
*/