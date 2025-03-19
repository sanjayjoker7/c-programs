#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    a=a%8;
    printf("remainder 8 to that number %d ",a);
    return 0;

}
