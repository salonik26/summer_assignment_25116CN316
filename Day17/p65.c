#include<stdio.h>
int main(){
    int a[100],b[100],m[100],n1,n2,i,j;

    printf("Enter the size of first array:");
    scanf("%d",&n1);

    printf("Enter the element of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }


    printf("Enter the size of second array:");
    scanf("%d",&n2);

    printf("Enter the element of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++){
        m[i]=a[i];
    }

    for(j=0;j<n2;j++){
        m[i+j]=b[j];
    }

    printf("Merged array:");
    for(i=0;i<n1+n2;i++){
        printf("%d ",m[i]);
    }
    return 0;
}