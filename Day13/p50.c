#include<stdio.h>
int main(){
    int a[100],n,i,s=0;
    int avg;

    printf("Enter the number of array elements:");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }

    avg=s/n;

    printf("The sum is %d\n",s);
    printf("The average is %d",avg);
    return 0;
}