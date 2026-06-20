#include <stdio.h>
int main(){
    int a[100],n,i,j,found=0;
    int sum=20;

    printf("Enter the number of element:");
    scanf("%d",&n);

    printf("Enter the element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("Pair found: (%d,%d)\n",a[i],a[j]);
                found=1;
                break;
            }
        }
        if(found=0){
            break;
        }
        if(found!=0){
            printf("No pair found.");
        }
    }
    return 0;
}