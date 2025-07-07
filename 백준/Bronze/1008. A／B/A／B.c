# include <stdio.h>

int main(void)
{
	double A, B;

	scanf("%lf %lf", &A, &B);
	printf("%.15lf", A / B);
	
	return 0;
}