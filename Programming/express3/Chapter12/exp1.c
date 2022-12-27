// getchar(), putchar() 예시와 주의점
// Syntax: getchar();
//     int ch;     // int형으로 표현 이유 : EOF(-1) 문자 체크
//     ch = getchar();
//     putchar(ch);
// #include <stdio.h>

// int main(void)
// {
//     int ch;
//     while ((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }

//     return 0;
// }

// getchar() -> 버퍼이용, 엔터를 쳐야 입력한 문자를 받음
// getche(), getch() -> 입력버퍼 이용 x 