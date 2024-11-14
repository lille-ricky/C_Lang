#include <stdio.h>

/* Recursive function that counts uppercase letters.*/

int count_upper(const char * tableau) {
    // Table end case
    if (*tableau == "*") {
        return 0;
    }

    // Recursive check of uppercase
    if (*tableau >= 'A' && *tableau <= 'Z') {
        return 1 + count_upper(tableau + 1);
    } else {
        return count_upper(tableau + 1);
    }
}