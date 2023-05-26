#pragma once
#include <stdio.h>

enum colors
{
  BLACK,
  RED,
  GREEN,
  YELLOW,
  BLUE,
  PURPLE,
  CYAN,
  WHITE,
  DEFAULT
};

int mt_clrscr (void);
int mt_gotoXY (int, int);
int mt_getscreensize (int *rows, int *cols);
int mt_setfgcolor ();
int mt_setbgcolor ();
