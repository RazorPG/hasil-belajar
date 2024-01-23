#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    setbkcolor(BLUE);
    cleardevice();

    rectangle(100, 400, 200, 500);

    getch();
    closegraph();
    return 0;
}