#include "TXLib.h"

void DrawBackground();

void DrawFence (int x, int y, double sizeX, double sizeY, COLORREF zaborColor);

void DrawSun   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF centreColor, COLORREF luchColor,
                double luch, double eyes, double smile);

void DrawHouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF domColor, COLORREF roofColor, COLORREF windowColor);

void DrawWood  (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor,
                double stvol, double sheet);

void DrawCat   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor,
                double dlinausov, double usymove, double paws, double lips);

void DrawDog   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor,
                double head, double hvost, double rightuho, double leftuho, double eyes);

void DrawMouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF eyasColor);

int main()
    {
    txCreateWindow (1000, 800);
    txClear();

    DrawBackground();

    DrawSun (100, 100, 1,   1,   1,   TX_YELLOW, TX_RED,    0,   13, 15);
    DrawSun (300, 100, 0.7, 0.7, 0.7, TX_RED,    TX_YELLOW, 10,  0,  10);
    DrawSun (450, 100, 0.5, 0.5, 0.5, TX_YELLOW, TX_YELLOW, 0,  -10, 0);

    DrawHouse (650, 340, 1,   1,   1,   TX_ORANGE, TX_DARKGRAY, TX_LIGHTBLUE);
    DrawHouse (850, 620, 0.5, 0.5, 0.5, TX_CYAN,   TX_ORANGE,   TX_LIGHTBLUE);

    DrawFence (475, 450, 1.1, 1.1, TX_BROWN);
    DrawFence (385, 450, 1,   1,   TX_RED);
    DrawFence (305, 450, 0.7, 0.7, TX_YELLOW);

    DrawWood (900, 120, 1,   1,   1,   TX_BROWN, TX_LIGHTGREEN, 0,  0);
    DrawWood (150, 220, 0.7, 0.7, 0.7, TX_RED,   TX_YELLOW,     20, 30);

    DrawCat (100, 740, 0.9, 0.9, 0.9, TX_GRAY,      TX_BLACK, 30, -30, 90, 5);
    DrawCat (300, 740, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0,   0,  0,  0);

    DrawDog (650, 500, 0.8, 0.8, 0.8, TX_BROWN,  TX_BLACK, 0,   0,  0,  0,  0);
    DrawDog (700, 700, 0.6, 0.6, 0.6, TX_ORANGE, TX_BLACK, 260, 60, 60, 30, 30);

    DrawMouse (140, 450, 0.5, 0.5, 0.5, TX_YELLOW, TX_BLACK);
    DrawMouse (200, 450, 0.6, 0.6, 0.6, TX_RED,    TX_BLACK);
    DrawMouse (80,  430, 0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK);
    }

void DrawBackground()
    {
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 1000, 400);

    txSetFillColor (TX_GREEN);
    txRectangle (0, 400, 1000, 800);
    }

void DrawSun (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF centreColor, COLORREF luchColor,
              double luch, double eyes, double smile)
    {
    txSetFillColor (centreColor);
    txCircle (x, y, 50*sizeR);

    txSetFillColor (luchColor);
    txCircle (x - (70 + luch)*sizeX, y,                     10*sizeR);
    txCircle (x + (70 + luch)*sizeX, y,                     10*sizeR);
    txCircle (x,                     y + (70 + luch)*sizeY, 10*sizeR);
    txCircle (x,                     y - (70 + luch)*sizeY, 10*sizeR);
    txCircle (x - (55 - luch)*sizeX, y + (50 - luch)*sizeY, 10*sizeR);
    txCircle (x - (55 - luch)*sizeX, y - (55 - luch)*sizeY, 10*sizeR);
    txCircle (x + (50 - luch)*sizeX, y - (55 - luch)*sizeY, 10*sizeR);
    txCircle (x + (50 - luch)*sizeX, y + (50 - luch)*sizeY, 10*sizeR);

    txSetFillColor (TX_WHITE);
    txCircle (x - 20*sizeX, y - 10*sizeY, 15*sizeR);
    txCircle (x + 20*sizeX, y - 10*sizeY, 15*sizeR);

    txSetFillColor (TX_BLACK);
    txCircle (x - (20 - eyes)*sizeX, y - 10*sizeY, 7*sizeR);
    txCircle (x + (20 + eyes)*sizeX, y - 10*sizeY, 7*sizeR);

    txSetColor (TX_BLACK, 3);
    txLine (x - 20*sizeX, y + 20*sizeY,           x + 5*sizeX,  y + (30 - smile)*sizeY);
    txLine (x + 5*sizeX,  y + (30 - smile)*sizeY, x + 30*sizeX, y + 20*sizeY);
    }

void DrawHouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF domColor, COLORREF roofColor, COLORREF windowColor)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (domColor);
    txRectangle (x - 150*sizeX, y + 110*sizeY, x + 150*sizeX, y - 90*sizeY);

    txSetFillColor (windowColor);
    txRectangle (x + 20*sizeX, y - 40*sizeY, x + 100*sizeX, y + 40*sizeY);

    txLine (x + 60*sizeX,  y,             x + 100*sizeX, y);
    txLine (x + 60*sizeX,  y - 40*sizeY,  x + 60*sizeX,  y + 40*sizeY);
    txLine (x - 160*sizeX, y - 90*sizeY,  x + 160*sizeX, y - 90*sizeY);
    txLine (x + 160*sizeX, y - 90*sizeY,  x,             y - 240*sizeY);
    txLine (x,             y - 240*sizeY, x - 160*sizeX, y - 90*sizeY);

    txSetFillColor (roofColor);
    txFloodFill (x, y - 170*sizeY);

    txRectangle (x - 110*sizeX, y + 110*sizeY, x - 30*sizeX, y - 10*sizeY);

    txSetFillColor (TX_BLACK);
    txCircle (x - 50*sizeX, y + 60*sizeY, 5*sizeR);
    }

void DrawFence (int x, int y, double sizeX, double sizeY, COLORREF zaborColor)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (zaborColor);

    txRectangle (x + 20*sizeX, y, x - 20*sizeX, y - 120*sizeY);
    txRectangle (x - 20*sizeX, y, x - 60*sizeX, y - 120*sizeY);

    txLine (x + 20*sizeX, y - 120*sizeY, x,            y - 150*sizeY);
    txLine (x,            y - 150*sizeY, x - 20*sizeX, y - 120*sizeY);
    txLine (x - 20*sizeX, y - 120*sizeY, x - 40*sizeX, y - 150*sizeY);
    txLine (x - 40*sizeX, y - 150*sizeY, x - 60*sizeX, y - 120*sizeY);

    txFloodFill (x - 40*sizeX, y - 135*sizeY);
    txFloodFill (x,            y - 135*sizeY);
    }

void DrawWood (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor,
               double stvol, double sheet)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (stvolColor);
    txRectangle (x, y, x + (40 + stvol)*sizeX, y + 300*sizeY);

    txSetColor     (TX_GREEN, 3);
    txSetFillColor (listColor);
    txCircle (x + (60 - sheet)*sizeX, y,             30*sizeR);
    txCircle (x - (30 + sheet)*sizeX, y + 100*sizeY, 30*sizeR);
    txCircle (x + (20 - sheet)*sizeX, y + 100*sizeY, 50*sizeR);
    txCircle (x - (30 + sheet)*sizeX, y + 50*sizeY,  50*sizeR);
    txCircle (x + (50 - sheet)*sizeX, y + 50*sizeY,  50*sizeR);
    txCircle (x + (20 - sheet)*sizeX, y,             50*sizeR);
    txCircle (x + (70 - sheet)*sizeX, y + 100*sizeY, 30*sizeR);
    txCircle (x - (30 + sheet)*sizeX, y,             30*sizeR);
    }

