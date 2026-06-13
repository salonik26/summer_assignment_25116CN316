#include<stdio.h>
int armstrong(int n){
    int s=0,d,temp;
    int original=n;
    temp=n;
    while(n>0){
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }
    return (s==original);
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if (armstrong(n)){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
    return 0;
}