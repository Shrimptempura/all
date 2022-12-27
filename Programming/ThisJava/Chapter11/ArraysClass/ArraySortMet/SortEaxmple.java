package Chapter11.ArraysClass.ArraySortMet;

import java.util.Arrays;

// 배열 비교
public class SortEaxmple {
    public static void main(String[] args) {
        int[] scores = { 99, 97, 98 };
        Arrays.sort(scores);            // sort
        for (int i = 0; i < scores.length; i++)
            System.out.println("scores[" + i + "]=" + scores[i]);
        System.out.println();

        String[] names = { "홍길동", "박동수", "김민수" };
        Arrays.sort(names);             // sort
        for (int i = 0; i < names.length; i++)
            System.out.println("names[" + i +"]=" + names[i]);
        System.out.println();

        Member m1 = new Member("홍길동");
        Member m2 = new Member("박동수");
        Member m3 = new Member("김민수");
        Member[] members = {m1, m2, m3};
        Arrays.sort(members);           // sort
        for (int i = 0; i < members.length; i++)
            System.out.println("members[" + i + "].name=" + members[i].name);
    }
}

/*
 * 기본 타입 또는 String 배열은 Arrays.sort() 메소드의 매개값으로 지정시
 * 자동으로 오름차순 정렬이 된다.
 */