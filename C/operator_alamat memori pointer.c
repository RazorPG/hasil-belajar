#include <stdio.h>

void tukar(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	// membuat pointer
	int a = 10;
	int b = 20;

	tukar(&a, &b);
	// membuat alamat memori dari pointer a
	printf("mem address of a -> %x\n", &a);
	printf("nilai a adalah -> %d\n", a);
	printf("mem address of b -> %x\n", &b);
	printf("nilai b adalah -> %d\n", b);
}
