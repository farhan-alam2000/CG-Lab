// C++ program for Mid-point line generation
#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
// // Driver program
void lm(int x1, int y1, int x2, int y2)
{
    float m = float(y2 - y1) / (x2 - x1);
    float p = 1 / 2 - m;
    int x = x1, y = y1;
    putpixel(x, y, WHITE);
    while (x != x2)
    {
        if (p < 0)
        {
            p = p - m + 1;
            y = y + 1;
            x = x + 1;
        }
        else
        {
            p = p - m;
            x = x + 1;
        }
        putpixel(x, y, WHITE);
        delay(10);
    }
}
int main()
{
    initwindow(720, 720);
    int x1 = 100, y1 = 200, x2 = 2000, y2 = 4000;
    lm(x1, y1, x2, y2);
    return 0;
}