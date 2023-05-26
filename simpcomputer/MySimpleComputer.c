#include "MySimpleComputer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int memory_a[100];
char c;
FILE *fp;
int
sc_memoryInit ()
{
  for (int i = 0; i < 100; i++)
    {
      memory_a[i] = 0;
    }
  return 1;
}
int
sc_memorySet (int address, int value)
{
  if ((address > 99) || (address < 0))
    {
      return -1;
    }
  else
    {
      memory_a[address] = value;
      return 1;
    }
}
int
sc_memoryGet (int address, int *value)
{
  if ((address > 99) || (address < 0))
    {
      return -1;
    }
  else
    {
      *value = memory_a[address];
      return 1;
    }
}
int
sc_memorySave (char *filename)
{
  if ((fp = fopen (filename, "wb")) == NULL)
    {

      fwrite (memory_a, sizeof (int), 100, fp);
    }
  return 1;
}
int
sc_memoryLoad (char *filename)
{
  if ((fp = fopen (filename, "wb")) == NULL)
    {

      fread (memory_a, sizeof (int), 100, fp);
    }
  return 1;
}

int
sc_regInit (void)
{
  c = c & 00000000;
  return 1;
}
int
sc_regSet (int registr, int value)
{
  if (value == 1)
    {
      c = (c | (1 << (registr - 1)));
    }
  else
    {
      c = (c & (~(1 << (registr - 1))));
    }
  return 1;
}
int
sc_regGet (int registr, int *value)
{
  (*value) = (c & (1 << (registr - 1))) >> (registr - 1);
  return 1;
}
int
sc_commandEncode (int command, int operand, int *value)
{
  command = command << 7;
  (*value) = command | operand;
  return 1;
}
int
sc_commandDecode (int value, int *command, int *operand)
{
if((value>>15)>0){
return -1;
}
  (*command) = value >> 7;
  (*operand) = 127 & value;
  return 1;
}
