#include <stdio.h>

// 21) Swap Two Values using Call by Value and Call by Address

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 22) One-Dimensional Array Using Pointers

void demonstrateArrayUsingPointers() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

// 23) Display Elements of an Array in Reverse Order Using Pointers

void displayArrayInReverseUsingPointers() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Array elements in reverse order using pointers:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

// 24) Character Pointer Demonstration

void demonstrateCharacterPointer() {
    char str[] = "Hello, World!";
    char *ptr = str;

    printf("String using character pointer: %s\n", ptr);
}

// 25) Call a Function

void greet() {
    printf("Hello, World!\n");
}

// 26) Function Declarations and Definitions

int add(int a, int b) {
    return a + b;
}

// 27) Arithmetic Operations Using Functions

float addFloats(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

// 28) Different Categories of Functions

void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int getNumber() {
    return 10;
}

void functionCategories() {
    int x = 5, y = 10;
    printf("Addition result: %d\n", add(x, y));
    printSum(x, y);
    printf("Number: %d\n", getNumber());
    greet();
}

// 29) Function with Arguments and Return Value

int addWithArgsAndReturn(int a, int b) {
    return a + b;
}

// 30) Function without Arguments and without Return Value

void greetWithoutArgsAndReturn() {
    printf("Hello, World!\n");
}

int main() {
    // 21) Swap Two Values using Call by Value
    int x = 5, y = 10;
    printf("Before swap (by value): x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swap (by value): x = %d, y = %d\n", x, y);

    // 21) Swap Two Values using Call by Address
    printf("Before swap (by address): x = %d, y = %d\n", x, y);
    swapByAddress(&x, &y);
    printf("After swap (by address): x = %d, y = %d\n", x, y);

    // 22) One-Dimensional Array Using Pointers
    demonstrateArrayUsingPointers();

    // 23) Display Elements of an Array in Reverse Order Using Pointers
    displayArrayInReverseUsingPointers();

    // 24) Character Pointer Demonstration
    demonstrateCharacterPointer();

    // 25) Call a Function
    greet();

    // 26) Function Declarations and Definitions
    greet();
    int result = add(5, 10);
    printf("Sum: %d\n", result);

    // 27) Arithmetic Operations Using Functions
    float a = 10.0, b = 5.0;
    printf("Addition: %.2f\n", addFloats(a, b));
    printf("Subtraction: %.2f\n", subtract(a, b));
    printf("Multiplication: %.2f\n", multiply(a, b));
    printf("Division: %.2f\n", divide(a, b));

    // 28) Different Categories of Functions
    functionCategories();

    // 29) Function with Arguments and Return Value
    int addResult = addWithArgsAndReturn(5, 10);
    printf("Addition result: %d\n", addResult);

    // 30) Function without Arguments and without Return Value
    greetWithoutArgsAndReturn();

    return 0;
}
