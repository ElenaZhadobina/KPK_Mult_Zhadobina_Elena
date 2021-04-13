#include "TXLib.h"

int main()
    {
    txCreateWindow (1000, 800);
    txClear();

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
    txSetFillColor (TX_PINK);
    txEllipse (390, 600, 350, 610);
    txSetFillColor (TX_GRAY);
    txEllipse (280, 750, 340, 680);
    txEllipse (470, 750, 410, 680);
    txRectangle (353, 680, 370, 740);
    txRectangle (383, 740, 400, 680);
    txCircle (360, 740, 15);
    txCircle (393, 740, 15);

    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_BROWN);
    txRectangle (600, 750, 800, 650);
    txRectangle (620, 550, 700, 610);
    txLine (620, 770, 670, 770);
    txLine (670, 770, 645, 730);
    txLine (645, 730, 620, 770);
    txLine (730, 770, 780, 770);
    txLine (780, 770, 755, 730);
    txLine (755, 730, 730, 770);
    txLine (600, 650, 580, 690);
    txLine (580, 690, 550, 700);
    txLine (550, 700, 560, 660);
    txLine (560, 660, 600, 650);

    txCircle (750, 580, 70);
    txSetFillColor (TX_WHITE);
    txCircle (730, 555, 20);
    txSetFillColor (TX_BLACK);
    txCircle (625, 555, 20);
    txCircle (720, 560, 10);

    return 0;
    }
