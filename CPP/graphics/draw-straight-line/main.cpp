#include <graphics.h>
#include <math.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

void lineatangle(int x, int y, int length, int angle)
{
    double rad = (double)angle * M_PI / 180.0;
    line(x, y, x + length * cos(rad), y - length * sin(rad));
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");
    setbkcolor(GREEN);
    cleardevice();
    // line(50, 200, 50, 300);
    // line(50, 300, 150, 300);
    // line(150, 300, 50, 200);

    // line(100, 300, 273, 200);
    //  lineatangle(100, 300, 200, 30);

    // moveto(200, 200);
    // lineto(300, 250);
    // moveto(0, 0);
    // lineto(400, 250);

    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            linerel(0, 200);
        }
        else
        {
            linerel(100, 200);
            linerel(100, -100);
        }
    }

    getch();
    closegraph();
    return 0;
}