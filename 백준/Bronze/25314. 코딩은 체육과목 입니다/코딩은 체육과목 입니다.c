#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	int n,i;
	if (N % 4 == 0) {
		n = N / 4;
	}
	else {
		n = N / 4 + 1;
	}
	
	for (i = 0; i < n; i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}