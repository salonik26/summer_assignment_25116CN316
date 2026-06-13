#include<stdio.h>
int fib(int n){
    int f1=0,f2=1,f3,i;

    for(i=1;i<=n;i++){
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}

int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    fib(n);
    return 0;
}