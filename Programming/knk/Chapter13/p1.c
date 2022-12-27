#include <stdio.h>
#include <string.h>

int main(void)
{
    char smallest[21];  
    char largest[21];   
    char word[21];      
    int check = 0;  

    while (1)
    {
        printf("Enter word : ");
        scanf("%s", word);
        
        if (strlen(word) == 4)
            break;

        if (check == 0) {
            strcpy(smallest, word);
            check = 1;
        }

        if (strcmp(word, smallest) <= 0) {
            strcpy(smallest, word);
        }
        else if (strcmp(word, largest) > 0) {
            strcpy(largest, word);
        }
    }

    printf("\nSmallest word : %s\n", smallest);
    printf("Largest word : %s\n", largest);

    return 0;
}