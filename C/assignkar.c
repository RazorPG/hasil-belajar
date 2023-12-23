/* File : assignkar.c */
/* Penulis : Rafid Hilmi, email rafidhilmi0504@gmail.com */
/* Program untuk menuliskan Halo Dunia! ke layar */
#include <stdio.h>
int 
main()
{
	/* KAMUS */
	char c = 65; /* inisialisasi nilai karakter dengan 65, kode huruf 'A' */
	char c1;
	/* ALGORITMA */
	/* penulisan karakter sebagai huruf */
		printf("karakter = %c\n", c);
		c1 = 'Z'; /* variabel c1 diisi dengan huruf 'Z'*/
		printf ("karakter = %c\n", c1);

	/* penulisan karakter */
		printf("karakter dalam kode ASCII = %d\n", c);
		printf("karakter sebagai huruf = %c\n", c);
		printf("karakter dalam kode ASCII = %d\n", c1);
		printf("karakter sebagai huruf = %c\n", c1);
	return 0;
}
