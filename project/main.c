#include <msp430.h>
#include <libTimer.h>
#include <lcdutils.h>
#include <lcddraw.h>
#include "words.h"

int redrawScreen = 1;

void main(){
  u_char width = screenWidth, height = screenHeight;
  configureClocks();
  words();

  enableWDTInterrupts();
  or_sr(0x8);
}
void wdt_c_handler()
{
  static int secCount = 0;

  secCount ++;
  if (secCount >= 25) {		/* 10/sec */
    secCount = 0;
  }				/* move ball */
      
}
  
