#include <stdio.h>
#include <string.h>

int main(void)
{
    int speed;
    char des[10];

    printf("Enter a wind speed (in knots) : ");
    scanf("%d", &speed);

    if (speed < 1)
        strcpy(des, "Calem");
    else if (1 <= speed && speed <= 3)      // if (speed < 4)
        strcpy(des, "Light air");
    else if (4 <= speed && speed <= 27)     // if (speed < 28)
        strcpy(des, "Breeze");              // 이렇게 연결 조건문이라 쌉가능
    else if (48 <= speed && speed <= 63)
        strcpy(des,"Strom");
    else
        strcpy(des, "Hurricane");

    printf("Description is %s\n", des);

    return 0;
}