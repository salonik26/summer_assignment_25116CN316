#include<stdio.h>

int main(){
    char str[100];
    int freq[256]={0};
    int i;

    printf("Enetr the string:");
    fgets(str,sizeof(str),stdin);

    for(i=0; str[i] != '\0'; i++){
        if(str[i]=='\n')
        continue;

        freq[str[i]]++;

        if(freq[str[i]]==2){
            printf("First repeating character: %c\n",str[i]);
            return 0;
        }
    }
    printf("No repeating character found.");
}