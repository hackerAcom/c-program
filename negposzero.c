#include <stdio.h>

#define VALUE 10

int main() {

    // Preprocessor directives
    #if VALUE < 0
        printf("The value is negative.\n");
    #elif VALUE == 0
        printf("The value is zero.\n");
    #elif VALUE > 0 && VALUE <= 10
        printf("The value is between 1 and 10.\n");
    #else
        printf("The value is greater than 10.\n");
    #endif

    return 0;
}
