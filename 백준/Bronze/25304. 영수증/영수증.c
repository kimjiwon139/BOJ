#include <stdio.h>

int main(void) {
	int total_price, total_n;
	int n, price;
	int sum = 0;
	int i;

	scanf("%d", &total_price);
	scanf("%d", &total_n);
	for (i = 0; i < total_n; i++) {
		scanf("%d %d", &n, &price);
		sum = sum + n * price;
	}
	if (sum == total_price) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}