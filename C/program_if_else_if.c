#include <stdio.h>

void main()
{
	int nilai;
	char grade;
	
	printf("=== Program Grade Nilai ===\n");
	printf("masukkan nilai: ");
	scanf("%i", &nilai);
	
	if(nilai >= 90) {
		grade = 'A';
	} else if (nilai >= 80) {
		grade = 'B';
	} else if (nilai >= 70) {
		grade = 'C';
	} else if (nilai >= 60) {
		grade = 'D';
	} else if (nilai < 60) {
		grade = 'E';
	} else {
		printf("nilai yang anda inputkan salah!");
	}
	
	printf("Nilai: %i\n", nilai);
	printf("Grade anda: %c\n", grade);
}


