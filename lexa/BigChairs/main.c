#include "myBigChairs.h"
#include "myTerm.h"
#include <stdio.h>
#include <stdlib.h>
int
main ()
{
mt_clrscr();
bc_box(1,1,80,10);
int big[18][2]= {0};
int v, colls =6 , collst = 0;
for(v=0; v<6;v++){
bc_printBigChar(big[v],colls,(11+collst),1,2);
collst += 10;
}
colls += 10;
collst = 0;
for(v = 6; v < 12; v++){
bc_printBigChar(big[v],colls,(11+collst),1,2);
collst += 10;
}
colls += 10;
collst = 0;
for(v = 12; v < 18; v++){
bc_printBigChar(big[v],colls,(11+collst),1,2);
collst += 10;
}
return 0;
}
