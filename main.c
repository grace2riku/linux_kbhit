#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "kbhit.h"

int main(void) {
    KB_open();

    while (1) {
        if ( kbhit() ) {
            char ch = linux_getch();

            printf("kbhit : %c\n", ch);

            if ('q' == ch) {
                break;
            }
        }

        usleep(10000);

    }
    
    KB_close();
}