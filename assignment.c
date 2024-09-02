
#include <stdio.h>
#include <string.h>                                         
int main() {
    int digit;
    
    // Prompt the user to enter a digit
    printf("Enter a digit (1 to 10): ");
    scanf("%d", &digit);
    
    // Switch-case construct to print the corresponding English word
    switch (digit) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        case 10:
            printf("Ten\n");
            break;
        default:
            printf("Invalid input. Please enter a digit between 1 and 10.\n");
    }

    return 0;
}

// 2. One-Dimensional Array: Read and print elements
void read_and_print_array(int size) {
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 3. Sum of Positive and Negative Elements in an Array
void sum_positive_negative(int size) {
    int arr[size], sum_positive = 0, sum_negative = 0;
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            sum_positive += arr[i];
        } else if(arr[i] < 0) {
            sum_negative += arr[i];
        }
    }
    printf("Sum of positive elements: %d\n", sum_positive);
    printf("Sum of negative elements: %d\n", sum_negative);
}
//4. question
#include <stdio.h>

void read_and_print_2d_array(int rows, int cols) {
    int arr[rows][cols];
    
    // Input elements into the array
    printf("Enter elements of the array:\\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the array elements
    printf("Array elements:\\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\\n");  // Move to the next line after printing each row
    }
}

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Call the function to read and print the 2D array
    read_and_print_2d_array(rows, cols);

    return 0;
}


// 5. Matrix Multiplication
#include <stdio.h>

void matrix_multiplication(int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrix multiplication not possible with given dimensions\n");
        return;
    }
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Initialize the result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Print the resultant matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of the matrices
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Call the matrix multiplication function
    matrix_multiplication(r1, c1, r2, c2);

    return 0;
}
z 
// 6. Read integers into an array and check first/last element
void check_first_last_element(int size) {
    int arr[size], val;
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to check:\n");
    scanf("%d", &val);
    if(val == arr[0] || val == arr[size-1]) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}

// 7. Read and Display String using gets() and puts()
void read_display_string() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: ");
    puts(str);
}

// 8. Read and Display String using scanf() and printf()
void read_display_string_scanf() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
}

// 9. Search occurrence of a character in a string
void search_char_in_string() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    getchar();  // To consume the newline character left by scanf
    printf("Enter the character to search: ");
    scanf("%c", &ch);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    printf("Character '%c' occurred %d times in the string.\n", ch, count);
}

// 10. Sum of two integers using pointers
void sum_using_pointers() {
    int a, b, sum;
    int *p1 = &a, *p2 = &b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = *p1 + *p2;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

// Main function to run all the programs
int main() {
    int choice, size, rows, cols, r1, c1, r2, c2, digit;
    printf("Choose a program to run (11-20): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 11:
            printf("Enter a digit (1-10): ");
            scanf("%d", &digit);
            digit_to_word(digit);
            break;
        case 12:
            printf("Enter size of array: ");
            scanf("%d", &size);
            read_and_print_array(size);
            break;
        case 13:
            printf("Enter size of array: ");
            scanf("%d", &size);
            sum_positive_negative(size);
            break;
        case 14:
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printf("Enter number of columns: ");
            scanf("%d", &cols);
            read_and_print_2d_array(rows, cols);
            break;
        case 15:
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &r2, &c2);
            matrix_multiplication(r1, c1, r2, c2);
            break;
        case 16:
            printf("Enter size of array: ");
            scanf("%d", &size);
            check_first_last_element(size);
            break;
        case 17:
            read_display_string();
            break;
        case 18:
            read_display_string_scanf();
            break;
        case 19:
            search_char_in_string();
            break;
        case 20:
            sum_using_pointers();
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
