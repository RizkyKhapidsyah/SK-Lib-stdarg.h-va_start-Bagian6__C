#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

void testit(int i, ...) {
    va_list argptr;
    va_start(argptr, i);

    if (i == 0) {
        int n = va_arg(argptr, int);
        printf("%d\n", n);
    } else {
        char* s = va_arg(argptr, char*);
        printf("%s\n", s);
    }

    va_end(argptr);
}

int main() {
    testit(0, 0xFFFFFFFF); // 1st problem: 0xffffffff is not an int
    testit(1, NULL);       // 2nd problem: NULL is not a char*
    _getch();
    return 0;
}