#include <fcntl.h>
#include <myBigChars.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int
main ()
{
  int fd, count;
  fd = open ("shrift.bin", O_RDONLY);
  int big[18][2] = { 0 };
  mt_clrscr ();
  bc_box (5, 10, 9, 9);
  bc_bigcharread (fd, (int *)big, 18, &count);
  if (count < 18)
    {
      printf ("ERROR!!!");
      return -1;
    }

  int vivod, colls = 6, collst = 0;
  for (vivod = 0; vivod < 6; vivod++)
    {
      bc_printbigchar (big[vivod], colls, (11 + collst), 1, 2);
      collst += 10;
    }

  colls += 10;
  collst = 0;
  for (vivod = 6; vivod < 12; vivod++)
    {
      bc_printbigchar (big[vivod], colls, (11 + collst), 1, 2);
      collst += 10;
    }
  colls += 10;
  collst = 0;
  for (vivod = 12; vivod < 18; vivod++)
    {
      bc_printbigchar (big[vivod], colls, (11 + collst), 1, 2);
      collst += 10;
    }

  mt_gotoXY (1, 1);
}