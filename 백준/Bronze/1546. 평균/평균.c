#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);

    double scores[1000];
    double max = 0;

    for (i = 0; i < N; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    double sum = 0;
    for (i = 0; i < N; i++) {
        sum += (scores[i] / max) * 100;
    }

    printf("%lf\n", sum / N);

    return 0;
}
