package Chapter03;
// 비트 이동 연산자
public class BitShiftExample {
    public static void main(String[] args) {
        System.out.println("1 << 3 = " + (1 << 2));
        System.out.println("-8 >> 3 = " + (-8 >> 3));
        System.out.println("-8 >>> 3 = " + (-8 >>> 3));
    }
}

/*
비트 이동(shift) 연산자는 정수 데이터의 비트를 좌측 또는 우측으로 밀어서 이동시키는 연산
a << b : 정수 a의 각 비트를 b만큼 왼쪽으로 이동(빈자리는 0으로 채워진다.)

a >> b : 정수 a의 각 비트를 b만큼 오른쪽으로 이동(빈자리는 정수 a의 최상위 부호 비트
        (MSB)와 같은 값으로 채워진다.)

a >>> b : 정수 a의 각 비트를 b만큼 오른쪽으로 이동(빈자리는 0으로 채워진다.)

*/