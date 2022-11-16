#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
void draw(int x, int y)
{
    putpixel(x + 200, y + 200, WHITE);
    delay(1);
    putpixel(x + 200, -y + 200, WHITE);
    delay(1);
    putpixel(-x + 200, -y + 200, WHITE);
    delay(1);
    putpixel(-x + 200, y + 200, WHITE);
    delay(1);
    putpixel(y + 200, x + 200, WHITE);
    delay(1);
    putpixel(y + 200, -x + 200, WHITE);
    delay(1);
    putpixel(-y + 200, x + 200, WHITE);
    delay(1);
    putpixel(-y + 200, -x + 200, WHITE);
}
void circle1(int a, int b, int c)
{
    float p = 3 - 2 * c;
    int x = 0, y = c;
    cout << x << ", " << y << "\n";
    putpixel(x + a, y + b, WHITE);
    while (x <= y)
    {
        if (p < 0)
        {
            p = p + 4 * x + 6;
            x = x + 1;
            draw(x, y);
        }
        else
        {
            p = p + 4 * (x - y) + 10;
            x = x + 1;
            y = y - 1;
            draw(x, y);
        }
    }
}
int main()
{
    initwindow(720, 720);
    int a = 200, b = 200, c = 100;
    circle1(a, b, c);
    return 0;
    closegraph();
}