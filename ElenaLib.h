//{===========================================================================
//! @brief     ElenaLib.h
//!
//! @author    Zhadobina Elena, Magnitogorsk 2021
//!
//! @mainpage
//!            ������� ����������:
//!
//!           - @ref DrawBackground()
//!           - @ref DrawFence()
//!           - @ref DrawBird()
//!           - @ref DrawSun()
//!           - @ref DrawHouse()
//!           - @ref DrawWood()
//!           - @ref DrawCat()
//!           - @ref DrawDog()
//!           - @ref DrawMouse()
//!
//! @note      ���������� �������� ��� ��������� ����������� "��������� ��������"
//!
//! @image html basic.png width=500 height=400
//}===========================================================================

#include "TXLib.h"

void DrawBackground (COLORREF skyColor, COLORREF GruntColor);

void DrawFence (int x, int y, double sizeX, double sizeY, COLORREF zaborColor);

void DrawBird (int x, int y, double sizeX, double sizeY, COLORREF telocolor, double fly);

void DrawSun (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF centreColor, COLORREF luchColor,
              double luch, double eyes, double smile);

void DrawHouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF domColor, COLORREF roofColor, COLORREF windowColor);

void DrawWood (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF stvolColor, COLORREF listColor,
               double stvol, double sheet);

void DrawCat (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF mordochkaColor,
              double dlinausov, double usymove, double paws, double lips);

void DrawDog (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF elementyColor,
              double head, double past, double hvost, double uho, double eyes, double lapy);

void DrawMouse (int x, int y, double sizeR, double sizeX, double sizeY, COLORREF teloColor, COLORREF eyasColor,
                double head, double hvost, double telo);

//{-----------------------------------------------------------------------------
//! ������ ���!
//! ���� � �����!
//!
//! @param  SkyColor    ���� ����
//! @param  GruntColor  ���� �����
//!
//! @note   <i>����� �����, ����� �������, ��� ����, ��� � ����!</i>
//!
//! @par    ������ �������������:
//! @code
//!         DrawBackground (RGB (0, 0, 128), RGB (0, 128, 0));
//! @endcode
//}-----------------------------------------------------------------------------

void DrawBackground (COLORREF SkyColor, COLORREF GruntColor)
    {
    txSetFillColor (SkyColor);
    txRectangle (0, 0, 1000, 400);

    txSetFillColor (GruntColor);
    txRectangle (0, 400, 1000, 1000);
    }

//{-----------------------------------------------------------------------------
//! ������ ��������!
//!
//! @param x            x-���������� ������ ������!
//! @param y            y-���������� ������ ������!
//! @param sizeR        ������ ���������� ������ � ��� �����!
//! @param sizeX        ����� �� ��� X ����� � ���� � ����������� �� ������� ������!
//! @param sizeY        ����� �� ��� Y ����� � ���� � ����������� �� ������� ������!
//! @param centreColor  ���� ������!
//! @param luchColor    ���� ������� ������!
//! @param luch         �������� �� �������� �����!
//! @param eyes         �������� �� ����������� ������� ����!
//! @param smile        �������� �� ������!
//!
//! @note               <i>�������� ����� ���������! �� ���� �� ��������� �����, �� �������� ����� ��������!</i>
//!
//! @par                ������ �������������:
//! @code
//!                     DrawSun (200, 100, 1, 1, 1, TX_YELLOW, TX_YELLOW, 1, 8, 1);
//! @endcode
//}-----------------------------------------------------------------------------

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

//{-----------------------------------------------------------------------------
//! ������ ������!
//!
//! @param x          x-���������� ���� ������!
//! @param y          y-���������� ���� ������!
//! @param sizeX      ������ ������ �� ��� X!
//! @param sizeY      ������ ������ �� ��� Y!
//! @param teloColor  ���� ������!
//! @param fly        �������� �� ����� �������!
//!
//! @note             <i>������ ����� ����� ������! ������ �� �����!</i>
//!
//! @par              ������ �������������:
//! @code
//!                   DrawBird (400, 600, 1, 1, TX_YELLOW, 1);
//! @endcode
//}-----------------------------------------------------------------------------

void DrawBird (int x, int y, double sizeX, double sizeY, COLORREF teloColor, double fly)
    {
    txSetFillColor (teloColor);
    txSetColor (teloColor, 2);

    POINT Rwing [3] = {{ROUND (x + 10),       ROUND (y)},
                       {ROUND (x + 20*sizeX), ROUND (y)},
                       {ROUND (x - 10*sizeX), ROUND (y - (20 - fly)*sizeY)}};
    txPolygon (Rwing, 3);

    POINT Lwing [3] = {{ROUND (x + 30*sizeX), ROUND (y + 5*sizeY)},
                       {ROUND (x + 10*sizeX), ROUND (y + 5*sizeY)},
                       {ROUND (x - 10*sizeX), ROUND (y + (20 + fly)*sizeY)}};
    txPolygon (Lwing, 3);

    txEllipse (x, y, x + 40*sizeX, y + 10*sizeY);
    }

