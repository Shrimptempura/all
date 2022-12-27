#include <stdio.h>
#include <string.h>

void sort_strings(char* [], int);

int main(void)
{
    char* arr[10] = {        
        "Pride will have a fall",
        "Empty vessels make the mostsound",
        "First think and speak",
        "Love begets love",
        "Negligence is a crime",
        "Poverty parts friends",
        "A friend in need is a friend indeed",
        "Promise little, do much",
        "No news is good news",
        "If you laugh, blessings will come your way"
    };
    int i;

    puts("정렬하기 전의 문자열 순서");
    puts("=========================");
    for(i = 0; i < 10; i++)
        puts(arr[i]);

    sort_strings(arr, 10);    

    puts("\n=========================");
    puts("정렬한 후의 문자열 순서");
    for(i = 0; i < 10; i++)
        puts(arr[i]);

    return 0;
}

void sort_strings(char* arr[10], int size) 
{
    char* temp;                
    int min_index, i, j;    

    for (i = 0; i < size; i++) 
    {
        min_index = i;            
        temp = *(arr + i);
        
        for (j = i + 1; j < size; j++) 
        {
            if(strcmp(*(arr + min_index), *(arr +j)) > 0) 
            {
                temp = *(arr + j);        
                min_index = j;            
            }
        }
        *(arr + min_index) = *(arr + i); 
        *(arr + i) = temp;
    }
}