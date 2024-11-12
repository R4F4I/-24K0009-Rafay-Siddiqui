#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 1000  // Maximum number of digits for factorial

// Function to multiply the large number stored in result[] by a number
void multiply(int *result, int *size, int n) {
    int carry = 0;

    // Multiply each digit in the result[] by n and store in result[]
    for (int i = 0; i < *size; i++) {
        int prod = result[i] * n + carry;  // Multiply and add carry
        result[i] = prod % 10;             // Store the digit in current position
        carry = prod / 10;                 // Update the carry
    }

    // Handle the remaining carry (add more digits to the result)
    while (carry) {
        result[*size] = carry % 10;
        carry = carry / 10;
        (*size)++;
    }
}

// Recursive factorial function
void factorial(int n, int *result, int *size) {
    // Base case: 0! = 1 and 1! = 1
    if (n == 0 || n == 1) {
        result[0] = 1;
        *size = 1;  // Result size is 1
        return;
    }

    // Recursively calculate the factorial for (n-1)
    factorial(n - 1, result, size);

    // Multiply the result by n
    multiply(result, size, n);
}

// Function to print the large factorial stored in result[]
void print_factorial(int *result, int size) {
    // Print the result in reverse (since we store the digits in reverse order)
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int result[MAX_DIGITS];  // Array to store the large factorial result
    int size = 0;            // Variable to track the size of the result

    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial of n
    factorial(n, result, &size);

    // Print the result
    printf("Factorial of %d is:\n", n);
    print_factorial(result, size);

    return 0;
}
