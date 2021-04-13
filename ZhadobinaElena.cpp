#include "TXLib.h"

void DrawBackground();
void DrawFence (int x, int y, double sizeX, double sizeY, COLORREF zaborColor);
void DrawSun   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF centreColor, COLORREF luchColor);
void DrawHouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF domColor, COLORREF roofColor, COLORREF windowColor);
void DrawWood  (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor);
void DrawCat   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor);
void DrawDog   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor);
void DrawMouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF eyasColor);

int main()
    {
    txCreateWindow (1000, 800);
    txClear();

    DrawBackground();

    DrawSun (100, 100, 1,   1,   1,   TX_YELLOW,   TX_RED);
    DrawSun (300, 100, 0.7, 0.7, 0.7, TX_RED,      TX_YELLOW);
    DrawSun (450, 100, 0.5, 0.5, 0.5, TX_LIGHTRED, TX_PINK);

    DrawHouse (650, 340, 1,   1,   1,   TX_ORANGE, TX_DARKGRAY, TX_LIGHTBLUE);
    DrawHouse (850, 620, 0.8, 0.8, 0.8, TX_CYAN,   TX_ORANGE,   TX_LIGHTBLUE);

    DrawFence (475, 450, 1.1, 1.1, TX_BROWN);
    DrawFence (385, 450, 1,   1,   TX_RED);
    DrawFence (305, 450, 0.7, 0.7, TX_YELLOW);

    DrawWood (900, 120, 1,   1,   1,   TX_BROWN, TX_LIGHTGREEN);
    DrawWood (150, 220, 0.7, 0.7, 0.7, TX_RED,   TX_YELLOW);

    DrawCat (100, 740, 0.9, 0.9, 0.9, TX_GRAY,      TX_BLACK);
    DrawCat (250, 740, 0.5, 0.5, 0.5, TX_LIGHTGRAY, TX_BLACK);
    DrawCat (350, 740, 0.4, 0.4, 0.4, TX_YELLOW,    TX_BLACK);

    DrawDog (650, 500, 0.8, 0.8, 0.8, TX_BROWN,  TX_BLACK);
    DrawDog (700, 700, 0.6, 0.6, 0.6, TX_ORANGE, TX_BLACK);

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

void DrawSun (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF centreColor, COLORREF luchColor)
    {
    txSetFillColor (centreColor);
    txCircle (x, y, 50*sizeR);

    txSetFillColor (luchColor);
    txCircle (x - 70*sizeX, y,            10*sizeR);
    txCircle (x + 70*sizeX, y,            10*sizeR);
    txCircle (x,            y + 70*sizeY, 10*sizeR);
    txCircle (x,            y - 70*sizeY, 10*sizeR);
    txCircle (x - 55*sizeX, y + 50*sizeY, 10*sizeR);
    txCircle (x - 55*sizeX, y - 55*sizeY, 10*sizeR);
    txCircle (x + 50*sizeX, y - 55*sizeY, 10*sizeR);
    txCircle (x + 50*sizeX, y + 50*sizeY, 10*sizeR);
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

void DrawWood (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (stvolColor);
    txRectangle (x, y, x + 40*sizeX, y + 300*sizeY);

    txSetColor     (TX_GREEN, 3);
    txSetFillColor (listColor);
    txCircle (x + 60*sizeX, y,             30*sizeR);
    txCircle (x - 30*sizeX, y + 100*sizeY, 30*sizeR);
    txCircle (x + 20*sizeX, y + 100*sizeY, 50*sizeR);
    txCircle (x - 30*sizeX, y + 50*sizeY,  50*sizeR);
    txCircle (x + 50*sizeX, y + 50*sizeY,  50*sizeR);
    txCircle (x + 20*sizeX, y,             50*sizeR);
    txCircle (x + 70*sizeX, y + 100*sizeY, 30*sizeR);
    txCircle (x - 30*sizeX, y,             30*sizeR);
    }

void DrawCat (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor)
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

    txLine (x + 5*sizeX,  y - 150*sizeY, x - 40*sizeX, y - 150*sizeY);
    txLine (x + 5*sizeX,  y - 150*sizeY, x - 40*sizeX, y - 160*sizeY);
    txLine (x + 5*sizeX,  y - 150*sizeY, x - 40*sizeX, y - 140*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + 80*sizeX, y - 150*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + 80*sizeX, y - 140*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + 80*sizeX, y - 160*sizeY);

    txSetFillColor (TX_PINK);
    txEllipse (x + 30*sizeX, y - 130*sizeY, x + 10*sizeX, y - 120*sizeY);

    txSetFillColor (teloColor);

    txEllipse (x - 70*sizeX,  y + 10*sizeY, x - 10*sizeX, y - 60*sizeY);
    txEllipse (x + 120*sizeX, y + 10*sizeY, x + 60*sizeX, y - 60*sizeY);

    txRectangle (x + 3*sizeX,  y - 60*sizeY, x + 20*sizeX, y);
    txRectangle (x + 33*sizeX, y,            x + 50*sizeX, y - 60*sizeY);

    txCircle (x + 10*sizeX, y, 15*sizeR);
    txCircle (x + 43*sizeX, y, 15*sizeR);
    }

void DrawDog (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor)
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (teloColor);

    txRectangle (x - 200*sizeX, y + 100*sizeY, x,             y);
    txRectangle (x - 180*sizeX, y - 100*sizeY, x - 100*sizeX, y - 40*sizeY);

    txLine (x - 180*sizeX, y + 120*sizeY, x - 130*sizeX, y + 120*sizeY);
    txLine (x - 130*sizeX, y + 120*sizeY, x - 155*sizeX, y + 80*sizeY);
    txLine (x - 155*sizeX, y + 80*sizeY,  x - 180*sizeX, y + 120*sizeY);

    txSetFillColor (elementyColor);

    txLine (x - 70*sizeX,  y + 120*sizeY, x - 20*sizeX,  y + 120*sizeY);
    txLine (x - 20*sizeX,  y + 120*sizeY, x - 45*sizeX,  y + 80*sizeY);
    txLine (x - 45*sizeX,  y + 80*sizeY,  x - 70*sizeX,  y + 120*sizeY);
    txLine (x - 200*sizeX, y,             x - 220*sizeX, y + 40*sizeY);
    txLine (x - 220*sizeX, y + 40*sizeY,  x - 250*sizeX, y + 50*sizeY);
    txLine (x - 250*sizeX, y + 50*sizeY,  x - 240*sizeX, y + 10*sizeY);
    txLine (x - 240*sizeX, y + 10*sizeY,  x - 200*sizeX, y);
    txLine (x - 80*sizeX,  y - 130*sizeY, x - 60*sizeX,  y - 170*sizeY);
    txLine (x - 60*sizeX,  y - 170*sizeY, x - 40*sizeX,  y - 130*sizeY);
    txLine (x - 40*sizeX,  y - 130*sizeY, x - 80*sizeX,  y - 130*sizeY);

    txFloodFill (x - 155*sizeX, y + 110*sizeY);
    txFloodFill (x - 155*sizeX, y + 85*sizeY);
    txFloodFill (x - 45*sizeX,  y + 110*sizeY);
    txFloodFill (x - 45*sizeX,  y + 85*sizeY);
    txFloodFill (x - 235*sizeX, y + 40*sizeY);
    txFloodFill (x - 60*sizeX,  y - 150*sizeY);

    txSetFillColor (teloColor);
    txCircle (x - 50*sizeX, y - 70*sizeY, 70*sizeR);

    txSetFillColor (TX_WHITE);
    txCircle (x - 70*sizeX, y - 95*sizeY, 20*sizeR);

    txSetFillColor (elementyColor);

    txCircle (x - 175*sizeX, y - 95*sizeY, 20*sizeR);
    txCircle (x - 80*sizeX,  y - 90*sizeY, 10*sizeR);

    txLine (x - 35*sizeX, y - 120*sizeY, x,            y - 115*sizeY);
    txLine (x,            y - 115*sizeY, x - 10*sizeX, y - 155*sizeY);
    txLine (x - 10*sizeX, y - 155*sizeY, x - 35*sizeX, y - 120*sizeY);

    txFloodFill (x - 10*sizeX, y - 130*sizeY);
    txFloodFill (x - 20*sizeX, y - 125*sizeY);

    txSetColor (TX_BLACK, 6);
    txLine (x - 115*sizeX, y - 40*sizeY, x - 180*sizeX, y - 20*sizeY);
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
