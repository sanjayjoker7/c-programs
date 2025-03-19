#include<stdio.h>
int sumOfDigits(int n){
    int m,count=0;
    while(n>0){
        m=n%10;
        count+=m;
        n=n/10;
        printf("digits:%d\n",m);

    }
    return count;
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum of digits:%d\n",sumOfDigits(n));
}
