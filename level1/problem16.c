#include <stdio.h>

int main() {
    int num, m,n,k,modifiednum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    k=(num/1000);
    m=(num/100)%10;
    n=(num%100)


    modifiednum = (n*1000)+(m*100)+

    printf("Modified number: %d\n", modifiedNum);

    return 0;
}
