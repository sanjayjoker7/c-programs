/*#include<stdio.h>
int main(){
    int sum =0;
    for (int i=2;i<=10; i+=2){
        sum+=i;
    }
    printf("sum of even natural numbers : %d\n",sum);
    return 0;
}
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i += 2) {
        sum += i;
    }

    printf("Sum of even natural numbers up to %d: %d\n", num, sum);

    return 0;
}
