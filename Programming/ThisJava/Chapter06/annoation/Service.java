package Chapter06.annoation;
// 어노테이션 적용 클래스
// PrintAnnotation을 적용한 Service 클래스
public class Service {
    @PrintAnnotation
    public void method1() {
        System.out.println("실행 내용1");
    }

    @PrintAnnotation("*")
    public void method2() {
        System.out.println("실행 내용2");
    }

    @PrintAnnotation(value = "#", number = 20)
    public void method3() {
        System.out.println("실행 내용3");
    }
}

/*
5행에 적용된 PrintAnnotation은 엘리먼트의 기본값으로 적용했고, 10행에 적용된
PA는 기본 엘리먼트인 value 값을 "*"로 설정했다. 마지막 15행 PA는 value 값을 "#"으로,
number 값을 20으로 설정했다. 
*/