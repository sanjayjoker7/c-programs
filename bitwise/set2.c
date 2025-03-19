#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("ENTER THE POS:");
    scanf("%d",&pos);

    n = n|(1<<pos);

    printf("%d", n); 
    return 0;
}
