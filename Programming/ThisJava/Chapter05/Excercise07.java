package Chapter05;

public class Excercise07 {
    public static void main(String[] args) {
        int max = 0;
        int[] ary = {1, 5, 3, 8, 2};

        for (int i = 0; i < ary.length; i++)
        {
            if (ary[i] > max)
                max = ary[i];
        }

        System.out.println("max: " + max);
    }
}
