#include<stdio.h>
void printPattern(int n,int m){
    int row=n,col=m;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",j + 1);
        }
        printf("\n");
    }
}
int main(){
    int n,m;
    printf("Enter two number: ");
    scanf("%d %d",&n,&m);
    printPattern(n,m);
}