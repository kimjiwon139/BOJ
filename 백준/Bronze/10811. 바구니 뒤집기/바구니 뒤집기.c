#include <stdio.h>

int main(void) {
    int N, M;
    int i, j, k, a;
    scanf("%d %d", &N, &M);

    int baskets[101];

    for (i = 1; i <= N; i++) {
        baskets[i] = i;
    }

    for (k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        for (a = 0; a < (j - i + 1) / 2; a++) {
            int temp = baskets[i + a];
            baskets[i + a] = baskets[j - a];
            baskets[j - a] = temp;
        }
    }

    for (i = 1; i <= N; i++) {
        printf("%d ", baskets[i]);
    }

    return 0;
}

