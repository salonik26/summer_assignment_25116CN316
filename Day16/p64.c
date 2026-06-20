#include<stdio.h>
int main(){
    int n,a[100],i,j;

    printf("Enter  the number of element:");
    scanf("%d",&n);

    printf("Enter the element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        int duplicate=0;
        
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                duplicate=1;
                break;
            }
        }
        
        if(duplicate!=1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}