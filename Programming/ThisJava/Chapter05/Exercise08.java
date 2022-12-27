package Chapter05;

public class Exercise08 {
    public static void main(String[] args) {
        int[][] ary = {
            {95, 86},
            {83, 92, 96},
            {78, 83, 93, 87, 88}
        };
        
        int sum = 0;
        double avg = 0.0;
        int cnt = 0;

        for (int i = 0; i < ary.length; i++)
        // i = 0; i < 3
        {
            for (int j = 0; j < ary[i].length; j++)
            // j = 0; j < 각 배열의 수
            {
                sum += ary[i][j];
                cnt++;
            }
        }

        avg = (double)sum / cnt;

        System.out.println("sum: " + sum);
        System.out.println("avg: " + (String.format("%.1f", avg)));


    }
}
