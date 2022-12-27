// 주소록 데이터베이스 만들기
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

typedef struct person {
    char name[SIZE];
    char address[SIZE];
    char mobile[SIZE];
    char desc[SIZE];
} PERSON;

void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE *fp);
void search_record(FILE *fp);
void update_record(FILE *fp);

int main(void)
{
    FILE *fp;
    int select;
    // 이진 파일을 추가 모드로 오픈한다.
    if ((fp = fopen("address.dat", "a+")) == NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
        exit(1);
    }

    while (1)
    {
        menu();     
        printf("정수 값을 입력하시오 : ");
        scanf("%d", &select);
        switch(select)
        {
            case 1: add_record(fp); break;      
            case 2: update_record(fp); break;
            case 3: search_record(fp); break;
            case 4: return 0;
            // default: printf("1 ~ 4 사이의 숫자를 입력하시오 : "); break;
        }
    }
    fclose(fp);     // 이진 파일 닫기

    return 0;
}

// 사용자로부터 데이터를 받아서 구조체로 반환한다.
PERSON get_record()
{
    PERSON data;        // PERSON = 자료형, data = 변수명;

    getchar();  // 줄바꿈 문자 없애기
    printf("이름 : ");  gets(data.name);
    printf("주소 : ");  gets(data.address);
    printf("휴대폰 : ");    gets(data.mobile);
    printf("특징 : ");  gets(data.desc);

    return data;
}

// 구조체 데이터를 화면에 출력한다.
void print_record(PERSON data)
{
    printf("이름 : %s\n", data.name);   
    printf("주소 : %s\n", data.address);
    printf("휴대폰 : %s\n", data.mobile);   
    printf("특징 : %s\n", data.desc);
}
// 메뉴를 화면에 표시하는 함수
void menu()
{
    printf("======================\n");
    printf("1. 추가\n2. 수정\n3. 검색\n4. 종료\n");
    printf("======================\n");
}
// 데이터를 추가한다.
void add_record(FILE *fp)
{
    PERSON data;
    data = get_record();            // 사용자로부터 데이터를 받아서 구조체에 저장
    fseek(fp, 0, SEEK_END);         // 파일의 끝으로 간다.
    fwrite(&data, sizeof(data), 1, fp);     // 구조체 데이터를 파일에 쓴다.
}
// 데이터를 탐색한다.
void search_record(FILE *fp)
{
    char name[SIZE];
    PERSON data;

    fseek(fp, 0, SEEK_SET);     // 파일의 처음으로 간다.
    getchar();
    printf("탐색하고자 하는 사람의 이름 : ");
    gets(name);

    while (1)       // 파일의 끝까지 반복, while(!feof(fp))
    {   
        fread(&data, sizeof(data), 1, fp);      // 현재 위치에서 데이터를 읽는다.
        if (strcmp(data.name, name) == 0)       // 이름을 비교한다.
        {
            print_record(data);     // 일치하면 데이터를 화면에 출력
            break;
        }
        if (feof(fp)) 
            break;
    }
}
// 데이터를 수정한다.
void update_record(FILE *fp)
{
    char name[SIZE];
    PERSON data;

    char buffer[1024];
    FILE *fp1;
    fseek(fp, 0, SEEK_SET);
    getchar();
    printf("삭제할 사람의 이름 : ");
    gets(name);

    while (1)       // 파일의 끝까지 반복, while(!feof(fp))
    {   
        fread(&data, sizeof(data), 1, fp);      // 현재 위치에서 데이터를 읽는다.
        if (strcmp(data.name, name) == 0)       // 이름을 비교한다.
        {
            remove(data.name);     // 일치하면 데이터를 화면에 삭제
            break;
        }
        else
        {
            printf("찾는 이름이 없습니다.\n");
            break;
        }
        if (feof(fp)) 
            break;
    }

    if ((fp = fopen("address1.dat", "wb")) == NULL)
    {
        fprintf(stderr, "address.dat 파일을 수정 할 수 없습니다.");
        exit(EXIT_FAILURE);
    }

    int r_count;
    while((r_count = fread(buffer, 1, sizeof(buffer), fp)) > 0)
    {
        int w_count = fwrite(buffer, 1, r_count, fp1);
        if (w_count < 0)
        {
            fprintf(stderr, "파일 쓰기 오류");
            exit(EXIT_FAILURE);
        }
        if (w_count < r_count)
        {
            fprintf(stderr, "미디어 쓰기 오류");
            exit(EXIT_FAILURE);
        }
    }

    const char A[20] = "address.dat1";
    const char B[20] = "address.dat";

    int rename(A, B);
    
    fclose(fp1);
}

// 주로 데이터를 파일에 추가하거나, 검색할때 적합한 모드 -> +a모드
// +a모드는 추가 모드이며, 우리가 파일에 쓰면 무조건 파일의 맨 끝에 추가된다.
// 파일에서 읽을 수도 있는데, 읽기 전에 무조건 fseek()를 해주어야 한다.
// fseek()를 하지 않으면 모드가 변경되지 않는다. 수정할려면 파일이 오픈된 상태에서
// 중간만 변경하는 것보단 차라리 새로운 파일을 생성하여 거기에 전체를 다시 기록
// 하는 것이 낫다. 예전 파일을 삭제하고 이름을 바꾸면 된다.
