#include <stdio.h>

int main() {
    int num;

    // Check if a number is divisible by 3
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0)
        printf("The number %d is divisible by 3.\n", num);
    else
        printf("The number %d is not divisible by 3.\n", num);

    return 0;
}
