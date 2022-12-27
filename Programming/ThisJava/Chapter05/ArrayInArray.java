package Chapter05;
// 배열 속의 배열
public class ArrayInArray {
    public static void main(String[] args) {
        int[][] mathScores = new int[2][3];
        for (int i = 0; i < mathScores.length; i++)
        // length는 new int[2][3]에서 2를 참조한다. 즉 i = 0; i < 2; i++
        {
            for (int k = 0; k < mathScores[i].length; k++) 
            // mathScores[0].length = 3, mathScores[1].length = 3
            // new int[2] = |0|1|, new int[2][3] -> |0| => |0|1|2| (3),
            // |1| => |0|1|2| (3), 즉 mathScores[i].length -> new int[2][3] (3) = 3
                System.out.println("mathScores["+i+"]["+k+"]="+mathScores[i][k]);
        }
        System.out.println();

        int[][] englishScores = new int[2][];
        englishScores[0] = new int[2];
        englishScores[1] = new int[3];
        for (int i = 0; i < englishScores.length; i++)
        {
            for (int k = 0; k < englishScores[i].length; k++)
                System.out.println("englishScores["+i+"]["+k+"]="+englishScores[i][k]);
        }
        System.out.println();

        int[][] javaScores = {{95, 80}, {92, 96, 80}};
        for (int i = 0; i < javaScores.length; i++)
        {
            for (int k = 0; k < javaScores[i].length; k++)
                System.out.println("javaScores["+i+"]["+k+"]="+javaScores[i][k]);
        }
    }
}

/*
ex) 2행 3열 행렬
->  int[][] scores = new int[2][3];

배열 변수인 socres는 길이2인 배열 A를 참조한다.
배열 A의 socres[0]은 다시 길이 3인 배열 B를 참조한다.
그리고 socres[1] 역시 길이 3인 배열 C를 참조한다.
scores[0]과 scores[1]은 모두 배열을 참조하는 변수 역할을 한다.

scores.length       // 2(배열 A의 길이)
scores[0].length    // 3(배열 B의 길이)
scores[1].length    // 3(배열 C의 길이)

자바는 일차원 배열이 서로 연결된 구조로 다차원 배열을 구현하기 때문에
수학 행렬 구조가 아닌 계단식 구조를 가질 수 있다.

int[][] socres = new int[2][];
scores[0] = new int[2];     // |0|1|
socres[1] = new int[3];     // |0|1|2|

타입[][] 변수 = {{값1, 값2}, {값1, 값2}};
...
int[][] scores = {{95,80}, {92, 96}};
*/