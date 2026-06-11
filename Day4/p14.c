#include<stdio.h>
    int fibonacci(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }

    int main(){

        int n;
        printf("Enter the value of n:");
        if(scanf("%d",&n)!=1 || n<0){
            printf("Error");
            return 1;
        }
        int result= fibonacci(n);
        printf("The %d term of fibonacci series is:%d",n,result);
        return 0;
    }
