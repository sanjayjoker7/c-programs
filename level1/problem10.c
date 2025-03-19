#include<stdio.h>
int main()
{
    int a;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    a=(a/10)%10;
    printf("ten digit num is : %d ",a);
    return 0;

}
