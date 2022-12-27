package Chapter03;

public class InputDataCheckNaNExample1 {
    public static void main(String[] args) {
        String userInput = "NaN";
        double val = Double.valueOf(userInput);

        double currentBalance = 10000.0;

        currentBalance += val;
        System.out.println(currentBalance);
    }
}

/*
"NaN" 문자열은 Double.valueOf() 메소드에 의해 double 타입으로 변환되면 NaN이 된다.
문제는 NaN은 산술 연산이 가능하다. NaN과 어떠한 수가 연산되면 결과는 NaN이 산출되어
데이터가 엉망이 된다.
8행에서 10000.0을 저장하고 10행에서 더하기 연산시 NaN이 되어, 원래 데이터가 사라진다.
-> 사용자로부터 문자열을 입력받을 때에는 반드시 "NaN"인지를 조사하고 만약 "NaN"이면
NaN과 산술 연산을 수행해서는 안된다.
*/