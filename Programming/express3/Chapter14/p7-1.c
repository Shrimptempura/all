#include <stdio.h>
#define WIDTH 10
#define HEIGHT 10
void print_image(int p[HEIGHT][WIDTH], int h, int w)
{
    int x, y;
    for (y = 0; y < h; y++)
    {
        for (x = 0; x < w; x++) 
            printf("%d ", p[y][x]);
        printf("\n");
    }
}

void reverse_image(int p[HEIGHT][WIDTH], int h, int w);

int main(void)
{
    int image[HEIGHT][WIDTH] = {
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,0,255,255,0,0,0,0,0},
    {0,0,255,0,255,0,0,0,0,0},
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,0,0,255,0,0,0,0,0},
    {0,0,255,255,255,255,255,0,0,0}};

reverse_image(image, HEIGHT, WIDTH);
print_image(image, HEIGHT, WIDTH);

return 0;
}

void reverse_image(int p[HEIGHT][WIDTH], int h, int w)
{
    int x, y;
    for(y = 0; y < h; y++)
        for(x = 0; x < w; x++)
            p[y][x] = 255 - p[y][x];
}