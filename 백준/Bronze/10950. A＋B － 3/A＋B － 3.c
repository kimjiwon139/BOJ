#include <stdio.h>

int main(void) {
	int num_case, i;
	scanf("%d", &num_case);

	int A, B;
	for (i = 0; i < num_case; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;

}