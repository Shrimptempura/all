package Chapter06.annoation;

import java.lang.reflect.Method;

public class PrintAnnotationExample {
    public static void main(String[] args) {
        // Service 클래스로부터 메소드 정보를 얻음
        Method[] declaredMethods = Service.class.getDeclaredMethods();
        // Service 클래스에 선언된 메소드 얻기(리플렉션)

        // Method 객체를 하나씩 처리
        for (Method method : declaredMethods) {
            // PrintAnnotation이 적용되었는지 확인
            if (method.isAnnotationPresent(PrintAnnotation.class)) {
                // PrintAnnotation 객체 얻기
                PrintAnnotation printAnnotation = method.getAnnotation(
                    PrintAnnotation.class);
                
                // 메소드 이름 출력
                System.out.println("[" + method.getName() + "] ");
                // 구분선 출력
                for (int i = 0; i < printAnnotation.number(); i++)
                    System.out.print(printAnnotation.value());
                System.out.println();

                try {
                    // 메소드 호출
                    method.invoke(new Service());
                } catch (Exception e) {}
                System.out.println();
            }
        }
    }
}

/*
리플렉션을 이용해서 Service 클래스에 적용된 어노테이션 정보를 읽고 엘리먼트 값에 따라
출력할 문자와 출력 횟수를 콘솔에 출력한 후, 해당 메소드를 호출한다. 
method.invoke(new Service())는 Service 객체를 생성하고 생성된 Service 객체의 메소드를
호출하는 코드이다.
*/