//{-----------------------------------------------------------------------------
//! ������ �����!
//!
//! @param x            x-���������� ����!
//! @param y            y-���������� ����!
//! @param sizeR        ������ ����� �����!
//! @param sizeX        ������ ���� �� ��� X!
//! @param sizeY        ������ ���� �� ��� Y!
//! @param domColor     ���� ����!
//! @param roofColor    ���� �����!
//! @param WindowColor  ���� ����!
//!
//! @note               <i>����� � ������ ��������� ����, ����� ������ �������� ���� ����!</i>
//!
//! @par                ������ �������������:
//! @code
//!                     DrawHouse (650, 340, 1, 1, 1, TX_ORANGE, TX_DARKGRAY, RGB (0, 0, 255));
//! @endcode
//}-----------------------------------------------------------------------------

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

//{-----------------------------------------------------------------------------
//! ������ �����!
//!
//! @param x           x-���������� ������!
//! @param y           y-���������� ������!
//! @param sizeX       ������ ������ �� ��� X!
//! @param sizeY       ������ ������ �� ��� Y!
//! @param zaborColor  ���� ������!
//!
//! @note              <i>������ ������ ��� ������ ������!</i>
//!
//! @par               ������ �������������:
//! @code
//!                    DrawFence (480, 450, 1, 1, TX_BROWN);
//! @endcode
//}-----------------------------------------------------------------------------

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

//{-----------------------------------------------------------------------------
//! ������ ������!
//!
//! @param x           x-���������� ������!
//! @param y           y-���������� ������!
//! @param sizeR       ������ ������� ������!
//! @param sizeX       ������ ������ �� ��� X!
//! @param sizeY       ������ ������ �� ��� Y!
//! @param stvolColor  ���� ������ ������!
//! @param listColor   ���� ������� ������!
//! @param stvol       ���� ������ ������!
//! @param sheet       �������� �������!
//!
//! @note              <i>��� ������� �� ������ ����� �������� �����!</i>
//!
//! @par               ������ �������������:
//! @code
//!                    DrawWood (100, 300, 1, 1, 1, TX_BROWN, RGB(0, 150, 0), 0, 1);
//! @endcode
//}-----------------------------------------------------------------------------

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

//{-----------------------------------------------------------------------------
//! ������ ������ ������!
//!
//! @param x               x-���������� ������!
//! @param y               y-���������� ������!
//! @param sizeR           ������ �����, ����, ��������!
//! @param sizeX           ������ ������ �� ��� X!
//! @param sizeY           ������ ������ �� ��� Y!
//! @param teloColor       ���� ���� ������!
//! @param mordochkaColor  ���� �������� ������!
//! @param dlinausov       ����� ����!
//! @param usymove         �������� ����!
//! @param paws            �������� �������� ���!
//! @param lips            ��������� ���!
//!
//! @note                  <i>����� ����� ����� ����������!</i>
//!
//! @par                   ������ �������������:
//! @code
//!                        DrawCat (600, 550, 0.8, 0.8, 0.8, TX_LIGHTGRAY, TX_BLACK, 0, 0, 1, 2);
//! @endcode
//}-----------------------------------------------------------------------------

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

//{-----------------------------------------------------------------------------
//! ������ �������!
//!
//! @param x              x-���������� �������!
//! @param y              y-���������� �������!
//! @param sizeR          ������ ������, ����, ������!
//! @param sizeX          ������ ������� �� ��� X!
//! @param sizeY          ������ ������� �� ��� Y!
//! @param teloColor      ���� ���� �������!
//! @param elementyColor  ���� ���, ����, ����, ������ �������!
//! @param head           ������� ������!
//! @param past           ���������� ���!
//! @param hvost          �������� ������!
//! @param uho            �������� ���!
//! @param eyes           �������� ������ �����!
//! @param lapy           �������� ���!
//!
//! @note                 <i>������� ����� �����������, ����� ����� ���������!</i>
//!
//! @par                  ������ �������������:
//! @code
//!                       DrawDog (600, 400, 0.8, 0.8, 0.8, TX_BROWN, TX_BLACK, 1, 1, 1, 1, 1, 1);
//! @endcode
//}-----------------------------------------------------------------------------

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

//{-----------------------------------------------------------------------------
//! ������ �����!
//!
//! @param x          x-���������� �����!
//! @param y          y-���������� �����!
//! @param sizeR      ������ ����, ���� �����!
//! @param sizeX      ������ ����� �� ��� X!
//! @param sizeY      ������ ����� �� ��� Y!
//! @param teloColor  ���� ���� �����!
//! @param eyasColor  ���� ���� �����!
//! @param head       �������� ������!
//! @param hvost      �������� ������!
//! @param telo       �������� ����!
//!
//! @note             <i>����� ����� �������!</i>
//!
//! @par              ������ �������������:
//! @code
//!                   DrawMouse (100, 450, 0.7, 0.7, 0.7, TX_YELLOW, TX_BLACK, 1, 1, 1);
//! @endcode
//}-----------------------------------------------------------------------------

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
