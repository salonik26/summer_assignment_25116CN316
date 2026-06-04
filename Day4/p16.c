#include<stdio.h>
int main(){
    int s,e,sum,rem,n,temp;
    printf("Enter the starting number of range:");
    scanf("%d",&s);
    printf("Enter the ending number of range:");
    scanf("%d",&e);

    for(n=s; n<=e;n++){
        temp=n;
        sum=0;
    }
    while(temp>0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;

    }
    if(sum==n){
        printf("%d",n);
    }
    
return 0;
    }


