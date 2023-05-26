#include <stdio.h>
#include "myTerm.h"

int main() {
    mt_clrscr();
    mt_gotoXY(10, 5);
    mt_setfgcolor(COLOR_RED);
    printf("Данилюк Андрей");
    mt_setbgcolor(COLOR_CYAN);
    mt_gotoXY(6, 11);
    mt_setfgcolor(COLOR_GREEN);
    printf("ИА-131\n");
    mt_setbgcolor(COLOR_DEFAULT);
}