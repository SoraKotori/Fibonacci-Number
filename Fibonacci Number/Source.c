#include <stdio.h>
#include <stdlib.h>

int fibonacci(int number)
{
	if (number < 2)
	{
		return number;
	}

	return fibonacci(number - 1) + fibonacci(number - 2);
}

int iterative(int number)
{
	int a = 0;
	int b = 1;
	int sum = 0;

	if (number < 2)
	{
		return number;
	}

	for (int i = 2; i <= number; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}

	return sum;
}

int main()
{
	int n = fibonacci(8);
	int m = iterative(8);

	printf("%d\n", n);
	printf("%d\n", m);
}