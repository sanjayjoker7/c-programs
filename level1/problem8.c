#include<stdio.h>
int main()
{
    int a;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    a=a%10;
    printf("one digit num is : %d ",a);
    return 0;

}
