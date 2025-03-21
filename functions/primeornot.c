#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i < n; i++) { 
        if (n % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is NOT a Prime Number.\n", num);

    return 0;
}