void DrawCat (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor,
              double dlinausov, double usymove, double paws, double lips)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (teloColor);

    txLine (x - 50*sizeX,  y + 10*sizeY,  x + 100*sizeX, y + 10*sizeY);
    txLine (x + 100*sizeX, y + 10*sizeY,  x + 25*sizeX,  y - 190*sizeY);
    txLine (x + 25*sizeX,  y - 190*sizeY, x - 50*sizeX,  y + 10*sizeY);

    txCircle (x + 25*sizeX, y - 160*sizeY, 50*sizeR);
    txCircle (x + 25*sizeX, y - 160*sizeY, 50*sizeR);

    txLine (x - 20*sizeX, y - 180*sizeY, x - 20*sizeX, y - 240*sizeY);
    txLine (x - 20*sizeX, y - 240*sizeY, x + 10*sizeX, y - 210*sizeY);
    txLine (x + 70*sizeX, y - 180*sizeY, x + 70*sizeX, y - 240*sizeY);
    txLine (x + 70*sizeX, y - 240*sizeY, x + 40*sizeX, y - 210*sizeY);

    txFloodFill (x - 10*sizeX, y - 220*sizeY);
    txFloodFill (x + 10*sizeX, y - 40*sizeY);
    txFloodFill (x + 60*sizeX, y - 200*sizeY);

    txSetFillColor (mordochkaColor);

    txCircle (x,            y - 170*sizeY, 5*sizeR);
    txCircle (x + 40*sizeX, y - 170*sizeY, 5*sizeR);
    txCircle (x + 20*sizeX, y - 150*sizeY, 5*sizeR);

    txLine (x + 5*sizeX,  y - 150*sizeY, x - (40 + dlinausov)*sizeX, y - (150 + usymove)*sizeY);
    txLine (x + 5*sizeX,  y - 150*sizeY, x - (40 + dlinausov)*sizeX, y - (160 + usymove)*sizeY);
    txLine (x + 5*sizeX,  y - 150*sizeY, x - (40 + dlinausov)*sizeX, y - (140 + usymove)*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + (80 + dlinausov)*sizeX, y - (150 + usymove)*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + (80 + dlinausov)*sizeX, y - (140 + usymove)*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + (80 + dlinausov)*sizeX, y - (160 + usymove)*sizeY);

    txSetFillColor (TX_PINK);
    txEllipse (x + (30 + lips)*sizeX, y - (130 + lips)*sizeY, x + (15 - lips)*sizeX, y - (125 - lips)*sizeY);

    txSetFillColor (teloColor);

    txEllipse (x - 70*sizeX,  y + 10*sizeY, x - 10*sizeX, y - 60*sizeY);
    txEllipse (x + 120*sizeX, y + 10*sizeY, x + 60*sizeX, y - 60*sizeY);

    txLine (x - 15*sizeX,          y - 80*sizeY,          x + (10 - paws)*sizeX, y - (15 + paws)*sizeY);
    txLine (x + (40 + paws)*sizeX, y - (15 + paws)*sizeY, x + 65*sizeX,          y - 80*sizeY);

    txCircle (x + (5 - paws)*sizeX,  y - paws, 15*sizeR);
    txCircle (x + (45 + paws)*sizeX, y - paws, 15*sizeR);
    }

