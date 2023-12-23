#include <stdio.h>

void main()
{
	int jawaban;
	
	printf("berapakah 5 * 10?\n");
	printf("jawab> ");
	scanf("%i", &jawaban);
	
	printf("jawaban anda: %s\n", (jawaban == 50)? "benar" : "salah");
}
