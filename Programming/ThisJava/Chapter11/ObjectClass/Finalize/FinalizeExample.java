package Chapter11.ObjectClass.Finalize;
// finalize() 메소드 실행 확인
public class FinalizeExample {
    public static void main(String[] args) {
        Counter counter = null;
        for (int i = 1; i <= 50; i++) {
            counter = new Counter(i);

            counter = null;     // Counter 객체를 쓰레기로 만듦

            System.gc();        // 쓰레기 수집기 실행 요청
        }
    }
}

/*
객체가 소멸될 때 fianlize()가 실행되는 것을 확인시켜는 예제

한 두개의 객체를 쓰레기로 만들었다고 해서 쓰레기 수집기가 실행되는 것은 아니기
때문에 반복해서 객체를 생성하고 쓰레기로 만들었다.

그리고 반복할 때마다 System.gc()를 호출해서 쓰레기 수집기를 가급적 빨리
실행해 달라고 JVM에게 요청했다.

>
실행 결과를 보면 순서대로 소멸시키지 않고, 무작위로 소멸시키는 것을 볼 수 있다.
그리고 전부 소멸시키는 것이 아니라 메모리의 상태를 보고 일부만 소멸시킨다.

예제에서는 System.gc()로 쓰레기 수집기를 실행 요청하였으나, 
쓰레기 수집기는 메모리가 부족할 때 그리고 CPU가 한가할 때에 JVM에 의해서
자동 실행된다. 

그렇기 때문에 fianlize() 메소드가 호출되는 시점은 명확하지 않다.
프로그램이 종료될 때 즉시 자원을 해제하거나 즉시 데이터를 최종 저장해야 한다면,
일반 메소드에서 작성하고 프로그램이 종료될 때 
명시적으로 메소드를 호출하는 것이 좋다.
*/