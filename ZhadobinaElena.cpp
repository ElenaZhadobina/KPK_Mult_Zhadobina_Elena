//{===========================================================================
//! @file       ZhadobinaElena.cpp
//!
//! @brief      Мультфильм "Нашествие грызунов".
//!
//!             Пример создания мультфильма с помощью TXLib.
//!             КПК по С++ от МФТИ.
//!
//!             $Date: 2021-04-14 $
//!             $Copyright: (C) mordovina174 (Жадобина Елена Владимировна) <mordovina174@gmail.com> $
//          (C) Жадобина Елена, г.Магнитогорск, 2021
//}===========================================================================

#include "TXLib.h"

void DrawBackground (COLORREF skyColor, COLORREF GruntColor);

void DrawFence (int x, int y, double sizeX, double sizeY, COLORREF zaborColor);

void DrawSun   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF centreColor, COLORREF luchColor,
                double luch, double eyes, double smile);

void DrawHouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF domColor, COLORREF roofColor, COLORREF windowColor);

void DrawWood  (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor,
                double stvol, double sheet);

void DrawCat   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor,
                double dlinausov, double usymove, double paws, double lips);

void DrawDog   (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor,
                double head, double past, double hvost, double uho, double eyes, double lapy);

void DrawMouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF eyasColor,
                double head, double hvost, double telo);

void StartTitles();
void Rassvet();
void Nashestvie();
void Pobeda();
void FinishTitles();

int main()
    {
    txCreateWindow (1000, 1000);

    txBegin();

    StartTitles();
    Rassvet();
    Nashestvie();
    Pobeda();
    FinishTitles();

    txEnd();

    return 0;
    }

void StartTitles()
    {
    int t = 0;
    while (t <= 50)
        {
        txClear();
        txSetFillColor (RGB(0 + t*10, 128 + t, 0 + t*15));
        txSetColor (TX_YELLOW);

        txSelectFont ("Arial Black", 150);
        txTextOut (-450 + t*10, 300, "НАШЕСТВИЕ");

        txSelectFont ("Arial Black", 130);
        txTextOut (1100 - t*15, 500, "ГРЫЗУНОВ");
        txSleep (50);
        t++;
        }

    txSleep (2000);
    }

void Rassvet()
    {
    txBegin();

        for (int t = 1; t <= 130; t += 20)
        {
        DrawBackground (RGB (0, 0 + t*2, 128 + t), RGB (0, 128 + t, 0 + t));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (0, 0, 255));
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, 0);
        txSleep (800);
        }

    int x = 800;
    while (x >= 100)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (0, 0, 255));
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, x%2);
        DrawSun   (  x, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, x%10, 8, x%10);
        txSleep (300);
        x -= 55;
        }

    DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (255, 255, 128));
    txSleep (1000);

    for (int paws = 1; paws <= 50; paws += 3)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_BLACK, RGB(255, 255, 128));
        DrawSun   (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, paws%5, 8, paws%10);
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, paws%2);
        DrawCat   (600 - paws*2, 550 + paws*2, 0.3 + paws*0.01, 0.3 + paws*0.01, 0.3 + paws*0.01, TX_LIGHTGRAY, TX_BLACK, 0, 0, paws*2, paws/10);
        DrawDog   ( 50 + paws*5, 700, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 260 + paws%10, paws%2, paws%10, 100, 30, paws%10);
        txSleep   (200);
        }

    txSetColor (TX_WHITE);
    txSelectFont ("Arial Black", 30);
    txTextOut (570, 500, "Отличный день!");
    txSleep (2000);
    txSelectFont ("Arial Black", 30);
    txTextOut (350, 700, "Никто не сможет испортить настроение!");
    txSleep (2000);
    txEnd();
    }

