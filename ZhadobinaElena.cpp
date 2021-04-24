//{===========================================================================
//! @file       ZhadobinaElena.cpp
//!
//! @brief      Мультфильм "Нашествие грызунов".
//!
//!             Пример создания мультфильма с помощью TXLib.
//!
//!             $Date: 2021-04-14 $
//          (C) Жадобина Елена, г.Магнитогорск, 2021
//}===========================================================================

#include "ElenaLib.h"
#include "TXLib.h"

void StartTitles();
void Rassvet();
void VihodGeroev();
void Nashestvie();
void Pobeda();
void FinishTitles();

int main()
    {
    txCreateWindow (1000, 1000);

    txBegin();

    StartTitles();
    Rassvet();
    VihodGeroev();
    Nashestvie();
    Pobeda();
    FinishTitles();

    txEnd();

    return 0;
    }

void StartTitles()
    {
    txPlaySound ("opasnost.wav");

    int t = 0;
    while (t <= 50)
        {
        txClear();
        txSetFillColor (RGB(0 + t*10, 128 + t, 0 + t*15));
        txSetColor (TX_RED);
        txSelectFont ("Arial Black", 150);
        txTextOut    (-450 + t*10, 300, "НАШЕСТВИЕ");
        txSelectFont ("Arial Black", 130);
        txTextOut    (1100 - t*15, 500, "ГРЫЗУНОВ");

        txSleep (50);
        t++;
        }

    txSleep (2000);
    txPlaySound (NULL);
    }

void Rassvet()
    {
    txBegin();

    txPlaySound ("peniyaptits.wav");

    for (int t = 1; t <= 130; t += 20)
        {
        DrawBackground (RGB (0, 0 + t*2, 128 + t), RGB (0, 128 + t, 0 + t));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (0, 0, 255));
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, 0);
        DrawBird (100 + t*10, 600,  1,  1, TX_YELLOW, t%30);
        DrawBird (800 - t*10, 300, -1, -1, TX_RED,    t%30);
        DrawBird (100 + t*10, 200,  1,  1, TX_YELLOW, t%30);
        DrawBird (800 - t*10, 100, -1, -1, TX_ORANGE, t%30);

        txSleep (800);
        }

    int x = 800;
    while (x >= 100)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (0, 0, 255));
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN,  TX_LIGHTGREEN, 0, x%2);
        DrawSun   (x,   100, 1, 1, 1, TX_YELLOW, TX_YELLOW, x%10, 8, x%10);

        txSleep (300);
        x -= 55;
        }

    DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (255, 255, 128));

    txSleep (1000);
    txPlaySound (NULL);

    txEnd();
    }

void VihodGeroev()
    {
    txBegin();

    txPlaySound ("utro.wav");

    for (int paws = 1; paws <= 50; paws += 3)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_BLACK, RGB(255, 255, 128));
        DrawSun   (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, paws%5, 8, paws%10);
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN,  TX_LIGHTGREEN, 0, paws%2);

        DrawCat (600 - paws*2, 550 + paws*2, 0.3 + paws*0.01, 0.3 + paws*0.01, 0.3 + paws*0.01, TX_LIGHTGRAY, TX_BLACK, 0, 0, paws*2, paws/10);
        DrawDog ( 50 + paws*5, 700, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 260 + paws%20, paws%2, paws%20, 100, 30, paws%20);

        txSleep (200);
        }

    txSetColor (TX_WHITE);
    txSelectFont ("Arial Black", 30);
    txTextOut (570, 500, "Отличный день!");
    txSleep (2000);
    txTextOut (350, 700, "Никто не сможет испортить настроение!");
    txSleep (3000);

    txPlaySound (NULL);

    txEnd();
    }

