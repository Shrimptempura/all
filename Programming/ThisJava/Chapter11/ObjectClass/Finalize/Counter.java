package Chapter11.ObjectClass.Finalize;
// finalize() 메소드 재정의, 객체 소멸자
public class Counter {
    private int no;

    public Counter(int no) {
        this.no = no;
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println(no + "번 객체의 finalize()가 실행됨");
    }
}

/*
윗 예제는 finalize() 메소드를 재정의한 클래스이다.
finalize() 메소드가 실행되면 번호를 출력하게 해서 어떤 객체가 소멸되었는지
확인할 수 있게 했다.


참조하지 않는 배열이나 객체는 쓰레기 수집기(Garbage Collector)가 힙 영역에서
자동적으로 소멸시킨다. 쓰레기 수집기는 객체를 소멸하기 직전에 마지막으로
객체의 소멸자(finalize())를 실행시킨다. 

소멸자는 Objectdl finalize() 메소드를 말하는데, 기본적으로 실행 내용이 없다.
만약 객체가 소멸되기 전에 마지막으로 사용했던 자원(데이터 연결, 파일 등)을
닫고 싶거나, 중요한 데이터를 저장하고 싶다면 Object의 finalize()를 재정의 할수 있다.
*/