#include <stdio.h>

int main() {
    int n, i, marks, total = 0;
    float average;

    // Finding total and average of marks
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks);
        total += marks;
    }

    average = (float)total / n;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    // Checking if a number is even or odd
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}
