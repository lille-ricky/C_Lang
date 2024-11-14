#include <stdio.h>
#include <stdlib.h>

void calculateFrequencies( int nbr) {
    // DInamic memory allocation of caracters
    char *characters = (char *)malloc(nbr * sizeof(char));
    if (characters == NULL) {
        printf("Memory allocation error\n");
        return;
    }

    // Caracter reading
    printf("Enter %d caracters : ", nbr);
    for (int i = 0; i < nbr; i++){
        scanf(" %c", &characters[i]); // space before %c in order to ignore blank spaces
    }

    // ASCII characters are between 0 and 127
    int frequencies[128] = {0};

    // Frequentcy calculator 
    for (int i = 0; i < nbr; i++) {
        if ((unsigned char)characters[i] < 128) { // ASCI character check
            frequencies[(unsigned char)characters[i]]++;
        }
    }

    printf("Frequencies of characters :\n");
    for (int i = 0; i < 128; i++) {
        if (frequencies[i] > 0) {
            printf("'%c' : %d\n", i, frequencies[i]);
        }
    }

    // Memory Clear
    free(characters); 
}


int main(void) {
    int nbr;
    printf("Enter the number of characters to check : ");
    scanf("%d", &nbr);

    calculateFrequencies(nbr);

    return 0;
}