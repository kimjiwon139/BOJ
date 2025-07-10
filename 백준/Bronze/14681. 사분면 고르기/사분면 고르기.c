#include <stdio.h>

int main(void) {
	int x_cdn, y_cdn;
	scanf("%d\n%d", &x_cdn, &y_cdn);

	if (x_cdn > 0) {
		if (y_cdn > 0) {
			printf("%d", 1);
		}
		else if (y_cdn < 0) {
			printf("%d", 4);
		}
	}
	else if (x_cdn < 0) {
		if (y_cdn > 0) {
			printf("%d", 2);
		}
		else if (y_cdn < 0) {
			printf("%d", 3);
		}
	}

	return 0;
}
