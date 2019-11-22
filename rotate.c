#include <stdio.h>
#include <unistd.h>

void
advance_spinner() {
    static char bars[] = { '/', '-', '\\', '|' };
    static int nbars = sizeof(bars) / sizeof(char);
    static int pos = 0;

    printf("%c\r", bars[pos]);
    fflush(stdout);
    pos = (pos + 1) % nbars;
}

int
main() {
    while (1) {
        advance_spinner();
        usleep(300);
    }

    return 0;
}
