#include <myReadkey.h>
extern struct termios termSave;

int
main ()
{
  int regime = 1;
  int vtime = 0;
  int vmin = 1;
  int echo = 1; //показывает вводимые символы
  int sigint = 0;
  enum keys zu;


    int result = rk_mytermregime(regime, vtime, vmin, echo, sigint); 
    if (result != 0)
    { 
    printf("Ошибка установки режима терминала\n"); 
    return 1; 
    }

  rk_readkey (&zu);

  int saveResult = rk_mytermsave ();
  if (saveResult != 0)
    {
      printf ("Ошибка сохранения параметров терминала\n");
      return 1;
    }

  // Восстановление сохраненных параметров терминала
  int restoreResult = rk_mytermrestore ();
  if (restoreResult != 0)
    {
      printf ("Ошибка восстановления параметров терминала\n");
      return 1;
    }
}