void Nashestvie()
    {
    txBegin();

    for (int t = 20; t <= 500; t += 25)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));

        DrawMouse (100 + t,    450 + t,   0.7, 0.7, 0.7, TX_YELLOW, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (500 - t*2,  400 + t,   0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (400 + t,   1000 - t,   0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (100 + t*2,  430 + t,   0.7, 0.7, 0.7, TX_YELLOW, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (300 - t,    900 - t*2, 0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK, t%10, t%10, t%10);

        DrawHouse (650, 340, 1,   1,   1,   TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));
        DrawWood  (900, 120, 1,   1,   1,   TX_BROWN, TX_LIGHTGREEN, 0, t%2);
        DrawSun   (100, 100, 1,   1,   1,   TX_YELLOW, TX_YELLOW, 0, 8, 10);
        DrawDog   (250, 700, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 260, 0, t%10, 100, 30, t%10);
        DrawCat   (460, 750, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0 + t%3, 110 + t%2, 0 + t%10);

        txSetColor (TX_WHITE);
        txSelectFont ("Arial Black", 30);
        txTextOut (550, 600, "Мыши!");

        txSleep   (500);
        }

    txEnd();
    }

void Pobeda()
    {
    txBegin();

    for (int t = 10; t <= 100; t += 15)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));

        DrawHouse (650, 340, 1,   1,   1,   TX_ORANGE,    TX_DARKGRAY, RGB(255, 255, 128));
        DrawWood  (900, 120, 1,   1,   1,   TX_BROWN,     TX_LIGHTGREEN, 0, t%2);
        DrawSun   (100, 100, 1,   1,   1,   TX_YELLOW,    TX_YELLOW, 0, 8, 20);
        DrawDog   (250, 700, 0.8, 0.8, 0.8, TX_BROWN,     TX_BLACK, 260 + t%10, 0, t%10, 100, 30, 0);
        DrawCat   (460, 750, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0, 0, 0);

        txSetColor (TX_WHITE);
        txSelectFont ("Arial Black", 30);
        txTextOut (150, 550, "Строим защиту!");
        txSleep (300);
        }

    for (int y = 10; y <= 300; y += 15)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));

        DrawHouse (650,     340,     1,   1,   1,   TX_ORANGE,    TX_DARKGRAY, RGB(255, 255, 128));
        DrawWood  (900,     120,     1,   1,   1,   TX_BROWN,     TX_LIGHTGREEN, 0, 0);
        DrawSun   (100,     100,     1,   1,   1,   TX_YELLOW,    TX_YELLOW, 0, 8, 20);
        DrawDog   (250 + y, 700 - y, 0.8, 0.8, 0.8, TX_BROWN,     TX_BLACK, 260, y%10, y%10, 100, 30, 0);
        DrawCat   (460 + y, 750 - y, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, y%10, y%10, y%10, 0);
        txSleep   (150);
        }

    txSleep (1000);

    for (int y = 10; y <= 300; y += 15)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));
        DrawSun   (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, 0, 8, 20);
        DrawFence (480 - y, 450, 1, 1, TX_BROWN);
        DrawFence (100 + y, 450, 1, 1, TX_BROWN);
        txSleep   (200);
        }

    txSetColor (TX_BLACK);
    txSelectFont ("Arial Black", 60);
    txTextOut (350, 550, "Некоторое время спустя...");
    txSleep (1500);

    for (int paws = 1; paws <= 120; paws += 3)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));

        DrawFence ( 480, 450, 1, 1, TX_BROWN);
        DrawFence ( 400, 450, 1, 1, TX_BROWN);
        DrawFence ( 320, 450, 1, 1, TX_BROWN);
        DrawFence ( 240, 450, 1, 1, TX_BROWN);
        DrawFence ( 160, 450, 1, 1, TX_BROWN);
        DrawFence (  80, 450, 1, 1, TX_BROWN);
        DrawFence (   0, 450, 1, 1, TX_BROWN);
        DrawFence ( 860, 450, 1, 1, TX_BROWN);
        DrawFence ( 940, 450, 1, 1, TX_BROWN);
        DrawFence (1020, 450, 1, 1, TX_BROWN);

        DrawSun  (100,        100,        1,   1,   1,   TX_YELLOW, TX_YELLOW, paws%5, 8, paws%10);
        DrawCat  (600 - paws, 550 + paws, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0, paws, paws/15);
        DrawDog  (750 + paws, 550 + paws, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 0, paws%2, paws%10, 0, 0, paws%10);
        DrawWood (100,        300,        1,   1,   1,   TX_BROWN, RGB(0, 150, 0), 0, paws%2);
        DrawWood (150,        500,        1,   1,   1,   TX_BROWN, RGB(0, 150, 0), 0, paws%2);
        DrawWood (250,        400,        1,   1,   1,   TX_BROWN, RGB(0, 150, 0), 0, paws%2);

        txSleep (150);
        }

    txSetColor (TX_WHITE);
    txSelectFont ("Arial Black", 30);
    txTextOut (480, 550, "УРА!");
    txSleep (2000);

    txEnd();
    }

