#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	
	scanf("%i", &n);
	
	bool prime[n + 1];
	
	for (int i = 0; i <= n; i++)
	{
		prime[i] = true;
	}
	
	prime[0] = false;
	prime[1] = false;
	
	for (int j = 2; j * j <= n; j++)
	{
		if (prime[j] == true)
		{
			for (int k = j * j; k <= n; k = k + j)
			{
				prime[k] = false;
			}
		}
	}
	
	int m = 1;
	
	for (int l = 0; l <= n; l++)
	{	
		if (prime[l] == true)
		{
			printf("%.4d ", l);
			m++;
		}
	}
	
	printf("\n");
}
