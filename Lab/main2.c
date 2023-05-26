#include <myTerm.h>

int
main ()
{
  int x = 10, y = 5;
  int rows, cols;
  mt_clrscr ();
  mt_gotoXY (x, y);
  mt_getscreensize (&rows, &cols);
  mt_setfgcolor (4);
  mt_setbgcolor (3);
}