void FinishTitles()
    {
    int t = 0;
    while (t <= 400)
        {
        txClear();
        txSetFillColor (TX_BLACK);
        txSetColor (TX_WHITE);
        txSelectFont ("Arial Black", 70);
        txTextOut (200, 1000 - t*2, "Мультфильм подготовила");
        txTextOut (290, 1050 - t*2, "Жадобина Елена");
        txTextOut (300, 1100 - t*2, "г. Магнитогорск");
        txTextOut (320, 1150 - t*2, "МАОУ МЛ №1");
        txSleep (100);
        t+= 5;
        }

    txSleep (2000);
    txClear();
    }


void DrawBackground (COLORREF SkyColor, COLORREF GruntColor)
    {
    txSetFillColor (SkyColor);
    txRectangle (0, 0, 1000, 400);

    txSetFillColor (GruntColor);
    txRectangle (0, 400, 1000, 1000);
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
    txLine (x - 20*sizeX,  y + 20*sizeY,           x +  5*sizeX,  y + (30 - smile)*sizeY);
    txLine (x +  5*sizeX,  y + (30 - smile)*sizeY, x + 30*sizeX,  y + 20*sizeY);
    }

void DrawHouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF domColor, COLORREF roofColor, COLORREF WindowColor)
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (domColor);

    txRectangle (x - 150*sizeX, y + 110*sizeY, x + 150*sizeX, y - 90*sizeY);

    txSetFillColor (WindowColor);
    txRectangle (x + 20*sizeX, y - 40*sizeY, x + 100*sizeX, y + 40*sizeY);

    txLine (x +  60*sizeX, y,             x + 100*sizeX, y);
    txLine (x +  60*sizeX, y -  40*sizeY, x +  60*sizeX, y +  40*sizeY);
    txLine (x - 160*sizeX, y -  90*sizeY, x + 160*sizeX, y -  90*sizeY);
    txLine (x + 160*sizeX, y -  90*sizeY, x,             y - 240*sizeY);
    txLine (x,             y - 240*sizeY, x - 160*sizeX, y -  90*sizeY);

    txSetFillColor (TX_GRAY);
    txFloodFill (x, y - 170*sizeY);

    txSetFillColor (roofColor);
    txRectangle (x - 110*sizeX, y + 110*sizeY, x - 30*sizeX, y - 10*sizeY);

    txSetFillColor (TX_BLACK);
    txCircle (x - 50*sizeX, y + 60*sizeY, 5*sizeR);
    }

void DrawFence (int x, int y, double sizeX, double sizeY, COLORREF zaborColor)
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (zaborColor);

    txRectangle (x + 20*sizeX, y, x - 20*sizeX, y - 120*sizeY);
    txRectangle (x - 20*sizeX, y, x - 60*sizeX, y - 120*sizeY);

    POINT Verhushka [3] = {{ROUND (x + 20*sizeX), ROUND (y - 120*sizeY)},
                           {ROUND (x),            ROUND (y - 150*sizeY)},
                           {ROUND (x - 20*sizeX), ROUND (y - 120*sizeY)}};
    txPolygon (Verhushka, 3);

    POINT Verh [3] = {{ROUND (x - 20*sizeX), ROUND (y - 120*sizeY)},
                      {ROUND (x - 40*sizeX), ROUND (y - 150*sizeY)},
                      {ROUND (x - 60*sizeX), ROUND (y - 120*sizeY)}};
    txPolygon (Verh, 3);
    }

