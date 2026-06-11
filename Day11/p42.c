#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a; 
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    int result= max(a,b);

    printf("Maximum is %d",result);
    return 0;

}