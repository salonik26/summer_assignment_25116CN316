#include<stdio.h>
    int largestprime(int n){
        int largest =-1;
        while(n%2==0){
            largest =2;
            n/=2;
        }

        for(int i=3;i*i<=n;i+=2){
            while(n%i==0){
                largest =i;
                n/=i;
            }
        }
        if(n>2){
            largest=n;
        }
        return largest;

    }
    int main(){
        int n;
        printf("Enter the number:");
        scanf("%d",&n);

        printf("The largest prime number:%d",largestprime(n));

        return 0;
    }

    