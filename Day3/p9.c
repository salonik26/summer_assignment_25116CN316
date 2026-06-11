#include<stdio.h>
int main(){
    int n,i,isprime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    
    if(n<=1){
        isprime=0;

    }
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime==1){
        printf("Prime Number");
    }
    else{
        printf("Not a prime number");
    }
}