#include <stdio.h>

int main(void) {
    char word[101];
    int length = 0;

    scanf("%s", word);
    while (word[length] != '\0') {
        length++;
    }

    printf("%d\n", length);
    return 0;
}
