// Mini project- A Digital Clock
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int h, m, s;
    char period[] = "AM";

    while(1) {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        h = t->tm_hour;
        m = t->tm_min;
        s = t->tm_sec;

        if (h == 0) {
            h = 12;
        }
        if (h > 12) {
            h = h - 12;
            strcpy(period, "PM");
        } else {
            strcpy(period, "AM");
        }

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("Digital Clock\n");
        printf("%02d:%02d:%02d %s\n", h, m, s, period);

        sleep(1);
    }
    return 0;
}