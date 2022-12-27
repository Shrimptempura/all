// 직접 만드는 strcat 함수, (함수본체만); 문자열을 붙이는 함수; strcat(str, "dafaf");
char *my_strcpy(char *pd, char *ps)
{
    char *po = pd;      // 배열의 처음 위치 보관

    while (*pd != '\0')     // pd를 널 문자의 위치로 이동
    {
        pd++;
    }
    while (*ps != '\0')     // 여기서부터는 문자열 복사와 같음
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';

    return po;              // 붙여넣은 배열의 시작 위치 반환
}
