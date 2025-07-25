#include <stdio.h>

int main(void) {
    int N, M, i;
    int i_start, j_end, ball;
    scanf("%d %d", &N, &M);
    int basket[101] = {0};
    
    for (i = 0; i < M; i++) {
        scanf("%d %d %d", &i_start, &j_end, &ball);

        for (int b = i_start; b <= j_end; b++) {
            basket[b] = ball;
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}
