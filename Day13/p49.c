#include<stdio.h>
int main(){
    int a[50],i,n;
    printf("Enter the number of array elements:");
    scanf("%d",&n);

    printf("Enter the array elements:\n");

    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }

    printf("The array elements are\n");

    for(i=0;i<=n-1;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}