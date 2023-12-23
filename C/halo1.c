/* File : bacakar.c */
/* Penulis : Rafid Hilmi, email rafidhilmi0504@gmail.com */
/* program menuliskan 3 baris "Halo Dunia!" dan "end-of-line" (ganti baris) */
#include <stdio.h>
int main()
{
	/* KAMUS */
	char cc;
	char c;

	/* program */
	printf("hello\n");
	printf("baca 1 karakter saja : ");
	scanf ("%c", &cc);
	printf("%c\n", cc);
	printf("baca 1 karakter saja : ");
	scanf ("%d", &c); /* ketikkan angka 65*/
	printf("%d\n", c);
	return 0;
}
