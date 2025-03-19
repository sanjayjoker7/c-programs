/*#include<stdio.h>
int main()
{
    int a,tens,ones,rev;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    tens=(a/10)%10;
    ones=a%10;
    rev=(ones*10)+tens;
    printf("the reversed num is  : %d ",rev);
    return 0;

}
*/
#include<stdio.h>
int main()
{
    int a,rev;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    rev=  (a % 10) * 10 + (a / 10);
    printf("the reversed num is  : %d ",rev);
    return 0;

}
