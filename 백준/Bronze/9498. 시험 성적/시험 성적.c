#include <stdio.h>

int main(void) {
	int score;
	scanf("%d", &score);
	if (score >= 0 && score <= 100) {
		if (score >= 90 && score <= 100) {
			printf("A");
		}
		else if (score >= 80) {
			printf("B");
		}
		else if (score >= 70) {
			printf("C");
		}
		else if (score >= 60) {
			printf("D");
		}
		else {
			printf("F");
		}
	}
	return 0;
}