void DrawWood (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor,
               double stvol, double sheet)
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (stvolColor);

    txRectangle (x, y, x + (40 + stvol)*sizeX, y + 300*sizeY);

    txSetColor (TX_GREEN, 3);
    txSetFillColor (listColor);

    txCircle (x + (60 - sheet*4)*sizeX, y + sheet,               30*sizeR);
    txCircle (x - (30 + sheet*4)*sizeX, y + (100+ sheet)*sizeY,  30*sizeR);
    txCircle (x + (20 - sheet)*sizeX,   y + 100*sizeY,           50*sizeR);
    txCircle (x - (30 + sheet)*sizeX,   y + 50*sizeY,            50*sizeR);
    txCircle (x + (50 - sheet)*sizeX,   y + 50*sizeY,            50*sizeR);
    txCircle (x + (20 - sheet)*sizeX,   y,                       50*sizeR);
    txCircle (x + (70 - sheet*4)*sizeX, y + (100 + sheet)*sizeY, 30*sizeR);
    txCircle (x - (30 + sheet*4)*sizeX, y + sheet,               30*sizeR);
    }

void DrawCat (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor,
              double dlinausov, double usymove, double paws, double lips)
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (teloColor);

    POINT Telo [3] = {{ROUND (x -  50*sizeX), ROUND (y +  10*sizeY)},
                      {ROUND (x + 100*sizeX), ROUND (y +  10*sizeY)},
                      {ROUND (x +  25*sizeX), ROUND (y - 190*sizeY)}};
    txPolygon (Telo, 3);

    txCircle (x + 25*sizeX, y - 160*sizeY, 50*sizeR);
    txCircle (x + 25*sizeX, y - 160*sizeY, 50*sizeR);

    POINT LeftUho [3] = {{ROUND (x - 20*sizeX), ROUND (y - 180*sizeY)},
                         {ROUND (x - 20*sizeX), ROUND (y - 240*sizeY)},
                         {ROUND (x + 10*sizeX), ROUND (y - 210*sizeY)}};
    txPolygon (LeftUho, 3);

    POINT RightUho [3] = {{ROUND (x + 70*sizeX), ROUND (y - 180*sizeY)},
                          {ROUND (x + 70*sizeX), ROUND (y - 240*sizeY)},
                          {ROUND (x + 40*sizeX), ROUND (y - 210*sizeY)}};
    txPolygon (RightUho, 3);

    txSetFillColor (mordochkaColor);

    txCircle (x,            y - 170*sizeY, 5*sizeR);
    txCircle (x + 40*sizeX, y - 170*sizeY, 5*sizeR);
    txCircle (x + 20*sizeX, y - 150*sizeY, 5*sizeR);

    txLine (x +  5*sizeX, y - 150*sizeY, x - (40 + dlinausov)*sizeX, y - (150 + usymove)*sizeY);
    txLine (x +  5*sizeX, y - 150*sizeY, x - (40 + dlinausov)*sizeX, y - (160 + usymove)*sizeY);
    txLine (x +  5*sizeX, y - 150*sizeY, x - (40 + dlinausov)*sizeX, y - (140 + usymove)*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + (80 + dlinausov)*sizeX, y - (150 + usymove)*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + (80 + dlinausov)*sizeX, y - (140 + usymove)*sizeY);
    txLine (x + 35*sizeX, y - 150*sizeY, x + (80 + dlinausov)*sizeX, y - (160 + usymove)*sizeY);

    txSetFillColor (TX_PINK);

    txEllipse (x + (30 + lips)*sizeX, y - (130 + lips)*sizeY, x + (15 - lips)*sizeX, y - (125 - lips)*sizeY);

    txSetFillColor (teloColor);

    txEllipse (x -  70*sizeX, y + 10*sizeY, x - 10*sizeX, y - 60*sizeY);
    txEllipse (x + 120*sizeX, y + 10*sizeY, x + 60*sizeX, y - 60*sizeY);

    txLine (x - 15*sizeX,          y - 80*sizeY,          x + (10 - paws)*sizeX, y - (15 + paws)*sizeY);
    txLine (x + (40 + paws)*sizeX, y - (15 + paws)*sizeY, x + 65*sizeX,          y - 80*sizeY);

    txCircle (x + ( 5 - paws)*sizeX, y - paws, 15*sizeR);
    txCircle (x + (45 + paws)*sizeX, y - paws, 15*sizeR);
    }

