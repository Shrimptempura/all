package Chapter09.AnonyObjsLocalVariable;
// 인터페이스
public interface Calculatable {
    public int sum();
}

/*
다음 예제들은 매개 변수와 로컬 변수가 익명 객체에서 사용할 때 final 특성을 갖고 있음을 잘 보여준다.

자바 7에서는 반드시 final 키워드를 붙여야 하지만, 자바 8부터는 붙이지 않아도 final 특성을 가지고 있다.
*/