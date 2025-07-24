#include <stdio.h>

int main() {
    int num, i;
    int max = -1;
    int index = 0;

    for (i = 1; i <= 9; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
            index = i;
        }
    }

    printf("%d\n%d\n", max, index);
    return 0;
}
