#include<stdio.h>
int main(){
    int n,bit=0;

    printf("Enter the number:");
    scanf("%d",&n);

    while(n>0){
        bit+=n&1;
        n>>1;
    }

    printf("Number of sets bits are %d",bit);
    return 0;
}