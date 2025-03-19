/*#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } 
    else if (num % 3 == 0) {
        printf("%d is divisible by 3 only.\n", num);
    } 
    else if (num % 5 == 0) {
        printf("%d is divisible by 5 only.\n", num);
    } 
    else {
        printf("%d is NOT divisible by 3 or 5.\n", num);
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 3 == 0 && num % 5 == 0) ? printf("%d is divisible by both 3 and 5.\n", num) :
    (num % 3 == 0) ? printf("%d is divisible by 3 only.\n", num) :
    (num % 5 == 0) ? printf("%d is divisible by 5 only.\n", num) :
    printf("%d is NOT divisible by 3 or 5.\n", num);

    return 0;
}
