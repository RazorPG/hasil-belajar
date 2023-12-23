#include <stdio.h>

void main()
{
	char grade;

	printf("Inputkan grade: ");
	scanf("%c", &grade);

	switch (toupper(grade))
	{
	case 'A':
		printf("Anda sangat pintar!\n");
		break;
	case 'B':
	case 'C':
		printf("Kerja bagus!");
		break;
	case 'D':
		printf("yahahaha nub palepale");
		break;
	case 'E':
	case 'F':
		printf("manusia macam apa kau ni!");
		break;
	default:
		printf("grade salah!");
	}
}
