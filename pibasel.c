#include <stdio.h>
#include <math.h>

int main ()
{
	long int n;
	
	printf("Enter n: ");
	
	scanf("%ld", &n);
	
	long double pi = 0.0;
	
	for (long int i = 1; i <= n; i++)
	{
		pi += 1.0L / ((long double)i * (long double)i);
	}
	
	pi = sqrtl(6.0L * pi);
	
	__mingw_printf("pi = %.20Lf\n", (long double)pi);
	
}