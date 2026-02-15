#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\033[?25l"); // Hide the cursor
    while(1) {
        printf("\033[%d;%dm%c", rand()%30, rand()%80, rand()%94 + 33);
        fflush(stdout);
    }
    return 0;
}
