#include<stdio.h>
int main(){
    int a[100],n,i,last;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    last=a[n-1];

    for(i=n-1;i>0;i--){
        a[i]=a[i-1];

    }
    a[0]=last;

    printf("Array after right shift:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}