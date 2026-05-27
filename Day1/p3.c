#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial does not exist");
    }
    else{
    for(i=1; i<=n; ++i){
        fact=fact*i;
    }
}
    printf("The factorial of the %d is %d",n,fact);
    return 0;
}