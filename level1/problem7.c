#include<stdio.h>
int main()
{
    int a;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    a=(a/10)%10;
    printf("two digit num is : %d ",a);
    return 0;

}
