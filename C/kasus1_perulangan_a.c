#include <stdio.h>

void main()
{
	int n, r;
	double data, jumlah, rerata;
	
	printf("MENGHITUNG NILAI RATA-RATA\n");
	printf("ketikkan berapa banyaknya data: ");
	scanf("%i",&n);
	r = 1;
	
	 for(r; r <= n; r++){
	 	printf("masukkan data ke-%i: ", r);
	 	scanf("%lf",&data);
	 	jumlah += data;
	 }
	
	 rerata = jumlah / n;
	 printf("rata-rata data: %.2lf\n",rerata);
	 printf("\nterima kasih sudah menggunakan jasa kami:)\n");
}
