#include <stdio.h>
#include <string.h>

void ptr_str_array(char **dp, int n);

int main() 
{
    char *str[10] = {
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

    ptr_str_array(str, 10);
    return 0;
}

void ptr_str_array(char **dp, int n) 
{
    int i;
    for(i = 0; i < n; i++)
        printf("%s\n", *(dp+i));        // dp[i]도 가능
}