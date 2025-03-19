#include <stdio.h>

void printPattern(int n, int m) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= m; j++) { 
            printf("%d", i); 
        }
        printf("\n"); 
    }
}

int main() {
    int n, m;
    printf("Enter two numbers (rows and columns): ");
    scanf("%d %d", &n, &m);
    printPattern(n, m);
    return 0;
}
