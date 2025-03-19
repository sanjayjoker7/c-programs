#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: %d %d ", a, b); 

    for (int i = 2; i < n; i++) { 
        next = a + b; 
        printf("%d ", next);
        a = b;  
        b = next;
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}
