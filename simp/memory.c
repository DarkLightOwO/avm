#include <mySimpleComputer.h>
int memory_arr[max_size];
char flag;
int
sc_memoryInit ()
{
  int i;
  for (i = 0; i < max_size; i++)
    {
      memory_arr[i] = 0;
    }
  return 0;
}
int
sc_memorySet (int address, int value)
{
  if (address < 0 || address > max_size)
    {
      return (-1);
    }
  memory_arr[address] = value;
  return 0;
}
int
sc_memoryGet (int address, int *value)
{
  if (address < 0 || address > max_size)
    {
      return (-1);
    }
  *value = memory_arr[address];
  return 0;
}
int
sc_memorySave (char *file_memory)
{
  FILE *f;
  if ((f = fopen (file_memory, "wb")) == NULL)
    {

      fwrite (memory_arr, sizeof (int), 100, f);
    }
  return 0;
}
int
sc_memoryLoad (char *filename)
{
  FILE *f;
  if ((f = fopen (filename, "wb")) == NULL)
    {

      fread (memory_arr, sizeof (int), 100, f);
    }
  return 0;
}
int
sc_regInit (void)
{
  flag = 0;

  return 0;
}
int
sc_regSet (int regester, int value)
{
  if (value == 1)
    {
      flag = (flag | (1 << (regester - 1)));
    }
  else
    {
      flag = (flag & (~(1 << (regester - 1))));
    }
  return 0;
}
int
sc_regGet (int regester, int *value)
{
  (*value) = (flag & (1 << (regester - 1))) >> (regester - 1);
  return 0;
}
int
sc_commandEncode (int command, int operand, int *value)
{
  command = command << 7;
  (*value) = command | operand;
  return 0;
}
int
sc_commandDecode (int value, int *command, int *operand)
{
  (*command) = value >> 7;
  (*operand) = 127 & value;
  return 0;
}
