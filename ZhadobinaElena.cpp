#include "TXLib.h"

void DrawBackground();
void DrawSun();
void DrawHouse();
void DrawFence();
void DrawWood();
void DrawCat();
void DrawDog();
void DrawMouse();

int main()
    {
    txCreateWindow (1000, 800);
    txClear();

    DrawBackground();
    DrawSun();
    DrawHouse();
    DrawFence();
    DrawWood();
    DrawCat();
    DrawDog();
    DrawMouse();
    }

void DrawBackground()
    {
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 1000, 410);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 400, 1000, 800);
    }

void DrawSun()
    {
    txSetFillColor (TX_YELLOW);
    txCircle (100, 100, 50);
    txCircle ( 30, 100, 10);
    txCircle (170, 100, 10);
    txCircle (100, 170, 10);
    txCircle (100,  30, 10);
    txCircle ( 45, 150, 10);
    txCircle ( 45,  45, 10);
    txCircle (150,  45, 10);
    txCircle (150, 150, 10);
    }

void DrawHouse()
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_ORANGE);
    txRectangle (500, 450, 800, 250);
    txSetFillColor (TX_LIGHTBLUE);
    txRectangle (670, 300, 750, 380);
    txLine (710, 340, 750, 340);
    txLine (710, 300, 710, 380);
    txLine (490, 250, 810, 250);
    txLine (810, 250, 650, 100);
    txLine (650, 100, 490, 250);
    txSetFillColor (TX_DARKGRAY);
    txFloodFill (650, 170);
    txRectangle (540, 450, 620, 330);
    txSetFillColor (TX_BLACK);
    txCircle (600, 400, 5);
    }

void DrawFence()
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);
    txRectangle (500, 450, 460, 330);
    txLine (500, 330, 480, 300);
    txLine (480, 300, 460, 330);
    txFloodFill (480, 315);
    txRectangle (460, 450, 420, 330);
    txLine (460, 330, 440, 300);
    txLine (440, 300, 420, 330);
    txFloodFill (440, 315);
    txRectangle (420, 450, 380, 330);
    txLine (420, 330, 400, 300);
    txLine (400, 300, 380, 330);
    txFloodFill (400, 315);
    txRectangle (380, 450, 340, 330);
    txLine (380, 330, 360, 300);
    txLine (360, 300, 340, 330);
    txFloodFill (360, 315);
    txRectangle (340, 450, 300, 330);
    txLine (340, 330, 320, 300);
    txLine (320, 300, 300, 330);
    txFloodFill (320, 315);
    txRectangle (300, 450, 260, 330);
    txLine (300, 330, 280, 300);
    txLine (280, 300, 260, 330);
    txFloodFill (280, 315);
    txRectangle (260, 450, 220, 330);
    txLine (260, 330, 240, 300);
    txLine (240, 300, 220, 330);
    txFloodFill (240, 315);
    txRectangle (220, 450, 180, 330);
    txLine (220, 330, 200, 300);
    txLine (200, 300, 180, 330);
    txFloodFill (200, 315);
    }

void DrawWood()
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);
    txRectangle (900, 200, 940, 500);
    txSetColor (TX_GREEN, 3);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (960, 200, 30);
    txCircle (870, 300, 30);
    txCircle (920, 300, 50);
    txCircle (870, 250, 50);
    txCircle (950, 250, 50);
    txCircle (920, 200, 50);
    txCircle (970, 300, 30);
    txCircle (870, 200, 30);
    }

void DrawCat()
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_GRAY);
    txCircle (375, 580, 50);
    txLine (300, 750, 450, 750);
    txLine (450, 750, 375, 550);
    txLine (375, 550, 300, 750);
    txFloodFill (360, 700);
    txCircle (375, 580, 50);
    txLine (330, 560, 330, 500);
    txLine (330, 500, 360, 530);
    txFloodFill (340, 520);
    txLine (420, 560, 420, 500);
    txLine (420, 500, 390, 530);
    txFloodFill (410, 540);
    txSetFillColor (TX_BLACK);
    txCircle (350, 570, 5);
    txCircle (390, 570, 5);
    txCircle (370, 590, 5);
    txLine (355, 590, 310, 590);
    txLine (355, 590, 310, 580);
    txLine (355, 590, 310, 600);
    txLine (385, 590, 430, 590);
    txLine (385, 590, 430, 600);
    txLine (385, 590, 430, 580);
    txSetFillColor (TX_PINK);
    txEllipse (380, 610, 360, 620);
    txSetFillColor (TX_GRAY);
    txEllipse (280, 750, 340, 680);
    txEllipse (470, 750, 410, 680);
    txRectangle (353, 680, 370, 740);
    txRectangle (383, 740, 400, 680);
    txCircle (360, 740, 15);
    txCircle (393, 740, 15);
    }

void DrawDog()
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);
    txRectangle (600, 750, 800, 650);
    txRectangle (620, 550, 700, 610);
    txLine (620, 770, 670, 770);
    txLine (670, 770, 645, 730);
    txLine (645, 730, 620, 770);
    txSetFillColor (TX_BLACK);
    txFloodFill (645, 760);
    txLine (730, 770, 780, 770);
    txLine (780, 770, 755, 730);
    txLine (755, 730, 730, 770);
    txFloodFill (755, 760);
    txLine (600, 650, 580, 690);
    txLine (580, 690, 550, 700);
    txLine (550, 700, 560, 660);
    txLine (560, 660, 600, 650);
    txFloodFill (565, 690);
    txLine (720, 520, 740, 480);
    txLine (740, 480, 760, 520);
    txLine (760, 520, 720, 520);
    txFloodFill (740, 500);
    txSetFillColor (TX_BROWN);
    txCircle (750, 580, 70);
    txSetFillColor (TX_WHITE);
    txCircle (730, 555, 20);
    txSetFillColor (TX_BLACK);
    txCircle (625, 555, 20);
    txCircle (720, 560, 10);
    txLine (765, 530, 800, 535);
    txLine (800, 535, 790, 495);
    txLine (790, 495, 765, 530);
    txSetFillColor (TX_BLACK);
    txFloodFill (790, 520);
    txFloodFill (780, 525);
    txSetColor (TX_BLACK, 6);
    txLine (685, 610, 620, 630);
    }

void DrawMouse()
    {
    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_YELLOW);
    txPie (100, 480, 180, 550, 0, 180);
    txLine (170, 515, 180, 530);
    txLine (180, 530, 170, 550);
    txLine (170, 550, 190, 565);
    txCircle (110, 445, 10);
    txCircle (140, 470, 10);
    txLine (140, 470, 100, 495);
    txLine (100, 495, 110, 445);
    txLine (110, 445, 140, 470);
    txFloodFill (120, 480);
    txSetFillColor (TX_BLACK);
    txCircle (115, 460, 3);
    txCircle (125, 467, 3);
    }