void DrawDog (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor,
              double head, double hvost, double rightuho, double leftuho, double eyes)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (teloColor);

    txRectangle (x - 200*sizeX,          y + 100*sizeY, x,            y);
    txRectangle (x - (180 - head)*sizeX, y - 100*sizeY, x - 50*sizeX, y - 40*sizeY);

    txSetFillColor (elementyColor);

    txLine (x - 180*sizeX, y + 120*sizeY, x - 130*sizeX, y + 120*sizeY);
    txLine (x - 130*sizeX, y + 120*sizeY, x - 155*sizeX, y + 80*sizeY);
    txLine (x - 155*sizeX, y + 80*sizeY,  x - 180*sizeX, y + 120*sizeY);

    txLine (x - 70*sizeX,  y + 120*sizeY, x - 20*sizeX,  y + 120*sizeY);
    txLine (x - 20*sizeX,  y + 120*sizeY, x - 45*sizeX,  y + 80*sizeY);
    txLine (x - 45*sizeX,  y + 80*sizeY,  x - 70*sizeX,  y + 120*sizeY);

    txLine (x - 200*sizeX,             y,                        x - (220 + hvost)*sizeX,   y + (40 - hvost)*sizeY);
    txLine (x - (220 + hvost)*sizeX,   y + (40 - hvost)*sizeY,   x - (250 + hvost)*sizeX,   y + (50 - hvost*2)*sizeY);
    txLine (x - (250 + hvost)*sizeX,   y + (50 - hvost*2)*sizeY, x - (240 - hvost/2)*sizeX, y + (10 - hvost)*sizeY);
    txLine (x - (240 - hvost/2)*sizeX, y + (10 - hvost)*sizeY,   x - 200*sizeX,             y);

    txLine (x - (80 - leftuho)*sizeX, y - 130*sizeY, x - (60 - leftuho)*sizeX, y - 170*sizeY);
    txLine (x - (60 - leftuho)*sizeX, y - 170*sizeY, x - (40 - leftuho)*sizeX, y - 130*sizeY);
    txLine (x - (40 - leftuho)*sizeX, y - 130*sizeY, x - (80 - leftuho)*sizeX, y - 130*sizeY);

    txFloodFill (x - 155*sizeX, y + 110*sizeY);
    txFloodFill (x - 155*sizeX, y + 85*sizeY);
    txFloodFill (x - 45*sizeX,  y + 110*sizeY);
    txFloodFill (x - 45*sizeX,  y + 85*sizeY);

    txFloodFill (x - (240 - hvost/2)*sizeX, y + (40 - hvost)*sizeY);
    txFloodFill (x - (60 - leftuho)*sizeX,  y - 150*sizeY);

    txSetColor (TX_BLACK, 6);
    txLine (x - 50*sizeX, y - 50*sizeY, x - (180 - head)*sizeX, y - 20*sizeY);

    txSetColor     (TX_BLACK, 3);
    txSetFillColor (teloColor);
    txCircle (x - 50*sizeX, y - 70*sizeY, 70*sizeR);

    txSetFillColor (TX_WHITE);
    txCircle (x - (70 - eyes)*sizeX, y - 95*sizeY, 20*sizeR);

    txSetFillColor (elementyColor);

    txCircle (x - (175 - head)*sizeX, y - 95*sizeY, 20*sizeR);
    txCircle (x - (80 - eyes)*sizeX,  y - 90*sizeY, 10*sizeR);

    txLine (x - (40 + rightuho/4)*sizeX, y - 120*sizeY, x - rightuho,                y - 120*sizeY);
    txLine (x - rightuho,                y - 120*sizeY, x - (20 + rightuho)*sizeX,   y - 160*sizeY);
    txLine (x - (20 + rightuho)*sizeX,   y - 160*sizeY, x - (40 + rightuho/4)*sizeX, y - 120*sizeY);

    txFloodFill (x - (10 + rightuho)*sizeX, y - 130*sizeY);
    txFloodFill (x - (30 + rightuho)*sizeX, y - 130*sizeY);
    }

void DrawMouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF eyasColor)
    {
    txSetColor     (TX_BLACK, 2);
    txSetFillColor (teloColor);

    txPie (x - 40*sizeX, y + 40*sizeY, x + 40*sizeX, y + 110*sizeY, 0, 180);

    txLine (x + 30*sizeX, y + 75*sizeY,  x + 40*sizeX, y + 90*sizeY);
    txLine (x + 40*sizeX, y + 90*sizeY,  x + 30*sizeX, y + 110*sizeY);
    txLine (x + 30*sizeX, y + 110*sizeY, x + 50*sizeX, y + 125*sizeY);
    txLine (x,            y + 30*sizeY,  x - 40*sizeY, y + 55*sizeY);
    txLine (x - 40*sizeX, y + 55*sizeY,  x - 30*sizeX, y + 5*sizeY);
    txLine (x - 30*sizeX, y + 5*sizeY,   x,            y + 30*sizeY);

    txCircle (x - 30*sizeX, y + 5*sizeY,  10*sizeR);
    txCircle (x,            y + 30*sizeY, 10*sizeR);

    txFloodFill (x - 20*sizeX, y + 40*sizeY);

    txSetFillColor (eyasColor);
    txCircle (x - 25*sizeX, y + 20*sizeY, 3*sizeR);
    txCircle (x - 15*sizeX, y + 27*sizeY, 3*sizeR);
    }
