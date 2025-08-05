#include <stdio.h>

int main(void) {
    int T, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        char str[1001];
        scanf("%s", str);
        
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }

        printf("%c%c\n", str[0], str[len - 1]);
    }

    return 0;
}
