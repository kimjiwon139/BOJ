#include <stdio.h>

int main() {
    int submit[31] = {0};
    int num, i;

    for (i = 0; i < 28; i++) {
        scanf("%d", &num);
        submit[num] = 1;
    }

    for (i = 1; i <= 30; i++) {
        if (submit[i] == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
