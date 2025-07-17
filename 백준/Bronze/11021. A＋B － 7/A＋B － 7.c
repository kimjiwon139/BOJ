#include <stdio.h>

int main(void) {
	int T, i;
	int a, b;
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a+b);
	}

	return 0;
}