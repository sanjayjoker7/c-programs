/**
 * The main function takes an integer input, performs a bitwise OR operation with 1, and then calls a
 * separate function named NewFunction.
 * 
 * @return The `NewFunction()` is being called in the `main()` function and it returns 0. So, the
 * return value of the `NewFunction()` is 0.
 */
#include <stdio.h>
#include "set1.h"

int main(){
        int n;
        printf("Enter n:");
        scanf("%d",&n);
        n=n|1;
        printf("%d",n);

        return NewFunction();
}

int NewFunction()
{
        return 0;
}
