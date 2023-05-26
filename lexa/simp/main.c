#include <mySimpleComputer.h>

int
main ()
{
  int regester;
  int value;
  int address;
  extern char flag;
  extern int memory_arr[];

  regester = 3;
  flag = 7;
  address = 5;
  value = 10;
  sc_memoryInit ();
  sc_memorySet (address, value);
  printf ("%d\n", memory_arr[address]);
  sc_memoryGet (address, &value);
  printf ("%d\n", value);
  sc_memorySave ("file_memory");
  sc_memoryLoad ("filename");
  sc_regInit ();
  sc_regSet (regester, value);
  printf ("%d\n", value);
  sc_regGet (regester, &value);
  printf ("%d\n", value);
  sc_regSet (regester, (1 - value));
  printf ("%d\n", flag);
  sc_regGet (regester, &value);
  printf ("%d", value);
  return 0;
}