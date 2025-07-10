#include <stdio.h>

int main(void) {
	int hour, min, t_cook, t_min;
	scanf("%d %d\n %d", &hour, &min, &t_cook);
	t_min = hour * 60 + min + t_cook;

	if (t_min > 60*23 + 59) {
		t_min = t_min - 60 * 24;
	}
	else {
		t_min = t_min;
	}
	hour = t_min / 60;
	min = t_min % 60;
	printf("%d %d", hour, min);

	return 0;
}