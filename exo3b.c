#include <stdio.h>

unsigned int bitInverter(unsigned int a) {
    unsigned int inversed = 0;
    while (a) {
        inversed = (inversed << 1) | ( a & 1);
        a >>= 1;
    }
    return inversed;
}

int  main(void) {
    unsigned int a = 12;

    printf("The binary inverse of %u is %u.\n",a, bitInverter(a));
    return 0;
} 