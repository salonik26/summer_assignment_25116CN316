#include<stdio.h>
int main(){
    int a[100],i,n,j,temp;

    printf("Enter the numer of elements:");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<=n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=n-2;i>=0;i--){
        if(a[i]!=a[n-1]){
            printf("Second largest element = %d\n",a[i]);
            return 0;
        }
    }

    printf("Second largest element does not exist");
    return 0;

}