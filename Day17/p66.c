#include<stdio.h>
int main(){
    int a[100],b[100],u[100],n1,n2,i,j,k=0,found;

    printf("Enter the size of first array:");
    scanf("%d",&n1);

    printf("Enter the element of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
        u[k++]=a[i];
    }


    printf("Enter the size of second array:");
    scanf("%d",&n2);

    printf("Enter the element of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    for (i=0;i<n2;i++){
        found=0;
        for(j=0;j<k;j++){
            if(b[i]==u[j]){
                found=1;
                break;
            }
        }
        if(!found){
            u[k++]=b[i];
        }

    }
    printf("Union of array:");
    for(i=0;i<k;i++){
        printf("%d ",u[i]);
    }
    return 0;
 
}