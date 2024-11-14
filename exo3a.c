#include <stdio.h>

int isEven(unsigned int a) {
    return !(a & 1); // Parity check
}


int main(void) {
    unsigned int a;

    printf("Please enter a positive number : ");
    scanf("%u", &a);
    if (a < 0) {
        return 0;
    }
    printf("The number %u is %s.\n", a, isEven(a) ? "even" : "odd");
    
    return 0;
}