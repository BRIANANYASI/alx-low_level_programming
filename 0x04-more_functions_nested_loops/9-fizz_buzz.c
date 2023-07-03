#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of 3 print Fizz instead of the number
 *for the multiples of 5 print Buzz
 * Return: always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("Fizzbuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
