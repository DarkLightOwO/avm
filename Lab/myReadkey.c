#include <myBigChars.h>
#include <myReadkey.h>
#include <myTerm.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
 struct termios termSave;

int
rk_readkey (enum keys *zu)
{
  char buf[1];
  int read_chars;
  if ((read_chars = read (0, buf, 1)) < 0)
    {
      write (1, "Ошибка", 6);
    }
  if ('l' == buf[0]) // l
    {
      *zu = KEY_l;
      printf("вы ввели l\n");
      return 0;
    }
  if ('s' == buf[0]) // s
    {
      *zu = KEY_s;
      return 0;
    }
  if ('r' == buf[0]) // r
    {
      *zu = KEY_r;
      return 0;
    }
  if ('t' == buf[0]) // t
    {
      *zu = KEY_t;
      return 0;
    }
  if ('i' == buf[0]) // t
    {
      *zu = KEY_i;
      return 0;
    }
  if ('\e' == buf[0]) // F5 и F6
    {
      read (0, buf, 1);
      if ('[' == buf[0])
        {
          read (0, buf, 1);
          if ('1' == buf[0])
            {
              read (0, buf, 1);
              if ('7' == buf[0])
                {
                  read (0, buf, 1);

                  if ('~' == buf[0])
                    {
                      *zu = KEY_f6;
                      return 0;
                    }
                }
              if ('5' == buf[0])
                {
                  read (0, buf, 1);

                  if ('~' == buf[0])
                    {
                      *zu = KEY_f5;
                      printf("вы ввели F5\n");
                      return 0;
                    }
                }
            }
        }
    }
  if ('\n' == buf[0]) // enter
    {
      *zu = KEY_enter;
      return 0;
    }
  if ('^' == buf[0]) // enter
    {
      read (0, buf, 1);
      if ('[' == buf[0])
        {
          read (0, buf, 1);
          if ('[' == buf[0])
            {
              read (0, buf, 1);
              if ('A' == buf[0])
                {
                  *zu = KEY_up;
                  return 0;
                }
              if ('B' == buf[0])
                {
                  *zu = KEY_down;
                  return 0;
                }
              if ('C' == buf[0])
                {
                  *zu = KEY_right;
                  return 0;
                }
              if ('D' == buf[0])
                {
                  *zu = KEY_left;
                  return 0;
                }
            }
        }
    }

  *zu = KEY_undef;

  return 0;
}

int
rk_mytermsave ()
{
  return tcgetattr (0, &termSave);
}

int
rk_mytermrestore ()
{

  return tcsetattr (1, TCSANOW, &termSave);
}

int
rk_mytermregime (int regime, int vtime, int vmin, int echo, int sigint)
{
  struct termios newSetings;
  if ((regime != 0 && regime != 1) || vtime < 0 || vmin < 0
      || (echo != 0 && echo != 1) || (sigint != 0 && sigint != 1))
    return -1;

  tcgetattr (1, &newSetings);
  if (regime == 1)
    newSetings.c_lflag = newSetings.c_lflag | ICANON; //канонический режим
  else
    newSetings.c_lflag = newSetings.c_lflag & ~ICANON;

  if (echo == 1)
    newSetings.c_lflag
        = newSetings.c_lflag | ECHO; //если установлен флаг, то символы будут
                                     //отображаться по мере их набора
  else
    newSetings.c_lflag = newSetings.c_lflag & ~ECHO;

  if (sigint == 1)
    newSetings.c_lflag
        = newSetings.c_lflag
          | ISIG; //если установлен флаг, то разрешается обработка клавиш
                  //прерывания и аварийного завершения
  else
    newSetings.c_lflag = newSetings.c_lflag & ~ISIG;

  if (regime == 0)
    {
      newSetings.c_cc[VMIN] = vmin;
      newSetings.c_cc[VTIME] = vtime;
    }

  tcsetattr (1, TCSAFLUSH, &newSetings);

  return 0;
}