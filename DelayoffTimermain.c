/*
 * File:   Togglemain.c
 * Author: Rameshkumar
 *Anokhautomation
 * Created on June 19, 2022, 5:21 PM
 */
#include <xc.h>
__CONFIG(FOSC_INTOSCIO & WDTE_OFF & PWRTE_ON & MCLRE_ON & BOREN_ON & LVP_OFF & CPD_OFF & CP_OFF);//configuration bit
//connect Push Button to PORTA1(pin#18)
//connect LED to PORTB0(pin#6)
#define _XTAL_FREQ 4000000// set clock frequency
int main()
{
  TRISB1 = 1; //RB1 as Input 
  TRISB0 = 0; //RB0 as Output
  RB0 = 0; //at initial RB0 set to LOW(LED Off)

  while(1)
  {
    if(RB1 == 1) //If button is Pressed
    {
      RB0 = 1; //LED ON
      __delay_ms(50000); //set your time for Turn OFF the Load
      RB0 = 0; //LED OFF
    }
  }
  return 0;
}