void Nashestvie()
    {
    txBegin();

    txPlaySound ("opasnost.wav");

    for (int t = 20; t <= 500; t += 25)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawWood (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, t%2);
        DrawSun  (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, 0, 8, 10);

        DrawMouse (100 + t,    450 + t,   0.7, 0.7, 0.7, TX_YELLOW, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (500 - t*2,  400 + t,   0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (400 + t,   1000 - t,   0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (100 + t*2,  430 + t,   0.7, 0.7, 0.7, TX_YELLOW, TX_BLACK, t%10, t%10, t%10);
        DrawMouse (300 - t,    900 - t*2, 0.7, 0.7, 0.7, TX_ORANGE, TX_BLACK, t%10, t%10, t%10);

        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));
        DrawDog   (250 - t, 700, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 260, 0, t%15, 100, 30, t%15);
        DrawCat   (460 + t, 750 - t/2, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0 + t%3, 110 + t%2, 0 + t%10);

        txSetColor (TX_WHITE);
        txSelectFont ("Arial Black", 30);
        txTextOut (550, 600, "Мыши!");

        txSleep (300);
        }

    txPlaySound (NULL);

    txEnd();
    }

void Pobeda()
    {
    txBegin();

    txPlaySound ("stroit.wav");

    for (int t = 10; t <= 100; t += 15)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, t%2);
        DrawSun   (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, 0, 8, 20);

        DrawDog (250, 700, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 260 + t%10, 0, t%10, 100, 30, 0);
        DrawCat (460, 750, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0, 0, 0);

        txSetColor (TX_WHITE);
        txSelectFont ("Arial Black", 30);
        txTextOut (150, 550, "Строим защиту!");

        txSleep (300);
        }

    for (int y = 10; y <= 300; y += 15)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));
        DrawWood  (900, 120, 1, 1, 1, TX_BROWN, TX_LIGHTGREEN, 0, 0);
        DrawSun   (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, 0, 8, 20);

        DrawDog (250 + y, 700 - y, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 260, y%10, y%10, 100, 30, 0);
        DrawCat (460 + y, 750 - y, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, y%10, y%10, y%10, 0);

        txSleep (150);
        }

    txSleep (2000);

    for (int y = 10; y <= 300; y += 15)
        {
        DrawBackground (RGB (0, 255, 255), RGB (0, 255, 128));
        DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB(255, 255, 128));
        DrawSun   (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, 0, 8, 20);

        DrawFence (480 - y, 450, 1, 1, TX_BROWN);
        DrawFence (100 + y, 450, 1, 1, TX_BROWN);

        txSleep (200);
        }

    txSetColor (TX_BLACK);
    txSelectFont ("Arial Black", 60);
    txTextOut (350, 550, "Некоторое время спустя...");

    txSleep (1500);
    txPlaySound (NULL);

    txPlaySound ("letnee.wav");

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

        DrawSun (100, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, paws%5, 8, paws%10);
        DrawCat (600 - paws, 550 + paws, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0, paws, paws/15);
        DrawDog (750 + paws, 550 + paws, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 0, paws%2, paws%10, 0, 0, paws%10);

        DrawWood (100, 300, 1, 1, 1, TX_BROWN, RGB(0, 150, 0), 0, paws%2);
        DrawWood (150, 500, 1, 1, 1, TX_BROWN, RGB(0, 150, 0), 0, paws%2);
        DrawWood (250, 400, 1, 1, 1, TX_BROWN, RGB(0, 150, 0), 0, paws%2);

        DrawBird (100 + paws*10, 600,  1,  1, TX_YELLOW, paws%30);
        DrawBird (800 - paws*10, 300, -1, -1, TX_RED,    paws%30);
        DrawBird (100 + paws*10, 200,  1,  1, TX_YELLOW, paws%30);
        DrawBird (800 - paws*10, 100, -1, -1, TX_ORANGE, paws%30);

        txSleep (150);
        }

    txSetColor (TX_WHITE);
    txSelectFont ("Arial Black", 30);
    txTextOut (480, 550, "УРА!");

    txSleep (2000);
    txPlaySound (NULL);

    txEnd();
    }

void FinishTitles()
    {
    txPlaySound ("veselaya.wav");

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

        txSleep (100);
        t+= 5;
        }

    txSleep (3000);
    txPlaySound (NULL);

    txClear();
    }
