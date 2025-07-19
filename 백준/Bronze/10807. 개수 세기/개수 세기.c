#include <stdio.h>

int main(void) {
	int N, v;
	int count = 0;
	int i;

	int num_list[100];
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &num_list[i]);
	}
	scanf("%d", &v);

	for (i = 0; i < N; i++) {
		if (num_list[i] == v) {
			count = count + 1;
		}
	}

	printf("%d", count);
	return 0;
}