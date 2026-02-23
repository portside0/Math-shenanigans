#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	
	printf("Enter the value upto which primes are to be found\n");
	
	scanf("%i", &n);
	
	clock_t start, end;
	double time;
	
	start = clock();
	
	bool *prime = (bool *)malloc((n + 1) * sizeof(bool));
	
	if (prime == NULL)
	{
		printf("Memory allocation failed\n");
		return 2;
	}
	
	char choice;
	
	printf("Do you want to print the numbers to a file? y/n\n");
	
	scanf(" %c", &choice);
	
	FILE *dest;
	dest = NULL;
	
	if (choice == 'y')
	{
		dest = fopen("10000primes.txt", "w");
		
		if (dest == NULL)
		{
			printf("Could not open the file\n");
			return 1;
		}
	}
	
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
	
	for (int l = 0; l <= n; l++)
	{	
		if (prime[l] == true)
		{
			printf("%.4d ", l);
			
			if (dest != NULL)
			{
				fprintf(dest, "%d\n", l);
			}
		}
	}
	
	printf("\n");
	
	free(prime);
	
	if (choice == 'y')
	{
		fclose(dest);
	}
	
	end = clock();
	
	time = ((double) (end - start)) / CLOCKS_PER_SEC;

	printf("Time elapsed: %lf\n", time);
}
