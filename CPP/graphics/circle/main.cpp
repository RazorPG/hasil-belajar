#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // setbkcolor(BLUE);
    // cleardevice();

    // circle(320, 240, 200);
    // circle(250, 200, 20);
    // circle(390, 200, 20);

    // // arc(320, 240, 45, 150, 200);
    // arc(320, 250, 180, 360, 100);
    /*
        // exsperiment 1
        for(int i = 0; i <= 360; i++){
            cleardevice();
            arc(320, 240, 0, i, 200);
            swapbuffers();
            delay(10);
        }
        */

    // exsperiment 2
    // for (int i = 0; i <= 360 * 10; i++)
    // {
    //     cleardevice();
    //     arc(320, 240, -i, 80 - i, 200);
    //     arc(320, 240, i, 80 + i, 170);
    //     swapbuffers();
    //     delay(10);
    // }

    // exsperiment 3
    for (int i = 0; i <= 360; i += 30)
    {
        for (int j = 0; j <= 360; j++)
        {
            cleardevice();
            arc(320, 240, i - j, i + j, 200);
            swapbuffers();
            delay(10);
        }
    }

    getch();
    closegraph();

    return 0;
}