#include <stdio.h>

int main() {
    int num;
    double convertedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    convertedNum = num;  

    printf("You entered: %d (as integer)\n", num);
    printf("Implicitly converted to double: %lf\n", convertedNum);

    return 0;
}
