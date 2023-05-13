#include "lcdutils.h"
#include "lcddraw.h"
#include "words.h"

void words(){
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLACK);

  drawString5x7(6,15, "I Need Sleeep!", COLOR_RED,COLOR_BLACK);
  drawString5x7(17,29, "Im done lol", COLOR_BLUE,COLOR_BLACK);
}
