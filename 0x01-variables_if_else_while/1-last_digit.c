#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate random numbers
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d ls", n);
	num = n % 10;
	if (num > 5);
	{
		printf("%d and is greater than 5\n", num);
	}
	else (num < 6);
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else if ("%d and is 0\n", num);
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}

