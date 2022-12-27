#include <stdio.h>      // 내 좆대로 쓰는 설명식
#include <stdlib.h>
#include <string.h>

void my_assert(FILE *fp);   // 이건 오류값 if == NULL 식임
int check_registration(char(*reg_word)[21], char *word, int cnt);

int main(void)
{
    FILE *afp, *bfp, *cfp;  
    char reg_word[10][21];  // 단어수 최대 10개, 최대20자 + 1(널값)
    char word[21];  // 비교하는 배열
    int i, cnt;

    afp = fopen("a.txt", "r");
    my_assert(afp);
    bfp = fopen("b.txt", "r");
    my_assert(bfp);
    cfp = fopen("c.txt", "w");
    my_assert(cfp);

    for(i = 0; i < 10; i++)
    {
        fscanf(afp, "%s", reg_word[i]); // r.w[i] 0이면 첫재줄 1이면 둘째줄 이렇게 각각 단어를
        if(feof(afp))   // a.txt 단어를 스캔, if(feof(afp))는 위에서 먼저 읽고(fscanf) 돌려야 
        {   // 실행된다! [인자로 넘겨준 스트림의 끝 표시자를 검사하여 설정(set) 되어 있다면]
            break; // 0이 아닌 값을 리턴한다. ; 파일 스트림의 끝인지 테스트하는 함수
        }
    }
    cnt = i; // a.txt 함수의 단어가 몇개인지 체크하는 변수

    while(fscanf(bfp, "%s", word) != EOF)   // b.txt파일을 읽는다. 문장으로 word에
    {                                       // EOF 파일의 끝까지 갈때까지
        if(!check_registration(reg_word, word, cnt))
        {       // 읽는데 !check_registration, "!" 아닌 것만
            fprintf(cfp, "%s\n", word); // fprintf로 c.txt에 word  단어를  프린트하기
        }
    }

    fclose(afp);
    fclose(bfp);
    fclose(cfp);

    return 0;
}

int check_registration(char(*reg_word)[21], char *word, int cnt)
{                
    int i;
    for(i = 0; i < cnt; i++)    // cnt는 a.txt의 단어 개수
    {   
        if(strcmp(reg_word[i], word) == 0) // strcmp로 단어가 동일 한지 비교
        {   // r.w(a.txt 단어)와 word(비교단어 하나식 해서) 동일하면 리턴 1 반환
            return 1;
        }
    }

    return 0;
}

void my_assert(FILE *fp)
{
    if(fp == NULL)
    {
        printf("@ 파일을 개방하지 못했습니다!\n");
        exit(1);
    }
}

