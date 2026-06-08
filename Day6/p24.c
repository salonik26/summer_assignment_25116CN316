#include<stdio.h>
int main(){
    int x,n,result=1,i;

    printf("Enter the base:");
    scanf("%d",&x);

    printf("Enter the power:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        result*=x;

    }
    printf("%d^%d=%d",x,n,result);
    return 0;
}