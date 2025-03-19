//3. Function with Arguments and No Return Value
#include <stdio.h>

// Function declaration
void printSum(int, int);

int main() {
    int a = 5, b = 10;
    printSum(a, b); // Function call with arguments
    return 0;
}

// Function definition
void printSum(int x, int y) {
    printf("Sum = %d\n", x + y);
}
