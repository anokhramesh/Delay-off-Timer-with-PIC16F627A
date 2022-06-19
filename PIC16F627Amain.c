/*
 * File:   PIC16F627Amain.c
 * Author:Ramesh
 */Anokhautomation
 * Created on June 18, 2022, 2:26 PM
 */
 
#include <xc.h>
__CONFIG(FOSC_INTOSCCLK & WDTE_OFF & PWRTE_ON & MCLRE_ON & BOREN_ON & LVP_OFF & CPD_OFF & CP_OFF);
#define LED1 RB0// LED1 connected to Pin 6 of Pic
#define LED2 RB1// LED2 connected to Pin 7 of Pic
#define _XTAL_FREQ 4000000// defined clock Frequency

void main(void) {
    TRISB0 = 0;// set PortB pin0(RB0) as an output
    TRISB1 = 0;// set PortB pin1(RB1) as an output
    while(1){// added the function to an infinite loop
        LED1 = 1;//Turn ON LED1
        LED2 = 0;//Turn OFF LED2
        __delay_ms(1000);// provide a delay of 1 second
        LED1 = 0;//Turn OFF LED1
        LED2 = 1;//Turn ON LED2
        __delay_ms(1000);// provide a delay of 1 second
    }
     
    
    return;
}
