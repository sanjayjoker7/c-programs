#include<stdio.h>
int main()
{
    int a,hun,tens,ones,sum;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    hun=(a/100)%10;
    tens=(a/10)%10;
    ones=a%10;
    sum=hun+tens+ones;
    printf("the sum of digits is  : %d ",sum);
    return 0;

}
