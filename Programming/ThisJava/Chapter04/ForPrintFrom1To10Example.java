package Chapter04;
// 1부터 10까지 출력
public class ForPrintFrom1To10Example {
    public static void main(String[] args) {
        int i;
        for (i = 1; i <= 10; i++)
            System.out.println(i);
    }
}

/*
<초기화식>
int i = 1;
for (; i <= 100; i++) {...}

<증감식 둘 이상>
int i, j;
for (i = 0, j = 100; i <= 50 && j >= 50; i++, j--) {...}
*/