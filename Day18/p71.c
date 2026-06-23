#include<stdio.h>
int main(){
    int a[100],n,key,low,mid,high,i,found=0;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter the element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to search:");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while (low<=high){
        mid=(low+high)/2;

        if(a[mid]==key){
            found=1;
            printf("Element found at position %d\n",mid+1);
            break;
        }
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    if(!found){
        printf("Element not found");
    }
    return 0;
    
  
}