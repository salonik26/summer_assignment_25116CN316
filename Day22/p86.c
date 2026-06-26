#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,words=0;

    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);

    for(i=0; str[i]!= '\0'; i++){
        if(str[i]== ' '|| str[i]=='\n'){
            words++;
        }
    }
    printf("Number of words= %d",words);

    return 0;
}