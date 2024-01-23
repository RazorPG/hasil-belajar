#include <graphics.h>
#include <iostream>
#include <math.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

void rectangleRotate(int cx, int cy, int w, int h, int angle = 0)
{
    double theta = (double)(angle % 180) * M_PI / 180.0;
    int dx = w / 2;
    int dy = h / 2;
    int point[8] = {
        (int)(-dx * cos(theta) - dy * sin(theta) + cx),
        (int)(-dx * sin(theta) + dy * cos(theta) + cy),
        (int)(dx * cos(theta) - dy * sin(theta) + cx),
        (int)(dx * sin(theta) + dy * cos(theta) + cy),
        (int)(dx * cos(theta) + dy * sin(theta) + cx),
        (int)(dx * sin(theta) - dy * cos(theta) + cy),
        (int)(-dx * cos(theta) + dy * sin(theta) + cx),
        (int)(-dx * sin(theta) - dy * cos(theta) + cy)};

    for (int i = 0; i < 8; i += 2)
    {
        line(point[i], point[i + 1], point[(i + 2) % 8], point[(i + 3) % 8]);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    // rectangleRotate(320, 240, 200, 100, 50);

    for (int i = 0; i <= 20 * 360; i++)
    {
        cleardevice();
        rectangleRotate(320, 240, 200, 200, i);
        swapbuffers();
        delay(5);
    }
    getch();
    closegraph();
    return 0;
}