void DrawDog (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor,
              double head, double past, double hvost, double uho, double eyes, double lapy)
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (teloColor);

    txRectangle (x - 200*sizeX,          y + 100*sizeY, x,            y);
    txRectangle (x - (180 - head)*sizeX, y - 100*sizeY, x - 50*sizeX, y - 40*sizeY);

    txSetFillColor (elementyColor);

    POINT LeftLapa [3] = {{ROUND (x - 180*sizeX), ROUND (y + (120 + lapy)*sizeY)},
                          {ROUND (x - 130*sizeX), ROUND (y + (120 + lapy)*sizeY)},
                          {ROUND (x - 155*sizeX), ROUND (y + ( 80 + lapy)*sizeY)}};
    txPolygon (LeftLapa, 3);

    POINT RightLapa [3] = {{ROUND (x - 70*sizeX), ROUND (y + (120 + lapy)*sizeY)},
                           {ROUND (x - 20*sizeX), ROUND (y + (120 + lapy)*sizeY)},
                           {ROUND (x - 45*sizeX), ROUND (y + ( 80 + lapy)*sizeY)}};
    txPolygon (RightLapa, 3);

    POINT Hvost [4] = {{ROUND (x - 200*sizeX),             ROUND (y)},
                       {ROUND (x - (220 + hvost)*sizeX),   ROUND (y + (40 - hvost)*sizeY)},
                       {ROUND (x - (250 + hvost)*sizeX),   ROUND (y + (50 - hvost*2)*sizeY)},
                       {ROUND (x - (240 - hvost/2)*sizeX), ROUND (y + (10 - hvost)*sizeY)}};
    txPolygon (Hvost, 4);

    txSetColor (TX_BLACK, 6);
    txLine (x - 50*sizeX, y - 50*sizeY, x - (180 - head)*sizeX, y - (20 + past)*sizeY);

    txSetColor (TX_BLACK, 3);
    txSetFillColor (teloColor);
    txCircle (x - 50*sizeX, y - 70*sizeY, 70*sizeR);

    txSetFillColor (elementyColor);
    POINT Uho [3] = {{ROUND (x - (60 + uho/4)*sizeX), ROUND (y - 120*sizeY)},
                     {ROUND (x - (20 + uho)*sizeX),   ROUND (y - 120*sizeY)},
                     {ROUND (x - (80 + uho)*sizeX),   ROUND (y - 160*sizeY)}};
    txPolygon (Uho, 3);

    txSetFillColor (TX_WHITE);
    txCircle (x - (70 - eyes)*sizeX, y - 95*sizeY, 20*sizeR);

    txSetFillColor (elementyColor);
    txCircle (x - (175 - head)*sizeX, y - 95*sizeY, 20*sizeR);
    txCircle (x - ( 80 - eyes)*sizeX, y - 90*sizeY, 10*sizeR);
    }

void DrawMouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF eyasColor,
                double head, double hvost, double telo)
    {
    txSetColor (teloColor, 4);

    txLine (x + 30*sizeX, y + 60*sizeY, x + 40*sizeX, y + 90*sizeY);
    txLine (x + 40*sizeX, y + 90*sizeY, x + 30*sizeX, y + (110-hvost)*sizeY);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (teloColor);

    txPie (x - 40*sizeX, y + 40*sizeY, x + 40*sizeX, y + 110*sizeY, telo, 180 + telo);

    POINT Mordochka [3] = {{ROUND (x),            ROUND (y + (30 + head)*sizeY)},
                           {ROUND (x - 40*sizeX), ROUND (y + (55 - head)*sizeY)},
                           {ROUND (x - 30*sizeX), ROUND (y + ( 5 + head)*sizeY)}};
    txPolygon (Mordochka, 3);

    txCircle (x - 30*sizeX, y +  5*sizeY, 10*sizeR);
    txCircle (x,            y + 30*sizeY, 10*sizeR);

    txSetFillColor (eyasColor);

    txCircle (x - 25*sizeX, y + 20*sizeY, 3*sizeR);
    txCircle (x - 15*sizeX, y + 27*sizeY, 3*sizeR);
    }
