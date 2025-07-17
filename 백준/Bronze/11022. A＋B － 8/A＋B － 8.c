#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);

	int a, b, i;
	for (i = 1; i <= T; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}