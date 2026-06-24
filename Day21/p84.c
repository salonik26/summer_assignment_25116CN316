#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    int i;

    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);

    for(i=0; str[i]!= '\0' ; i++){
        str[i]=toupper(str[i]);
    }

    printf("Uppercase String: %s",str);

    return 0;;
}