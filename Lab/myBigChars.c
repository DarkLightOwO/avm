#include "myBigChar.h"
#include <myTerm.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>

int
bc_printA (char *str)
{
  char buf[100];
  int len;
  len = snprintf (buf, 99, "\E(0%s\E(B", str);
  write (1, buf, len);
  return 0;
}

int
bc_box (int x1, int y1, int x2, int y2)
{

  int tmp;

  int maxx, maxy;

  int i, j;

  mt_getscreensize (&maxy, &maxx);

  if ((x1 < 0) || (y1 < 0) || (x1 > maxx) || (y1 > maxy) || (x2 < 1)
      || (y2 < 1) || ((x1 + x2 + 2) > maxx) || ((y1 + y2 + 2) > maxx))

    {

      return -1;
    }
  mt_gotoXY (x1, y1);

  bc_printA (BOXCHAR_TL);

  for (i = x1 + 1; i < (x2 + x1); i++)

    {

      bc_printA (BOXCHAR_HOR);
    }

  bc_printA (BOXCHAR_TR);
  for (i = x1 + 1; i < (x2 + x1); i++)

    {

      mt_gotoXY (i, y1);

      bc_printA (BOXCHAR_VERT);

      mt_gotoXY (i, y1 + y2);

      bc_printA (BOXCHAR_VERT);
    }
  mt_gotoXY (x1 + x2, y1);

  bc_printA (BOXCHAR_BL);

  for (i = x1 + 1; i < (x2 + x1); i++)

    {

      bc_printA (BOXCHAR_HOR);
    }
  bc_printA (BOXCHAR_BR);

  return 0;
}

int
bc_printbigchar (int b[2], int x, int y, enum colors fg, enum colors bg)
{
  int i = 0, j = 0, val;
  int maxx, maxy;
  // if ((x < 0) || (y < 0) || (x + 8 > maxx) || (y + 8 > maxy))

  // {

  // return -1;
  // }
  mt_setfgcolor (fg);
  mt_setbgcolor (bg);
  for (i = 0; i < 8; i++)
    {
      for (j = 0; j < 8; j++)
        {
          mt_gotoXY (x + i, y + j);
          bc_getbigcharpos (b, i, j, &val);
          bc_printA ((val) ? "a" : " ");
        }
    }
  return 0;
}

int
bc_setbigcharpos (int *big, int x, int y, int value)
{
  int pos, z, mask;
  if ((x < 0) || (y < 0) || (x > 7) || (y > 7) || (value < 0) || (value > 1))
    {
      return -1;
    }
  if (x < 4)
    {
      pos = 0;
    }
  else
    {
      pos = 1;
      x = x - 4;
    }
  // y = y % 4;
  z = x * 8 + y;
  mask = 1 << z;
  if (value == 1)
    {
      // big[pos] &= (1 << (8 * y + x));
      big[pos] |= mask;
    }
  else
    {
      // big[pos] |= 1 << (8 * y + x);
      big[pos] &= ~mask;
    }
  // printf("pos=%d\nx=%d\ny=%d\nz=%d\nbig=%d\n",pos,x,y,z,big[pos]);
  return 0;
}

int
bc_getbigcharpos (int *big, int x, int y, int *value)
{
  int pos;
  int z;
  if ((x < 0) || (y < 0) || (x > 7) || (y > 7) || (value == NULL))
    {
      return -1;
    }
  if (x < 4)
    {
      pos = 0;
    }
  else
    {
      pos = 1;
      x = x - 4;
    }

  z = x * 8 + y;
  // printf("pos=%d\nx=%d\ny=%d\nz=%d\nbig=%d\n",pos,x,y,z,big[pos]);
  (*value) = ((big[pos] >> (z)) & 1);

  return 0;
}

int
bc_bigcharwrite (int fd, int *big, int count)
{
  int res;
  res = write (fd, big, count * sizeof (int) * 2);
  return ((res == -1) ? res : res / sizeof (int) / 2);
}

int
bc_bigcharread (int fd, int *big, int need_count, int *count)
{
  (*count) = read (fd, big, need_count * sizeof (int) * 2) / sizeof (int) / 2;
  return 0;
}
