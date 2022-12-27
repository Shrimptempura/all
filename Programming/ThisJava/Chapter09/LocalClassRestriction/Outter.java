package Chapter09.LocalClassRestriction;
// 로컬 클래스에서 사용 제한
public class Outter {
    // 자바 7이전
    public void method1(final int arg) {
        final int localVariable = 1;
        // arg = 100;       (x)
        // localVariable = 100      (x)
        class Inner {
            public void method() {
                int result = arg + localVariable;
            }
        }
    }

    // 자바 8이후
    public void method2(int arg) {
        int localVariable = 1;
        // arg = 100;       (x)
        // localVariable = 100;     (x)
        class Inner {
            public void method() {
                int result = arg + localVariable;
            }
        }
    }
}

/*
우리는 로컬 클래스의 내부 복사 위치에 신경 쓸 필요 없이 로컬 클래스에서 사용된
매개 변수와 로컬 변수는 모두 fianl 특성을 갖는다는 것만 알면된다.

윗 예제는 매개 변수와 로컬 변수가 로컬 클래스에서 사용할 때 fianl 특성을
갖고 있음을 잘 보여준다. 자바 7까지는 반드시 fianl 키워드를 붙여야하고,
자바 8부터는 붙이지 않아도 final 특성을 가진다.
*/
