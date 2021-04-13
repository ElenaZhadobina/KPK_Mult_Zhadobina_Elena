#include "TXLib.h"

void DrawBackground();
void DrawSun   (int x, int y);
void DrawHouse (int x, int y);
void DrawFence (int x, int y);
void DrawWood  (int x, int y);
void DrawCat   (int x, int y);
void DrawDog   (int x, int y);
void DrawMouse (int x, int y);

int main()
    {
    txCreateWindow (1000, 800);
    txClear();

    DrawBackground();

    DrawSun (100, 100);
    DrawSun (800, 100);

    DrawHouse (650, 340);

    DrawFence (480, 450);
    DrawFence (400, 450);
    DrawFence (320, 450);

    DrawWood (900, 200);
    DrawWood (200, 200);

    DrawCat (350, 740);
    DrawCat (100, 740);

    DrawDog (800, 650);

    DrawMouse (140, 400);
    DrawMouse (900, 600);
    DrawMouse (900, 500);
    }

void DrawBackground()
    {
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 1000, 400);

    txSetFillColor (TX_GREEN);
    txRectangle (0, 400, 1000, 800);
    }

void DrawSun (int x, int y)
    {
    txSetFillColor (TX_YELLOW);
    txCircle (x,    y,    50);
    txCircle (x-70, y,    10);
    txCircle (x+70, y,    10);
    txCircle (x,    y+70, 10);
    txCircle (x,    y-70, 10);
    txCircle (x-55, y+50, 10);
    txCircle (x-55, y-55, 10);
    txCircle (x+50, y-55, 10);
    txCircle (x+50, y+50, 10);
    }

void DrawHouse (int x, int y)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (TX_ORANGE);
    txRectangle (x-150, y+110, x+150, y-90);

    txSetFillColor (TX_LIGHTBLUE);

    txRectangle (x+20, y-40, x+100, y+40);

    txLine (x+60,  y,     x+100, y);
    txLine (x+60,  y-40,  x+60,  y+40);
    txLine (x-160, y-90,  x+160, y-90);
    txLine (x+160, y-90,  x,     y-240);
    txLine (x,     y-240, x-160, y-90);

    txSetFillColor (TX_DARKGRAY);
    txFloodFill (x, y-170);
    txRectangle (x-110, y+110, x-30, y-10);

    txSetFillColor (TX_BLACK);
    txCircle (x-50, y+60, 5);
    }

void DrawFence (int x, int y)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);

    txRectangle (x+20, y, x-20, y-120);
    txRectangle (x-20, y, x-60, y-120);

    txLine (x+20, y-120, x,    y-150);
    txLine (x,    y-150, x-20, y-120);
    txLine (x-20, y-120, x-40, y-150);
    txLine (x-40, y-150, x-60, y-120);

    txFloodFill (x-40, y-135);
    txFloodFill (x,    y-135);
    }

void DrawWood (int x, int y)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);
    txRectangle (x, y, x+40, y+300);

    txSetColor     (TX_GREEN, 3);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (x+60, y,     30);
    txCircle (x-30, y+100, 30);
    txCircle (x+20, y+100, 50);
    txCircle (x-30, y+50,  50);
    txCircle (x+50, y+50,  50);
    txCircle (x+20, y,     50);
    txCircle (x+70, y+100, 30);
    txCircle (x-30, y,     30);
    }

