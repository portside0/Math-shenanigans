#include <stdio.h>

int main()
{
	long int n;
	printf("Enter n\n");
	scanf("%ld", &n);
	
	long double pi = 0;
	int sign = 1;
	
	for (long int i = 1; i < 2 * n - 1; i += 2)
	{
		pi += (long double)sign / (long double)i;
		sign = -sign;
	}
	
	__mingw_printf("pi = %.20Lf\n", (long double)pi);
	
}