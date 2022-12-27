// 이진 파일 읽기
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int buffer[SIZE];
    FILE *fp;

    if ((fp = fopen("binary.bin", "rb")) == NULL)
    {
        fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
        return 1;
    }

    fread(buffer, sizeof(int), SIZE, fp);
    // SIZE만큼의 항목을 fp에서 buffer로 읽는다.

    for (i = 0; i < SIZE; i++)
        printf("%d ", buffer[i]);
    printf("\n");

    return 0;
}

// Syntax : fread()
//      fread(buffer, sizeof(int), SIZE, fp);               fp = FILE 포인터
// buffer = 메모리 블록의 주소, sizeof(int) = 항목의 크기, SIZE = 항목의 개수,