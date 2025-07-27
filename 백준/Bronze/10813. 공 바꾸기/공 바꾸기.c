#include <stdio.h>

int main(void) {
    int N, M;
    int i, k;
    int basket[101];

    scanf("%d %d", &N, &M);

    for (i = 1; i <= N; i++) {
        basket[i] = i;
    }

    for (k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);
        int temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }

    for (i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}
