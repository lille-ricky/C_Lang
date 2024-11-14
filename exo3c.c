#include <stdio.h>

unsigned int bitInverter(unsigned int a) {
    unsigned int inversed = 0;
    while (a) {
        inversed = (inversed << 1) | ( a & 1);
        a >>= 1;
    }
    return inversed;
}

int isPalindrome(unsigned int a) {
    unsigned int inversed = bitInverter(a);
    return a == inversed;
}



int main(void) {
    unsigned int p = 56;
    printf("The number %u is %s palindrome.\n", p, isPalindrome(p) ? "a" : "not a");
    return 0;
}