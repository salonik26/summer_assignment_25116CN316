#include<stdio.h>
int main(){
    int a[100],n,i,even=0,odd=0;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even elements are %d\n",even);
    printf("Number of odd elements are %d",odd);

    return 0;
}

