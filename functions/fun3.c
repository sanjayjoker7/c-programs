// 2. Function with No Arguments and With Return Value
#include <stdio.h>

// Function declaration
int getNumber();

int main() {
    int num;
    num = getNumber(); // Function call and storing return value
    printf("You entered: %d\n", num);
    return 0;
}

// Function definition
int getNumber() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n; 
}
