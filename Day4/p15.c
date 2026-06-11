#include<stdio.h>
int main(){
    int n,s=0,d,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }

    if(s==temp){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not armstrong");
    }
    return 0;
}