#include<stdio.h>
int palindrome(int n){
    int rem,rev=0,original=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return (original==rev);
    
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(palindrome(n)){
        printf("Palindrome number");
    }
    else{
        printf("Not a palindrome number");
    }
    return 0;

}