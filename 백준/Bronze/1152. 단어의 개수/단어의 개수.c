#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    int count = 0, len, i;
    scanf("%[^\n]", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) count++;
    }
    printf("%d\n", count);
    return 0;
}