void DrawCat (int x, int y)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (TX_GRAY);

    txLine (x-50,  y+10,  x+100, y+10);
    txLine (x+100, y+10,  x+25,  y-190);
    txLine (x+25,  y-190, x-50,  y+10);

    txCircle (x+25, y-160, 50);
    txCircle (x+25, y-160, 50);

    txLine (x-20, y-180, x-20, y-240);
    txLine (x-20, y-240, x+10, y-210);
    txLine (x+70, y-180, x+70, y-240);
    txLine (x+70, y-240, x+40, y-210);

    txFloodFill (x-10, y-220);
    txFloodFill (x+10, y-40);
    txFloodFill (x+60, y-200);

    txSetFillColor (TX_BLACK);

    txCircle (x,    y-170, 5);
    txCircle (x+40, y-170, 5);
    txCircle (x+20, y-150, 5);

    txLine (x+5,  y-150, x-40, y-150);
    txLine (x+5,  y-150, x-40, y-160);
    txLine (x+5,  y-150, x-40, y-140);
    txLine (x+35, y-150, x+80, y-150);
    txLine (x+35, y-150, x+80, y-140);
    txLine (x+35, y-150, x+80, y-160);

    txSetFillColor (TX_PINK);
    txEllipse (x+30, y-130, x+10, y-120);

    txSetFillColor (TX_GRAY);

    txEllipse (x-70,  y+10, x-10, y-60);
    txEllipse (x+120, y+10, x+60, y-60);

    txRectangle (x+3,  y-60, x+20, y);
    txRectangle (x+33, y,    x+50, y-60);

    txCircle (x+10, y, 15);
    txCircle (x+43, y, 15);
    }

void DrawDog (int x, int y)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);

    txRectangle (x-200, y+100, x,     y);
    txRectangle (x-180, y-100, x-100, y-40);

    txLine (x-180, y+120, x-130, y+120);
    txLine (x-130, y+120, x-155, y+80);
    txLine (x-155, y+80,  x-180, y+120);

    txSetFillColor (TX_BLACK);

    txLine (x-70,  y+120, x-20,  y+120);
    txLine (x-20,  y+120, x-45,  y+80);
    txLine (x-45,  y+80,  x-70,  y+120);
    txLine (x-200, y,     x-220, y+40);
    txLine (x-220, y+40,  x-250, y+50);
    txLine (x-250, y+50,  x-240, y+10);
    txLine (x-240, y+10,  x-200, y);
    txLine (x-80,  y-130, x-60,  y-170);
    txLine (x-60,  y-170, x-40,  y-130);
    txLine (x-40,  y-130, x-80,  y-130);

    txFloodFill (x-155, y+110);
    txFloodFill (x-155, y+85);
    txFloodFill (x-45,  y+110);
    txFloodFill (x-45,  y+85);
    txFloodFill (x-235, y+40);
    txFloodFill (x-60,  y-150);

    txSetFillColor (TX_BROWN);
    txCircle (x-50, y-70, 70);

    txSetFillColor (TX_WHITE);
    txCircle (x-70, y-95, 20);

    txSetFillColor (TX_BLACK);

    txCircle (x-175, y-95, 20);
    txCircle (x-80,  y-90, 10);

    txLine (x-35, y-120, x,    y-115);
    txLine (x,    y-115, x-10, y-155);
    txLine (x-10, y-155, x-35, y-120);

    txFloodFill (x-10, y-130);
    txFloodFill (x-20, y-125);

    txSetColor (TX_BLACK, 6);
    txLine (x-115, y-40, x-180, y-20);
    }

void DrawMouse (int x, int y)
    {
    txSetColor     (TX_BLACK, 2);
    txSetFillColor (TX_YELLOW);

    txPie (x-40, y+40, x+40, y+110, 0, 180);

    txLine (x+30, y+75,  x+40, y+90);
    txLine (x+40, y+90,  x+30, y+110);
    txLine (x+30, y+110, x+50, y+125);
    txLine (x,    y+30,  x-40, y+55);
    txLine (x-40, y+55,  x-30, y+5);
    txLine (x-30, y+5,   x,    y+30);

    txCircle (x-30, y+5,  10);
    txCircle (x,    y+30, 10);

    txFloodFill (x-20, y+40);

    txSetFillColor (TX_BLACK);
    txCircle (x-25, y+20, 3);
    txCircle (x-15, y+27, 3);
    }
