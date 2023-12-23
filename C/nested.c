#include <stdio.h>

void main()
{
	char username[30], password[30];
	
	printf("=== Welcome to Awesome Program ===\n");
	printf("Username: ");
	scanf("%s",&username);
	printf("password: ");
	scanf("%s",&password);
	
	if(strcmp(username, "razor47") == 0){
		if(strcmp(password, "mariaserver17") == 0){
			printf("selamat datang %s\n", username);
		} else {
			printf("password salah, coba lagi\n");
		}
	} else {
		printf("anda belum terdaftar\n");
	}
}
