#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num, temp, digit, sum = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Check if it is a strong number
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong numbe
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        r.\n", num);

    return 0;
}
