#include <stdio.h>

int main() {
    int num, m,n,k, modifiedNum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    k=(num/100);
    m=(num%100)/10;
    n=(num%10);

    modifiedNum = (k*100)+(n*10)+m;

    printf("Modified number: %d\n", modifiedNum);

    return 0;
}
