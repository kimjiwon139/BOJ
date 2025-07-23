#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int num;
    int min = 1000001;
    int max = -1000001;

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}
