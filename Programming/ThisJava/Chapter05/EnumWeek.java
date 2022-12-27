package Chapter05;
// 열거 타입과 열거 상수
import java.util.Calendar;
// Calendar 클래스는 java.util 패키지에 있으므로 import가 필요하다.
public class EnumWeek {
    public static void main(String[] args) {
        Week today = null;      // 열거 타입 변수 선언, Week 열거 파일이 없으면 실행불가
    Calendar cal = Calendar.getInstance();
    int week = cal.get(Calendar.DAY_OF_WEEK);   // 일(1) ~ 토(7)까지의 숫자를 리턴

    switch (week)
    {
        case 1:
            today = Week.SUNDAY; 
            // 열거 상수 대입
            break;
        case 2:
            today = Week.MONDAY; break;
        case 3:
            today = Week.TUESDAY; break;
        case 4:
            today = Week.WEDNESDAY; break;
        case 5:
            today = Week.THUTSDAY; break;
        case 6:
            today = Week.FRIDAY; break;
        case 7:
            today = Week.SATURDAY; break;
    }

    System.out.println("오늘 요일: " + today);

    if (today == Week.SUNDAY)
        System.out.println("일요일에는 축구를 합니다.");
    else
        System.out.println("열심히 빡시게 자바를 공부합시다.");
    }    
}

/*
열거 타입도 하나의 데이터 타입이므로 변수를 선언하고 사용해야 한다.
열거 타입 변수 선언 방법 : 열거타입 변수;

예를 들어 열거 타입 Week로 변수를 선언하면 다음과 같다.
Week today;
Week reservationDay;

열거 타입 변수를 선언했다면 다음과 같이 열거 상수를 저장할 수 있다.
열거 상수는 단독으로 사용할 수는 없고 반드시 열거타입.열거상수로 사용된다.
    열거타입 변수 = 열거타입.열거상수;

예를 들어 today 열거 변수에 열거 상수인 SUNDAY를 저장하면 다음과 같다.
    Week today = Week.SUNDAY;

열거 타입 변수는 null 값을 저장할 수 있는데 열거 타입도 참조 타입이기 때문이다.
    Week birthday = null;

참조 타입 변수는 객체를 참조하는 변수라고 알고 있는데, 그렇다면 열거 상수는 객체일까?
-> 그렇다. 열거 상수는 열거 객체로 생성된다.

열거 타입 Week의 경우 MONDAY부터 SUNDAY까지의 열거 상수는 다음과 같이 총 7개의 Week 객체로
생성된다.
그리고 메소드 영역에 생성된 열거 상수가 해당 Week 객체를 각각 참조하게 된다.


Week today = Week.SUNDAY;   이 코드를 어떻게 이해 할까?
열거 타입 변수 today는 스택 영역에 해당된다.
today에 저장되는 값은 Week.SUNDAY 열거 상수가 참조하는 객체의 번지이다.
따라서 열거 상수 Week.SUNDAY와 today 변수는 서로 같은 Week 객체를 참조하게 된다.

    그렇기 때문에 today 변수와 Week.SUNDAY 상수의 == 연산 결과는 true가 된다.
    today == Week.SUNDAY        // true

    그래서 week1과 week2는 모두 Week.SATURDAY 상수와 같이 동일한 Week 객체를 참조한다.
    Week week1 = Week.SATURDAY;
    Week week2 = Week.SATURDAY;
    System.out.println(week1 == week2);     // ture

자바는 컴퓨터의 날짜 및 요일, 시가늘 프로그램에서 사용할수 있도록 
Date, Calendar, LocalDateTime 등의 클래스를 제공한다.

LocalDateTime은 자바 8부터 지원하는 API
이전 버전과의 호환성을 위해 Calendar를 이용해서 날짜와 시간을 얻어보자

우선 Calendar 변수를 선언하고 Calendar.getInstance() 메소드가 리턴하는 Calendar 객체를 얻는다.
    Calendar now = Calendar.GetInstance();

Calendar 객체를 얻어다면 get() 메소드를 이용해서 년, 월, 일, 요일, 시, 분, 초를 얻는다.

int year = now.get(Calendar.YEAR);
int month = now.get(Calendar.MONTH) + 1;        // 월(1 ~ 12)
int day = now.get(Calendar.DAY_OF_MONTH);
int week = now.get(Calendar.DAY_OF_WEEK);       // 요일(1 ~ 7)
int hour = now.get(Calendar.HOUR);
int minute = now.get(Calendar.MINUTE);
int second = now.get(Calendar.SECOND);

Calendar를 사용하기 위해서는 3행의 import문이 필요하다.
8행에서 Calendar를 얻고, 9행에서 요일별 숫자를 얻는다.
switch문을 이용해서 열거 타입 변수 today에 열거 상수를 대입한다.
다음 if문으로 일요일을 걸려 출력한다.
*/
