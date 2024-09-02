#include <stdio.h>

int main() {
    int a, n, result = 1;

    // Input base and exponent
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    // Calculate a^n
    for (int i = 1; i <= n; i++) {
        result *= a;
    }

    printf("%d^%d = %d\n", a, n, result);

    return 0;
}
