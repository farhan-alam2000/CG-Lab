// C++ program for Mid-point line generation
#include <bits/stdc++.h>
using namespace std;
#include <graphics.h>
// // Driver program
void draw(int x, int y)
{
    putpixel(x + 200, y + 200, GREEN);
    delay(1);
    putpixel(x + 200, -y + 200, GREEN);
    delay(1);
    putpixel(-x + 200, -y + 200, GREEN);
    delay(1);
    putpixel(-x + 200, y + 200, GREEN);
    delay(1);
}
void hyp(int a, int b)
{
    double p = (float)(1 / 4 + a) * (b * b) - (float)1 * (a * a);
    cout << p << "\n";
    int x = a, y = 0;
    putpixel(x + 200, y + 200, GREEN);
    while (y < (b * b) / (sqrt(a * a - b * b)))
    {
        if (p > 0)
        {
            p = p - (2 * y + 3) * (a * a);
            y = y + 1;
            draw(x, y);
        }
        else
        {
            p = p + (2 * (x + 1) * (b * b)) - (2 * y + 3) * (a * a);
            y = y + 1;
            x = x + 1;
            draw(x, y);
        }
        cout << p << "\n";
    }
    p = (x + 1) * (x + 1) * b * b - (y + 1 / 2) * (y + 1 / 2) * a * a - a * a * b * b;
    while (y < 300)
    {
        cout << "aa";
        if (p > 0)
        {
            p = p + (2 * x + 3) * b * b - a * a * (2 * (y + 1));
            y = y + 1;
            x = x + 1;
            draw(x, y);
        }
        else
        {
            p = p + (2 * x + 3) * b * b;
            x = x + 1;
            draw(x, y);
        }
    }
}
int main()
{
    initwindow(720, 720);
    int a = 40, b = 20;
    hyp(a, b);
    return 0;
}