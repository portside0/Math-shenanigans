#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int a;
	
    scanf("%i", &a);
	
    char intstr[1000];
	
    itoa(a, intstr, 10);
	
    int sum = 0;
	
    int d = 0;
	
    for (int p = 0; p < strlen(intstr); p++)
    {		
        d = intstr[p] - '0';
		
        sum += round(pow(d, strlen(intstr)));
		
		printf("sum = %i\n", sum);
    }
	
	printf("sum = %i\n", sum);
	
	if (sum == a)
	{
		printf("Given number is an armstrong\n");
	}
	else
	{
		printf("Given number is not an armstrong\n");
	}
}