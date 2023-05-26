#include "myBigChairs.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int
main ()
{
// char * str[]{'l', 'q', 'q'};
//int big[2] = {1,5}; проверяли set/get
int fd, count=18;
fd = open ("shrift.bin", O_CREAT | O_WRONLY | O_TRUNC, 0666);
int big[18][2] = {0};
int v=0,k, m;


//k = bc_getbigcharpos ( b, 4, 2, &v);
//bc_setbigcharpos ( b, 4, 2, v);
//printf("v=%d\nk=%d\nb0=%d\nb1%d\n",v,k, b[0],b[1]);
//bc_printA (BOXCHAR_REC);
mt_clrscr();
bc_box (5, 10, 9, 9);
//bc_printbigchar (big,5,5, YELLOW, GREEN);

/* 0 */
bc_setbigcharpos(big[0], 0, 2, 1);
bc_setbigcharpos(big[0], 0, 3, 1);
bc_setbigcharpos(big[0], 0, 4, 1);
bc_setbigcharpos(big[0], 0, 5, 1);
bc_setbigcharpos(big[0], 1, 1, 1);
bc_setbigcharpos(big[0], 1, 6, 1);
bc_setbigcharpos(big[0], 2, 1, 1);
bc_setbigcharpos(big[0], 2, 6, 1);
bc_setbigcharpos(big[0], 3, 1, 1);
bc_setbigcharpos(big[0], 3, 6, 1);
bc_setbigcharpos(big[0], 4, 1, 1);
bc_setbigcharpos(big[0], 4, 6, 1);
bc_setbigcharpos(big[0], 5, 1, 1);
bc_setbigcharpos(big[0], 5, 6, 1);
bc_setbigcharpos(big[0], 6, 1, 1);
bc_setbigcharpos(big[0], 6, 6, 1);
bc_setbigcharpos(big[0], 7, 2, 1);
bc_setbigcharpos(big[0], 7, 3, 1);
bc_setbigcharpos(big[0], 7, 4, 1);
bc_setbigcharpos(big[0], 7, 5, 1);

/*1*/
bc_setbigcharpos(big[1], 1, 2, 1);
bc_setbigcharpos(big[1], 2, 1, 1);
bc_setbigcharpos(big[1], 3, 0, 1);
bc_setbigcharpos(big[1], 3, 1, 1);
bc_setbigcharpos(big[1], 3, 2, 1);
bc_setbigcharpos(big[1], 3, 3, 1);
bc_setbigcharpos(big[1], 3, 4, 1);
bc_setbigcharpos(big[1], 3, 5, 1);
bc_setbigcharpos(big[1], 3, 6, 1);
bc_setbigcharpos(big[1], 3, 7, 1);
bc_setbigcharpos(big[1], 2, 7, 1);
bc_setbigcharpos(big[1], 4, 7, 1);
/*bc_setbigcharpos(big[1], 7, 5, 1);
bc_setbigcharpos(big[1], 7, 6, 1);

/*2*/
bc_setbigcharpos(big[2], 2, 2, 1);
bc_setbigcharpos(big[2], 3, 1, 1);
bc_setbigcharpos(big[2], 4, 1, 1);
bc_setbigcharpos(big[2], 5, 1, 1);
bc_setbigcharpos(big[2], 5, 2, 1);
bc_setbigcharpos(big[2], 4, 3, 1);
bc_setbigcharpos(big[2], 3, 4, 1);
bc_setbigcharpos(big[2], 2, 5, 1);
bc_setbigcharpos(big[2], 2, 6, 1);
bc_setbigcharpos(big[2], 3, 6, 1);
bc_setbigcharpos(big[2], 4, 6, 1);
bc_setbigcharpos(big[2], 5, 6, 1);
/*bc_setbigcharpos(big[2], 7, 2, 1);
bc_setbigcharpos(big[2], 7, 3, 1);
bc_setbigcharpos(big[2], 7, 4, 1);
bc_setbigcharpos(big[2], 7, 5, 1);
bc_setbigcharpos(big[2], 7, 6, 1);

/*3*/
bc_setbigcharpos(big[3], 3, 0, 1);
bc_setbigcharpos(big[3], 4, 0, 1);
bc_setbigcharpos(big[3], 5, 0, 1);
bc_setbigcharpos(big[3], 6, 1, 1);
bc_setbigcharpos(big[3], 6, 2, 1);
bc_setbigcharpos(big[3], 5, 3, 1);
bc_setbigcharpos(big[3], 4, 3, 1);
bc_setbigcharpos(big[3], 3, 3, 1);
bc_setbigcharpos(big[3], 6, 4, 1);
bc_setbigcharpos(big[3], 6, 5, 1);
bc_setbigcharpos(big[3], 5, 6, 1);
bc_setbigcharpos(big[3], 4, 6, 1);
bc_setbigcharpos(big[3], 3, 6, 1);
/*bc_setbigcharpos(big[3], 6, 6, 1);
bc_setbigcharpos(big[3], 7, 2, 1);
bc_setbigcharpos(big[3], 7, 3, 1);
bc_setbigcharpos(big[3], 7, 4, 1);
bc_setbigcharpos(big[3], 7, 5, 1);

/*4*/
bc_setbigcharpos(big[4], 1, 0, 1);
bc_setbigcharpos(big[4], 1, 1, 1);
bc_setbigcharpos(big[4], 1, 2, 1);
bc_setbigcharpos(big[4], 1, 3, 1);
bc_setbigcharpos(big[4], 2, 3, 1);
bc_setbigcharpos(big[4], 3, 3, 1);
bc_setbigcharpos(big[4], 4, 3, 1);
bc_setbigcharpos(big[4], 4, 0, 1);
bc_setbigcharpos(big[4], 4, 1, 1);
bc_setbigcharpos(big[4], 4, 2, 1);
bc_setbigcharpos(big[4], 4, 4, 1);
bc_setbigcharpos(big[4], 4, 5, 1);
bc_setbigcharpos(big[4], 4, 6, 1);
bc_setbigcharpos(big[4], 4, 7, 1);

/*5*/
bc_setbigcharpos(big[5], 2, 0, 1);
bc_setbigcharpos(big[5], 3, 0, 1);
bc_setbigcharpos(big[5], 4, 0, 1);
bc_setbigcharpos(big[5], 5, 0, 1);
bc_setbigcharpos(big[5], 2, 1, 1);
bc_setbigcharpos(big[5], 2, 2, 1);
bc_setbigcharpos(big[5], 2, 3, 1);
bc_setbigcharpos(big[5], 3, 3, 1);
bc_setbigcharpos(big[5], 4, 3, 1);
bc_setbigcharpos(big[5], 5, 3, 1);
bc_setbigcharpos(big[5], 5, 4, 1);
bc_setbigcharpos(big[5], 5, 5, 1);
bc_setbigcharpos(big[5], 5, 6, 1);

bc_setbigcharpos(big[5], 4, 6, 1);
bc_setbigcharpos(big[5], 3, 6, 1);
bc_setbigcharpos(big[5], 2, 6, 1);
/*bc_setbigcharpos(big[5], 7, 2, 1);
bc_setbigcharpos(big[5], 7, 3, 1);
bc_setbigcharpos(big[5], 7, 4, 1);
bc_setbigcharpos(big[5], 7, 5, 1);

/*6*/
bc_setbigcharpos(big[6], 2, 0, 1);
bc_setbigcharpos(big[6], 3, 0, 1);
bc_setbigcharpos(big[6], 4, 0, 1);
bc_setbigcharpos(big[6], 5, 0, 1);
bc_setbigcharpos(big[6], 2, 1, 1);
bc_setbigcharpos(big[6], 2, 2, 1);
bc_setbigcharpos(big[6], 2, 3, 1);
bc_setbigcharpos(big[6], 2, 4, 1);
bc_setbigcharpos(big[6], 2, 5, 1);
bc_setbigcharpos(big[6], 2, 6, 1);
bc_setbigcharpos(big[6], 3, 6, 1);
bc_setbigcharpos(big[6], 4, 6, 1);
bc_setbigcharpos(big[6], 5, 6, 1);
bc_setbigcharpos(big[6], 5, 5, 1);
bc_setbigcharpos(big[6], 5, 4, 1);
bc_setbigcharpos(big[6], 4, 4, 1);
bc_setbigcharpos(big[6], 3, 4, 1);
/*bc_setbigcharpos(big[6], 7, 2, 1);
bc_setbigcharpos(big[6], 7, 3, 1);
bc_setbigcharpos(big[6], 7, 4, 1);
bc_setbigcharpos(big[6], 7, 5, 1);

/*7*/
bc_setbigcharpos(big[7], 1, 0, 1);
bc_setbigcharpos(big[7], 2, 0, 1);
bc_setbigcharpos(big[7], 3, 0, 1);
bc_setbigcharpos(big[7], 4, 0, 1);
bc_setbigcharpos(big[7], 5, 0, 1);
bc_setbigcharpos(big[7], 6, 0, 1);
bc_setbigcharpos(big[7], 6, 1, 1);
bc_setbigcharpos(big[7], 5, 2, 1);
bc_setbigcharpos(big[7], 4, 3, 1);
bc_setbigcharpos(big[7], 3, 4, 1);
bc_setbigcharpos(big[7], 3, 5, 1);
bc_setbigcharpos(big[7], 3, 6, 1);
bc_setbigcharpos(big[7], 3, 7, 1);

/*8*/
bc_setbigcharpos(big[8], 2, 0, 1);
bc_setbigcharpos(big[8], 3, 0, 1);
bc_setbigcharpos(big[8], 4, 0, 1);
bc_setbigcharpos(big[8], 5, 0, 1);
bc_setbigcharpos(big[8], 1, 1, 1);
bc_setbigcharpos(big[8], 6, 1, 1);
bc_setbigcharpos(big[8], 1, 2, 1);
bc_setbigcharpos(big[8], 6, 2, 1);
bc_setbigcharpos(big[8], 2, 3, 1);
bc_setbigcharpos(big[8], 3, 3, 1);
bc_setbigcharpos(big[8], 4, 3, 1);
bc_setbigcharpos(big[8], 5, 3, 1);
bc_setbigcharpos(big[8], 1, 4, 1);
bc_setbigcharpos(big[8], 6, 4, 1);
bc_setbigcharpos(big[8], 1, 5, 1);
bc_setbigcharpos(big[8], 6, 5, 1);
bc_setbigcharpos(big[8], 1, 6, 1);
bc_setbigcharpos(big[8], 6, 6, 1);
bc_setbigcharpos(big[8], 2, 7, 1);
bc_setbigcharpos(big[8], 3, 7, 1);
bc_setbigcharpos(big[8], 4, 7, 1);
bc_setbigcharpos(big[8], 5, 7, 1);

/*9*/
bc_setbigcharpos(big[9], 2, 0, 1);
bc_setbigcharpos(big[9], 3, 0, 1);
bc_setbigcharpos(big[9], 4, 0, 1);
bc_setbigcharpos(big[9], 5, 0, 1);
bc_setbigcharpos(big[9], 1, 1, 1);
bc_setbigcharpos(big[9], 6, 1, 1);
bc_setbigcharpos(big[9], 1, 2, 1);
bc_setbigcharpos(big[9], 6, 2, 1);
bc_setbigcharpos(big[9], 1, 3, 1);
bc_setbigcharpos(big[9], 6, 3, 1);
bc_setbigcharpos(big[9], 2, 4, 1);
bc_setbigcharpos(big[9], 3, 4, 1);
bc_setbigcharpos(big[9], 4, 4, 1);
bc_setbigcharpos(big[9], 5, 4, 1);
bc_setbigcharpos(big[9], 6, 4, 1);
bc_setbigcharpos(big[9], 6, 5, 1);
bc_setbigcharpos(big[9], 1, 6, 1);
bc_setbigcharpos(big[9], 6, 6, 1);
bc_setbigcharpos(big[9], 2, 7, 1);
bc_setbigcharpos(big[9], 3, 7, 1);
bc_setbigcharpos(big[9], 4, 7, 1);
bc_setbigcharpos(big[9], 5, 7, 1);
/*A*/
bc_setbigcharpos(big[10], 2, 0, 1);
bc_setbigcharpos(big[10], 3, 0, 1);
bc_setbigcharpos(big[10], 4, 0, 1);
bc_setbigcharpos(big[10], 5, 0, 1);
bc_setbigcharpos(big[10], 1, 1, 1);
bc_setbigcharpos(big[10], 6, 1, 1);
bc_setbigcharpos(big[10], 1, 2, 1);
bc_setbigcharpos(big[10], 6, 2, 1);
bc_setbigcharpos(big[10], 1, 3, 1);
bc_setbigcharpos(big[10], 6, 3, 1);
bc_setbigcharpos(big[10], 1, 4, 1);
bc_setbigcharpos(big[10], 2, 4, 1);
bc_setbigcharpos(big[10], 3, 4, 1);
bc_setbigcharpos(big[10], 4, 4, 1);
bc_setbigcharpos(big[10], 5, 4, 1);
bc_setbigcharpos(big[10], 6, 4, 1);
bc_setbigcharpos(big[10], 1, 5, 1);
bc_setbigcharpos(big[10], 6, 5, 1);
bc_setbigcharpos(big[10], 1, 6, 1);
bc_setbigcharpos(big[10], 6, 6, 1);
bc_setbigcharpos(big[10], 1, 7, 1);
bc_setbigcharpos(big[10], 6, 7, 1);
/*B*/
bc_setbigcharpos(big[11], 1, 0, 1);
bc_setbigcharpos(big[11], 2, 0, 1);
bc_setbigcharpos(big[11], 3, 0, 1);
bc_setbigcharpos(big[11], 4, 0, 1);
bc_setbigcharpos(big[11], 5, 0, 1);
bc_setbigcharpos(big[11], 1, 1, 1);
bc_setbigcharpos(big[11], 6, 1, 1);
bc_setbigcharpos(big[11], 1, 2, 1);
bc_setbigcharpos(big[11], 6, 2, 1);
bc_setbigcharpos(big[11], 1, 3, 1);
bc_setbigcharpos(big[11], 2, 3, 1);
bc_setbigcharpos(big[11], 3, 3, 1);
bc_setbigcharpos(big[11], 4, 3, 1);
bc_setbigcharpos(big[11], 5, 3, 1);
bc_setbigcharpos(big[11], 1, 4, 1);
bc_setbigcharpos(big[11], 6, 4, 1);
bc_setbigcharpos(big[11], 1, 5, 1);
bc_setbigcharpos(big[11], 6, 5, 1);
bc_setbigcharpos(big[11], 1, 6, 1);
bc_setbigcharpos(big[11], 6, 6, 1);
bc_setbigcharpos(big[11], 1, 7, 1);
bc_setbigcharpos(big[11], 2, 7, 1);
bc_setbigcharpos(big[11], 3, 7, 1);
bc_setbigcharpos(big[11], 4, 7, 1);
bc_setbigcharpos(big[11], 5, 7, 1);
/*C*/
bc_setbigcharpos(big[12], 1, 0, 1);
bc_setbigcharpos(big[12], 2, 0, 1);
bc_setbigcharpos(big[12], 3, 0, 1);
bc_setbigcharpos(big[12], 4, 0, 1);
bc_setbigcharpos(big[12], 5, 0, 1);
bc_setbigcharpos(big[12], 1, 1, 1);
bc_setbigcharpos(big[12], 6, 1, 1);
bc_setbigcharpos(big[12], 1, 2, 1);
bc_setbigcharpos(big[12], 6, 2, 1);
bc_setbigcharpos(big[12], 1, 3, 1);
bc_setbigcharpos(big[12], 1, 4, 1);
bc_setbigcharpos(big[12], 1, 5, 1);
bc_setbigcharpos(big[12], 6, 5, 1);
bc_setbigcharpos(big[12], 1, 6, 1);
bc_setbigcharpos(big[12], 6, 6, 1);
bc_setbigcharpos(big[12], 1, 7, 1);
bc_setbigcharpos(big[12], 2, 7, 1);
bc_setbigcharpos(big[12], 3, 7, 1);
bc_setbigcharpos(big[12], 4, 7, 1);
bc_setbigcharpos(big[12], 5, 7, 1);
/*D*/
bc_setbigcharpos(big[13], 1, 0, 1);
bc_setbigcharpos(big[13], 2, 0, 1);
bc_setbigcharpos(big[13], 3, 0, 1);
bc_setbigcharpos(big[13], 4, 0, 1);
bc_setbigcharpos(big[13], 1, 1, 1);
bc_setbigcharpos(big[13], 5, 1, 1);
bc_setbigcharpos(big[13], 1, 2, 1);
bc_setbigcharpos(big[13], 6, 2, 1);
bc_setbigcharpos(big[13], 1, 3, 1);
bc_setbigcharpos(big[13], 6, 3, 1);
bc_setbigcharpos(big[13], 1, 4, 1);
bc_setbigcharpos(big[13], 6, 4, 1);
bc_setbigcharpos(big[13], 1, 5, 1);
bc_setbigcharpos(big[13], 6, 5, 1);
bc_setbigcharpos(big[13], 1, 6, 1);
bc_setbigcharpos(big[13], 6, 6, 1);
bc_setbigcharpos(big[13], 1, 7, 1);
bc_setbigcharpos(big[13], 2, 7, 1);
bc_setbigcharpos(big[13], 3, 7, 1);
bc_setbigcharpos(big[13], 4, 7, 1);
bc_setbigcharpos(big[13], 5, 7, 1);
/*E*/
bc_setbigcharpos(big[14], 1, 0, 1);
bc_setbigcharpos(big[14], 2, 0, 1);
bc_setbigcharpos(big[14], 3, 0, 1);
bc_setbigcharpos(big[14], 4, 0, 1);
bc_setbigcharpos(big[14], 5, 0, 1);
bc_setbigcharpos(big[14], 6, 0, 1);
bc_setbigcharpos(big[14], 1, 1, 1);
bc_setbigcharpos(big[14], 1, 2, 1);
bc_setbigcharpos(big[14], 1, 3, 1);
bc_setbigcharpos(big[14], 2, 3, 1);
bc_setbigcharpos(big[14], 3, 3, 1);
bc_setbigcharpos(big[14], 4, 3, 1);
bc_setbigcharpos(big[14], 5, 3, 1);
bc_setbigcharpos(big[14], 1, 4, 1);
bc_setbigcharpos(big[14], 1, 5, 1);
bc_setbigcharpos(big[14], 1, 6, 1);
bc_setbigcharpos(big[14], 1, 7, 1);
bc_setbigcharpos(big[14], 2, 7, 1);
bc_setbigcharpos(big[14], 3, 7, 1);
bc_setbigcharpos(big[14], 4, 7, 1);
bc_setbigcharpos(big[14], 5, 7, 1);
bc_setbigcharpos(big[14], 6, 7, 1);
/*F*/
bc_setbigcharpos(big[15], 1, 0, 1);
bc_setbigcharpos(big[15], 2, 0, 1);
bc_setbigcharpos(big[15], 3, 0, 1);
bc_setbigcharpos(big[15], 4, 0, 1);
bc_setbigcharpos(big[15], 5, 0, 1);
bc_setbigcharpos(big[15], 6, 0, 1);
bc_setbigcharpos(big[15], 1, 1, 1);
bc_setbigcharpos(big[15], 1, 2, 1);
bc_setbigcharpos(big[15], 1, 3, 1);
bc_setbigcharpos(big[15], 2, 3, 1);
bc_setbigcharpos(big[15], 3, 3, 1);
bc_setbigcharpos(big[15], 4, 3, 1);
bc_setbigcharpos(big[15], 1, 4, 1);
bc_setbigcharpos(big[15], 1, 5, 1);
bc_setbigcharpos(big[15], 1, 6, 1);
bc_setbigcharpos(big[15], 1, 7, 1);
/*+*/
bc_setbigcharpos(big[16], 3, 0, 1);
bc_setbigcharpos(big[16], 4, 0, 1);
bc_setbigcharpos(big[16], 3, 1, 1);
bc_setbigcharpos(big[16], 4, 1, 1);
bc_setbigcharpos(big[16], 3, 2, 1);
bc_setbigcharpos(big[16], 4, 2, 1);
bc_setbigcharpos(big[16], 0, 3, 1);
bc_setbigcharpos(big[16], 1, 3, 1);
bc_setbigcharpos(big[16], 2, 3, 1);
bc_setbigcharpos(big[16], 3, 3, 1);
bc_setbigcharpos(big[16], 4, 3, 1);
bc_setbigcharpos(big[16], 5, 3, 1);
bc_setbigcharpos(big[16], 6, 3, 1);
bc_setbigcharpos(big[16], 7, 3, 1);
bc_setbigcharpos(big[16], 0, 4, 1);
bc_setbigcharpos(big[16], 1, 4, 1);
bc_setbigcharpos(big[16], 2, 4, 1);
bc_setbigcharpos(big[16], 3, 4, 1);
bc_setbigcharpos(big[16], 4, 4, 1);
bc_setbigcharpos(big[16], 5, 4, 1);
bc_setbigcharpos(big[16], 6, 4, 1);
bc_setbigcharpos(big[16], 7, 4, 1);
bc_setbigcharpos(big[16], 3, 5, 1);
bc_setbigcharpos(big[16], 4, 5, 1);
bc_setbigcharpos(big[16], 3, 6, 1);
bc_setbigcharpos(big[16], 4, 6, 1);
bc_setbigcharpos(big[16], 3, 7, 1);
bc_setbigcharpos(big[16], 4, 7, 1);
/*-*/
bc_setbigcharpos(big[17], 0, 3, 1);
bc_setbigcharpos(big[17], 1, 3, 1);
bc_setbigcharpos(big[17], 2, 3, 1);
bc_setbigcharpos(big[17], 3, 3, 1);
bc_setbigcharpos(big[17], 4, 3, 1);
bc_setbigcharpos(big[17], 5, 3, 1);
bc_setbigcharpos(big[17], 6, 3, 1);
bc_setbigcharpos(big[17], 7, 3, 1);
bc_setbigcharpos(big[17], 0, 4, 1);
bc_setbigcharpos(big[17], 1, 4, 1);
bc_setbigcharpos(big[17], 2, 4, 1);
bc_setbigcharpos(big[17], 3, 4, 1);
bc_setbigcharpos(big[17], 4, 4, 1);
bc_setbigcharpos(big[17], 5, 4, 1);
bc_setbigcharpos(big[17], 6, 4, 1);
bc_setbigcharpos(big[17], 7, 4, 1);
//printf("0 = %X %X\n" big[0][0], big[0][1]);
int vivod, colls = 6,collst = 0;
for (vivod = 0 ; vivod < 3; vivod ++){
bc_printBigChar(big[vivod], colls,(1 + collst),1,2);
collst += 10;
}
colls +=10;
collst = 0;
for (vivod = 3 ; vivod < 6; vivod++){
bc_printBigChar(big[vivod], colls,(11 + collst),1,2);
collst += 10;
}
colls +=10;
collst = 0;
for (vivod = 6 ; vivod < 9; vivod++){
bc_printBigChar(big[vivod], colls,(11 + collst),1,2);
collst += 10;
}
colls +=10;
collst = 0;
for (vivod = 9 ; vivod < 12; vivod++){
bc_printBigChar(big[vivod], colls,(11 + collst),1,2);
collst += 10;
}
colls +=10;
collst = 0;
for (vivod = 12 ; vivod < 15; vivod++){
bc_printBigChar(big[vivod], colls,(11 + collst),1,2);
collst += 10;
}
colls +=10;
collst = 0;
for (vivod = 15 ; vivod < 18; vivod++){
bc_printBigChar(big[vivod], colls,(11 + collst),1,2);
collst += 10;
}
//bc_printbigchar(big[17], 6,11,1,2);

bc_bigCharWrite(fd, (int *)big, count);


mt_gotoXY (1, 1);
}
