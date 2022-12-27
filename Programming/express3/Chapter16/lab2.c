// 비트 매크로
// GET_BIT()는 변수 w에서 k번째 비트의 값을 0 또는 1로 반환한다.
// #define GET_BIT(w, k) (((w) >> (k)) & 0x01)  // 변수w의 k번째 비트 값 반환
// SET_BIT_ON()는 변수 w의 k번째 비트를 1로 설정하는 매크로이다. 
// SET_BIT_OFF()는 변수 w의 k번째 비트를 0로 설정하는 매크로이다. 
// #define SET_BIT_ON(w, k) ((w) |= (0x01 << (k)))
// #define SET_BIT_OFF(w, k) ((w) &= ~(0x01 << (k)))

// bit_shift_ex1.c
#include <stdio.h>
#define GET_BIT(w, k) (((w) >> (k)) & 0x01)
#define SET_BIT_ON(w, k) ((w) |= (0x01 << (k)))
#define SET_BIT_OFF(w, k) ((w) &= ~(0x01 << (k)))

int main(void)
{
    int data = 0;
    SET_BIT_ON(data, 2);    // data의 2번째 비트를 1로 설정
    printf("%08X\n", data);
    printf("%d\n", GET_BIT(data, 2));       // data의 2번째 비트 값을 읽는다.

    SET_BIT_OFF(data, 2);   // data의 2번째 비트를 0으로 설정
    printf("%08X\n", data);
    printf("%d\n", GET_BIT(data, 2));       // data의 2번째 비트 값을 읽는다.

    return 0;
}