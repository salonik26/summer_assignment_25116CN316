#include<stdio.h>
int main(){
    int bin,dec=0,base=1,rem;

    printf("Enter the binary number:");
    scanf("%d",&bin);

    while(bin>0){
        rem=bin%10;
        dec+=rem*base;
        base*=2;
        bin/=10;
    }

    printf("Decimal=%d",dec);

    return 0;
}