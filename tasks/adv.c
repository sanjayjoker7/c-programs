#include <stdio.h>

int main() {
    int num, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;  
        printf("%d\n", digit);  
        sum += digit;  
        count++;  
        num = num / 10; 
    }

    printf("Total number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
