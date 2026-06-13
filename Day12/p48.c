#include<stdio.h>
int perfect(int n){
    int i,sum=0;

    for(i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }

    return(sum==n);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(perfect(n)){
        printf("Perfect number");
    }

    else{
        printf("Not a perfect number");
    }
    return 0;
}    