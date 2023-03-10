// 직접 만드는 strlen 함수, 배열에 저장된 문자열의 실제 길이를 구할 때 쓰는 함수
int my_strlen(char *ps)     // ps라는 배열명을 저장하고 첫 번째 배열 요소를 가리킴
{
    int cnt = 0;            // 문자 수를 세기 위한 변수

    while (*ps != '\0')     // ps가 가리키는 문자가 널 문자가 아닌 동안
    {
        cnt++;      // 문자 수 증가
        ps++;       // 포인터를 다음 문자의 위치로 이동
    }
    return cnt;     // 전체 문자 수 반환
}

// 직접 만드는 strcmp 함수, 문자열 비교함수(사전식)
// strcmp(str1, str2); 1)str1이 str2보다 나중에 나오면 1반환, 먼저나오면 -1, 같으면 0반환
int my_strcmp(char *pa, char *pb)
{
    while ((*pa == *pb) && (*pa != '\0'))       // 두 문자가 같으나 널 문자가 아닌 경우
    {
        pa++;   // 다음 문자로 이동
        pb++;   // 다음 문자로 이동
    }

    // 반복문 이후 이 시점에서는 두 문자가 다르거나 둘 다 널 문자임
    if (*pa > *pb) return 1;    // 앞 문자의 아스키코드 값이 크면 1 반환
    else if (*pa < *pb) return -1;   // 뒷 문자의 아스키코드 값이 크면 -1 반환
    else return 0;  // 둘 다 널 문자이므로 같은 문자열
}