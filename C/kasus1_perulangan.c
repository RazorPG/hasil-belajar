#include <stdio.h>

void main()
{
	int v, g, hasil, batas;
	printf("MEMBUAT DAFTAR PERKALIAN\n");
	printf("batas perkalian: ");
	scanf("%i", &batas);
	printf("ketikkan bilangan: ");
	scanf("%i", &g);

	hasil = 0;
	v = 1;

	while (v <= batas)
	{
		hasil = v * g;
		printf("%i x %i = %i\n", v, g, hasil);
		v++;
	}
}
