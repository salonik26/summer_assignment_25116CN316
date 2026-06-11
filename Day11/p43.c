#include<stdio.h>
int prime(int n){
    int i;
    if(n<=0){
        return 0;
    }

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(prime(n)){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}