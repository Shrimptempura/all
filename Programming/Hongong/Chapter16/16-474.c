// 명령행 인수를 사용하여 프로그램 이름을 제외한 나머지 인수를 출력하는 코드
int main(int argc, char **argv)     // char **argv
{
    int i;
    for(i = 0; i < argc - 1; i++)   // argc - 1
    {   
        printf("%s\n", argv[i + 1]);    // argv[i + 1]
    }
}