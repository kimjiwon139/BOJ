#include <stdio.h>

int main(void)
{
	int A, B, C, D, E, F;
	scanf("%d %d", &A, &B);
	C = A * (B % 10);
	D = A * ((B / 10) % 10);
	E = A * (B / 100);
	F = C + D * 10 + E * 100;
	printf("%d \n%d \n%d \n%d", C, D, E, F);
	
	return 0;
}