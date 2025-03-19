//4. Function with Arguments and With Return Value
#include <stdio.h>

// Function declaration
int multiply(int, int);

int main() {
    int num1, num2, result;

    // Get user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = multiply(num1, num2); // Function call with arguments
    printf("Product = %d\n", result);

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b; 
}
