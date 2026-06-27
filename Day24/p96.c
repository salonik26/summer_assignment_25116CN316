#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int visited[256] = {0};
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (!visited[str[i]]) {
            printf("%c", str[i]);
            visited[str[i]] = 1;
        }
    }

    return 0;
}