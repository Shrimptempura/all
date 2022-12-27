package Chapter03;
// 산술 연산 전에 오버플로우를 탐지
public class CheckOverflowExample {
    public static void main(String[] args) {
        try {
            int result = safeAdd(2000000000, 2000000000);
            System.out.println(result);
        } catch(ArithmeticException e) {
            System.out.println("오버플로우가 발생하여 정확하게 계산할 수 없음");
        }
    }

    public static int safeAdd(int left, int right) {
        if ((right > 0)) {
            if (left > (Integer.MAX_VALUE - right)) {
                throw new ArithmeticException("오버플로우 발생");
            }
        } else {    // right <= 0인 경우
            if (left < (Integer.MIN_VALUE - right)) {
                throw new ArithmeticException("오버플로우 발생");
            }
        }
        return left + right;
    }
}

/*
safeAdd() 메소드는 두 개의 매개값을 산술 연산하기 전에 어떤 범위의 값인지 조사해서
연산 시 오버플로우가 생길 것 같으면 16행과 20행에서 ArithmeticException 예외를 발생시킨다.

main() 메소드는 예외가 발생될 경우 9행에서 오버플로우 예외 처리 코드를 출력한다.

safeAdd() 메소드는 두 개의 매개값을 더해도 안전한 경우에만 더한 결과를 리턴한다.
*/