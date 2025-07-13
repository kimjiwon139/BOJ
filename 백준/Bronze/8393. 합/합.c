#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);
	int sum = 0;
	int i = 0;
	while (1) {
		i = i + 1;
		sum = sum + i;
		if (i == N) {
			break;
		}
	}
	
	printf("%d", sum);

	return 0;
}