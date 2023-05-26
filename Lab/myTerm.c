#include <myTerm.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
int fd;
int
mt_clrscr () //очистка экрана и перемещение курсора на 1 строку, 1 символ(левый
             //верхний угол)
{
  char buf[100];
  int len;
  len = snprintf (buf, 99, "\033[H\033[2J");
  write (1, buf, len);
}

int
mt_gotoXY (int x, int y) //перемещает курсор в указанную позицию. Первый
                         //параметр номер строки, второй -номер столбца
{
  char buf[100];
  int rows, cols, len;

  mt_getscreensize (&rows, &cols);

  if (x < 0 || y < 0 || x > rows || y > cols)

    {

      return -1;
    }

  else

    {

      len = snprintf (buf, 99, "\033[%d;%dH", x, y);
      write (1, buf, len);
      return 0;
    }
}

int
mt_getscreensize (int *rows,
                  int *cols) //определяет размер экрана терминала(количество
                             //строк и столбцов)
{
  struct winsize ws;

  if (!ioctl (1, TIOCGWINSZ, &ws))
    {
      *rows = ws.ws_row;
      *cols = ws.ws_col;
      printf ("\n");
      // printf ("Получен размер экрана.\n");
      // printf ("Число строк – %d\nЧисло столбцов – %d\n", ws.ws_row,
      // ws.ws_col);
      return 0;
    }
  else
    {
      fprintf (stderr, "Ошибка получения размера экрана.\n");
      return -1;
    }
  return (0);
}

int
mt_setfgcolor (enum colors fg)
{
  char str[100];
  int size = 0;

  size = sprintf (str, "\E[3%dm", fg);
  write (fd, str, size);

  return 0;
}

int
mt_setbgcolor (enum colors bg)
{

  char str[100];
  int size = 0;

  size = sprintf (str, "\E[4%dm", bg);
  write (fd, str, size);

  return 0;
}
