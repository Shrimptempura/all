// 이진 파일 쓰기
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int buffer[SIZE] = {10, 20, 30, 40, 50};
    FILE *fp;

    if ((fp = fopen("binary.bin", "wb")) == NULL)
    {
        fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
        return 1;
    }

    fwrite(buffer, sizeof(int), SIZE, fp);
    //  SIZE만큼의 항목을 buffer에서 fp로 저장한다.
    fclose(fp);

    return 0;
}

// 이진 파일 생성하려면 fopen()에 파일모드 "b"를 붙인다.
// 이진 파일 출력은 메모리 블록에 있는 데이터를 디스크 파일로 직접 저장한다.
// 이진 파일 입출력은 이진 모드 파일에서만 사용할 수 있다. 이 방식을 사용하면 배열에
// 있는 데이터 전체를 한 번에 디스크 파일로 쓸 수 있으며 반대로 입력 함수를 호출하여
// 디스크로부터 배열 전체를 읽어올 수 있다.