#include <stdio.h>
void main()
{
int a, b;
	
	a = 6;
	b = 23;
	
	b += a;
	printf("hasil b += a adalah %d\n", b);
	
	b -= a;
	printf("hasil b -= a adalah %d\n", b);
	
	b *= a;
	printf("hasil b *= a adalah %d\n", b);
	
	b /= a;
	printf("hasil b /= a adalah %d\n", b);
	
	b %= a;
	printf("hasil b %= a adalah %d\n", b);	
}
	
