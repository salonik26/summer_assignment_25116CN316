#include<stdio.h>
int sum(int a,int b){
    return a + b;
}
int main(){
    int a,b;
    int result;
    printf("Enter the number a and b:");
    scanf("%d%d",&a,&b);
    result=sum(a,b);

    printf("Sum is %d",result);
    return 0;
}
