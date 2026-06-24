#include<stdio.h>

int main(){
    char str[100], rev[100];
    int i,len=0;

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    while(str[len]!= '\0' && str[len]!= '\n'){
        len++;
    }
    
    for(i=0;i<len;i++){
        rev[i]= str[len-1-i];
    }

    rev[i]='\0';
    printf("Reversed string = %s",rev);
}