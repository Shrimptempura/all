package Chapter09.NestedClassOutterReference;
// 중첩 클래스에서 바깥 클래스 참조 얻기
public class Outter {
    String field = "Ouuter-field";

    void method() {
        System.out.println("Outter-method");
    }

    class Nested {
        String field = "Nested-field";
        void method() {
            System.out.println("Nested-method");
        }
        void print() {
            // 20-21 : 중첩 객체 참조
            System.out.println(this.field);
            this.method();
            // 23-24 : 바깥 객체 참조
            System.out.println(Outter.this.field);
            Outter.this.method();
        }
    }
}

/*
<중첩 클래스에서 바깥 클래스 참조 얻기>
In Nested Class get Outter Class Reference
클래스 내부에서 this는 객체 자신의 참조이다. 중첩 클래스에서 this 키워드를 사용하면
바깥 클래스의 객체 참조가 아니라, 중첩 클래스의 객체 참조가 된다.
따라서 중첩 클래스 내부에서 this.필드, this.메소드()로 호출하면 중첩 클래스의
필드와 메소드가 사용된다. 

중첩 클래스 내부에서 바깥 클래스의 객체 참조를 얻을려면 바깥 클래스의 이름을
this 앞에 붙여주면 된다. 

다음은 바깥 클래스의 필드와 메소드에 접근하기 위해 바깥 클래스 .this를 사용 예시이다.

    바깥클래스.this.필드;
    바깥클래스.this.메소드();
*/