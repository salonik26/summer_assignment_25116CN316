#include<stdio.h>
int main(){
    int i,j,isprime=1,st,en;
    printf("Enter starting number:");
    scanf("%d",&st);
    printf("Enter the ending number:");
    scanf("%d",&en);
    
    for (i = st; i <= en; i++) {

        if (i < 2)
            continue;
            isprime=1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }

        
        if (isprime)
            printf("%d ", i);
    }

    return 0;
}