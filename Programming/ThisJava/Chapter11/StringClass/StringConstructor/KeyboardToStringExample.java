package Chapter11.StringClass.StringConstructor;

import java.io.IOException;

// 바이트 배열을 문자열로 변환
public class KeyboardToStringExample {
    public static void main(String[] args) throws IOException {
        // 읽은 바이트를 저장하기 위한 배열 생성
        byte[] bytes = new byte[100];

        System.out.print("입력: ");
        // 배열에 읽은 바이트를 저장하고 읽은 바이트수를 리턴
        int readByteNo = System.in.read(bytes);

        // 배열을 문자열로 변환
        String str = new String(bytes, 0, readByteNo - 1);
        System.out.println(str);
    }
}

/* 윗 예제는 키보드로부터 읽은 바이트 배열을 문자열로 변환하는 방법을 보여준다.
 * System.in.read() 메소드는 키보드에서 입력한 내용을 매개값으로 주어진 바이트 배열에
 * 저장하고 읽은 바이트 수를 리턴한다.
 * 
 * 예를 들어 Hello를 입력하고 En키를 눌렀다면 Hello + /r + /n 코드값이
 * 바이트 배열에 저장되고 총 7개의 바이트를 읽었기 때문에 7을 리턴한다.
 * 
 * 영어는 알파벳 한자가 1바이트로 표현되고, 한글과 기타 다른언어는 2바이트로
 * 표현되기 때문에 입력된 문자 수와 읽은 바이트 수가 다를 수 있다.
 * 
 * 바이트 배열을 문자열로 변환하기 위해 윗 예제는
 * String(byte[] bytes, int offset, int length)를 사용했는데, length 매개값으로
 * 배열의 길이에서 2를 빼준 이유는 /r, /n 부분은 문자열로 만들 필요가 없기 때문이다.
 * (하지만 여기서 -2하면 마지막 글자가 날라가 -1로 함)
 */