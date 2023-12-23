#include <stdio.h>

void main()
{
	char password[30];
	
	printf("==== program login ====\n");
	printf("masukan password: ");
	scanf("%s",&password);
	
	if(strcmp(password, "razor") == 0){
		printf("selamat datang bos!\n");
	} else {
		printf("password yang anda masukkan salah, coba lagi\n");
	}
	printf("terima kasih sudah menggunakan aplikasi ini!\n");
}
