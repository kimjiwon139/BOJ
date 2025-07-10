	#include <stdio.h>
	int main(void){
	int hour, min, t_min;
	scanf("%d %d", &hour, &min);

	if (hour == 0 && min < 45) {
		t_min = 24*60 + hour * 60 + min - 45;
	}
	else {
		t_min = hour * 60 + min - 45;
	}
	min = t_min % 60;
	hour = t_min / 60;
	printf("%d %d", hour, min);


	return 0;
}