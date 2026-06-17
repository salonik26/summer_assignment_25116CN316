#include<stdio.h>
int main(){
    int a[100],x,n,i,count=0;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("Enter the element to be searched:");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }

    printf("Frequency of %d = %d",x,count);
    return 0;
}
