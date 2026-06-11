#include<stdio.h>

int fact(int num){
    int i,fact=1;

    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial does not exist");
    }
    else{
        printf("Factorial of %d is %d",n,fact(n));
    }
    return 0;
}
