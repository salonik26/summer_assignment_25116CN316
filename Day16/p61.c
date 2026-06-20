#include<stdio.h>
int missing(int a[],int size,int n){
    int expsum=n*(n+1)/2;
    int actsum=0;

    for(int i=0;i<size;i++){
        actsum=actsum+a[i];
    }
    return expsum-actsum;
}

int main(){
    int a[]={1,2,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int n=5;

    printf("Missing number in array is %d",missing(a,size,n));
    return 0;
}