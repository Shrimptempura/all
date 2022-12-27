// a.txt 파일에서 데이터를 읽기 위해서 개방하는 코드 입니다.
FILE *fp;
fp = fopen("a.txt", "r");
if (fp == NULL)
{
    printf("파일을 열지 못했습니다.");
    return 1;
}