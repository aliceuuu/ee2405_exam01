

// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{
    uLCD.background_color(0xFFFFFF);
    uLCD.cls();
    uLCD.color(BLUE);

    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("\n105031148\n"); //Default Green on black text

    //uLCD.circle(0 , 0 , 100, RED);

    uLCD.line(50, 50 ,  50, 100, GREEN);
    uLCD.line(50, 100 , 100, 100, GREEN);
    uLCD.line(100, 100 , 100, 50, 0);
    uLCD.line(50, 50 , 100, 50, 0);



}