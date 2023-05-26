#include "MySimpleComputer.h"
#include <stdio.h>
#include <stdlib.h>
int a,b;
int
main()
{
a=8;
b=8;
  sc_memoryInit ();
sc_commandDecode(32766, &a, &b);
return 1;
}
