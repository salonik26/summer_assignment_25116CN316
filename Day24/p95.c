#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, start = 0,maxlen = 0, len = 0;
   

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (len > maxlen) {
                maxlen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
            len = 0;
        } else {
            len++;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxlen);

    return 0;
}