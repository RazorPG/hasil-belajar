#include <stdio.h>

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	int n;
	printf("Masukkan bilangan bulat positif: ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
	}
	else
	{
		int result = factorial(n);
		printf("%d! = %d\n", n, result);
	}

	return 0;
}
