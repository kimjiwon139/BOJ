#include <stdio.h>

int main(void) {
	int T, i;
	scanf("%d", &T);
	int a, b = 0;
	for (i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}