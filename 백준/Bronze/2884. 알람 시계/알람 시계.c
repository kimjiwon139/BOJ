#include <stdio.h>

int main(void) {
	int hour, min;
	scanf("%d %d", &hour, &min);

	if (min >= 45) {
		printf("%d %d", hour, min - 45);
	}
	else {
		if (hour > 0) {
			printf("%d %d", hour - 1, 60 + (min - 45));
		}
		else {
			printf("%d %d", 24 + (hour - 1), 60 + (min - 45));
		}
	}
	return 0;
}