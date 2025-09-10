#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    circle(100, 200, 100);

    getch();
    closegraph();

    return 0;
}
