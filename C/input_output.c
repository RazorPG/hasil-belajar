#include <stdio.h>

int main()
{
//	fungsi print()
//	printf("hello, ini adalah program output\n");
//	printf("nama saya adalah %s \n","Rafid");
//	printf("usia saya adalah %i",18);


// fungsi puts()
//puts("lorem ipsum");
//puts("lorem ipsum");
//puts("lorem ipsum");

//fungsi putchar()
//	putchar('A');
//	putchar('A');

// membuat variabel(char)
//	char name[20], web_address[30];
//	
//	printf("nama: ");
//	scanf("%[^\n]fs", &name);
//	
//	printf("alamat web: ");
//	scanf("%s", &web_address);
//	
//	printf("\n--------------------------\n");
//	printf("nama yang diinputkan: %s\n", name);
//	printf("alamat web yang diinputkan: %s\n", web_address);
	
// membuat variabel(int)
//	int a, b, c;
//	
//	printf("inputkan nilai a: ");
//	scanf("%i",&a);
//	
//	printf("inputkan nilai b: ");
//	scanf("%i",&b);
//	
//	c = a + b;
//	
//	printf("hasil dari a + b: %i", c);
	
// fungsi gets()

//membuat variabel(char)
//	char name[20], web_address[30];
//	
//	printf("nama: ");
//	gets(name);
//	
//	printf("alamat web: ");
//	gets(web_address);
//	
//	printf("\n--------------------------\n");
//	printf("nama yang diinputkan: %s\n", name);
//	printf("alamat web yang diinputkan: %s\n", web_address);

//fungsi fget()

	char name[50], email[50];
	
	printf("nama: ");
	fgets(name, sizeof(name), stdin);
	
	printf("email: ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n-------------------------\n");
	printf("nama anda: %s", name);
	printf("alamat email: %s", email);

return 0;
}
