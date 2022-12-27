package Chapter11.ArraysClass.ArraySortMet;

import java.util.Arrays;

// 배열 검색
public class SearchExample {
    public static void main(String[] args) {
        // 기본 타입값 검색
        int[] scores = { 99, 97, 98 };
        Arrays.sort(scores);
        int index = Arrays.binarySearch(scores, 99);
        System.out.println("찾은 인덱스: " + index);

        // 문자열 검색
        String[] names = {"홍길동", "박동수", "김민수"};
        Arrays.sort(names);
        index = Arrays.binarySearch(names, "홍길동");
        System.out.println("찾은 인덱스: " + index);

        // 객체 검색
        Member m1 = new Member("홍길동");
        Member m2 = new Member("박동수");
        Member m3 = new Member("김민수");
        Member[] members = { m1, m2, m3 };
        Arrays.sort(members);
        index = Arrays.binarySearch(members, m1);
        System.out.println("찾은 인덱스: " + index);
    }
}

/*
 * <배열 검색>
 * scores 배열이 정렬되면 99는 맨 마지막 위치(인덱스:2)되므로 
 * Arrays.binarySearch(scores, 99)의 리턴값은 2가 된다.
 * 
 * names 배열이 정렬되면 홍길동은 맨 마지막에 위치(인덱스:2)되므로
 * Arrays.binarySearch(names, "홍길동")의 리턴값은 2가 된다.
 * 
 * members 배열이 정렬되면 name 필드값이 홍길동인 Member 객체가 맨 마지막에 위치
 * (인덱스:2)되므로 Arrays.binarySearch(members, m1)의 리턴값은 2가된다.
 */