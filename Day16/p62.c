#include<stdio.h>

int main(){
    int n,i,j,a[100],count=0;
    int maxfreq=0;
    int maxelement=a[0];

    printf("Enter the number of element:");
    scanf("%d",&n);

    printf("Enter the element:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        count=0;

    for(j=0;j<n;j++){
        if(a[i]==a[j]){
            count++;
        }
    }
    if(count > maxfreq){
        maxfreq=count;
        maxelement=a[i];
    }
}
    printf("Maximum frequency element:%d",maxelement);
    printf("Frequency:%d",maxfreq);

    return 0;
    
}