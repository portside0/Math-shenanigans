#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	printf("Enter the number\n");
	
	scanf("%i", &n);
	
	if (n <= 1)
	{
		printf("Enter a number greater than 1");
	}
	
	while (n % 2 == 0)
	{
		printf("2 ");
		n = n / 2;
	}
	
	for(int i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%i ", i);
			n = n / i;
		}
	}
	
	if (n > 2)
	{
		printf("%i", n); 
	}
	
	printf("\n");
}
