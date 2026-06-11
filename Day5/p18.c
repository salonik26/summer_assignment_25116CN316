#include<stdio.h>
int main(){
    int n,d,sum=0,fact,temp;
    printf("Enter the number:");
    scanf("%d",&n);

    temp=n;
    while(temp>0){
        d=temp%10;

        fact=1;
        for(int i=1; i<=d; i++){
            fact=fact*i;
        }
        sum+=fact;
        temp/=10;

    }
    if(sum==n){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;  
}