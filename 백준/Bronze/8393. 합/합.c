#include <stdio.h>

int main(void) {
	int N, i;
	scanf("%d", &N);
	int sum = 0;
	for (i = 1; i < N+1; i++) {
		sum = sum + i;
	}
	printf("%d", sum);

	return 0;
}