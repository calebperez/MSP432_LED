#include "msp.h"


/**
 * LED.c
 */
void main()
{
    uint16_t dly= 65535; // 2^16
    int x;
     /* Configuration of MSP42 */
     P1->SEL0 = 0x00;             // configure P1.0 as GPIO
     P1->SEL1 = 0x00;             // configure P1.0 as GPIO
     P1->DIR  = 0x01;              // P1.0 output
    


     /* Application                        */
    while (1){                      // do forever
         P1->OUT = P1->OUT ^ 0x01;  // Toggle LED
     for (x=0;x<dly;x++);            // Delay loop
    }
}