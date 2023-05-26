#include "myBigChairs.h"
#include "myTerm.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h> 
#include <fcntl.h> 
int
main ()
{
int fd, count;
int big[18][2]= {0};
fd = open ("shrift.bin", O_RDONLY); 
mt_clrscr();
bc_bigCharRead (fd, (int *)big, 18, &count); 
int v, colls =6 , collst = 0;
for(v=0; v<6;v++){
bc_printBigChar(big[v],colls,(11+collst),5,2);
collst += 10;
}
colls += 10;
collst = 0;
/*for(v = 6; v < 12; v++){
bc_printBigChar(big[v],colls,(11+collst),1,2);
collst += 10;
}
colls += 10;
collst = 0;
for(v = 12; v < 18; v++){
bc_printBigChar(big[v],colls,(11+collst),1,2);
collst += 10;
}*/
return 0;
}
