#include<stdio.h>
int main(){
    int a[100],n,i,lar,sm;

    printf("Enter the number of array elements:");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    lar=sm=a[0];
    for(i=0;i<=n-1;i++){
        if(a[i]<sm){
            sm=a[i];
        }
        if(a[i]>lar){
            lar=a[i];
        }
    }
    printf("The largest and smallest element are %d and %d",lar,sm);
    return 0;
}