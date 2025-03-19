#include <stdio.h>

// Function declarations
int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);
int modulus(int, int);

void calculator(); 

int main() {
    calculator(); 
    return 0;
}

// Function to display the menu and handle user input
void calculator() {
    int num1, num2, choice;
    float result;

    
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation using function calls
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d\n", (int)result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d\n", (int)result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %d\n", (int)result);
            break;
        case 4:
            if (num2 == 0)
                printf("Error! Division by zero.\n");
            else {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;
        case 5:
            if (num2 == 0)
                printf("Error! Modulus by zero.\n");
            else {
                result = modulus(num1, num2);
                printf("Result: %d\n", (int)result);
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b; 
}

int modulus(int a, int b) {
    return a % b;
}
