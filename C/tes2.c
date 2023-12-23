#include <stdio.h>
 
int main()
{
	char nama[1000], email[20], jenis_kelamin[10], fakultas[10];
	
	printf("input nama: ");
	scanf("%[^\n]fs",&nama);
	
	printf("input email: ");
	scanf("%s",&email);
	
	printf("input jenis kelamin: ");
	scanf("%s",&jenis_kelamin); 
	
	printf("input fakultas: ");
	scanf("%s",&fakultas); 
	
	printf("\n----------------------\n");
	printf("nama saya adalah: %s\n",nama);
	printf("email saya adalah: %s\n",email);
	printf("jenis kelamin saya adalah: %s\n",jenis_kelamin);
	printf("fakultas saya adalah: %s\n",fakultas);
	return 0;	
}
