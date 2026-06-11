#include<stdio.h>
int main(){
        int n,i,sum=0;
        printf("Enter the number:");
        scanf("%d",&n);
        if(n<=1){
            printf("Enter a positive number");
        }
        for(i=1 ; i<=n/2; i++){

            if(n%i==0){
                sum=sum+i;
            }
        }
        if(sum==n){
            printf("Perfect number");
        }
        else{
            printf("Not a perfect number");
        }
        return 0;
}