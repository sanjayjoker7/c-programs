/*#include <stdio.h>

// Function declaration 
int add();  

int main() {
    int result;

    // Function call
    result = add();

    // Print the result
    printf("Result = %d\n", result);

    return 0;
}

// Function definition
int add() {
    int a = 10, b = 20;
    int c = a + b; 
    return c; 
}
*/

#include <stdio.h>

// Function declaration (prototype)
int add(int, int);

int main() {
    int num1, num2, result;

    // Get user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call with user inputs
    result = add(num1, num2);

    // Print the sum
    printf("Sum = %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  
}
