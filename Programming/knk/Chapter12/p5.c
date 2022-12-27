#include <stdio.h>

int main(void)
{
    char ch, terminal_ch, sentence_char_arr[100];
    int len = 0, start_idx, end_idx;
    char *p, *q;
    
    p = sentence_char_arr;
    printf("Enter a sentence: ");
    for (;;) 
    {
        ch = getchar();
        if (ch == '?' || ch == '.' || ch == '!') 
        {   // ? . !가 문장 마지막이라고 [가정]하고 만든 문제(잘못됨 자체)
            terminal_ch = ch;
            break;
        }
        *p++ = ch;      // sentence_char_arr 배열에 문장 입력, *p;
        len++;
    }
    
    end_idx = len;  // 시작과 끝 인덱스(구분점)
    start_idx = len;
    
    printf("Reversal of sentence: ");
    
    for (p = sentence_char_arr + len - 1; p >= sentence_char_arr; p--) {
        // p = sentence_char_arr[len - 1] : 배열이니까 -1
        // p >= sentence_char_arr : 문장의 첫번째까지 1--;
        if (*p == ' ' || p == sentence_char_arr) {
            // 공백을 만나거나 인덱스가 0번째일 때
            start_idx = p - sentence_char_arr;
            // 시작 포인트는 p에서(총 길이) - sentence(0)
            if (p != sentence_char_arr) start_idx += 1;
            // p가 0이 아니면..(공백), 시작 포인트에서 ++1;
            for (q = sentence_char_arr + start_idx; q < sentence_char_arr + end_idx; q++) {
                printf("%c", *q);
            }   // q는 문장[시작 포인트](공백 다음부터) 엔드인덱스까지 출력
            if (p == sentence_char_arr)
            {
                printf("%c\n", terminal_ch);
                return 0;
            }
            printf(" ");
            end_idx = p - sentence_char_arr;    // 엔드 인덱스 점검
        }
    }
    
    return 0;
}