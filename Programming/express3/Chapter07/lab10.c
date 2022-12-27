// 화면에 사각형 그리기, WINAPI 사용
#include <stdio.h>
#include <windows.h>

int main(void)
{
    HDC hdc = GetWindowDC(GetForegroundWindow());   // 그리기 속성

    int i;
    for (i = 0; i < 100; i++)
    {
        int x = rand() % 500;
        int y = rand() % 300;
        int z = rand() % 100;
        int h = rand() % 100;
        Rectangle(hdc, x, y, x + w, y + h);         // 화면에 사각형을 그린다.
        Sleep(100);
    }

    return 0;
}