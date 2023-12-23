#include <stdio.h>

 int main()
{
	printf("== Program Menghitung Umur ==\n\n");
	int umur, tanggalLahir, bulanLahir, tahunLahir, tanggalSekarang, bulanSekarang, tahunSekarang;
	
	printf("inputkan tanggal sekarang (1-31): ");
	scanf("%d",&tanggalSekarang);
	
	printf("inputkan bulan sekarang (1-12): ");
	scanf("%d",&bulanSekarang);
	
	printf("inputkan tahun sekarang (1-2023): ");
	scanf("%d",&tahunSekarang);
	
	printf("inputkan tanggal lahir (1-31): ");
	scanf("%d",&tanggalLahir);
	
	printf("inputkan bulan lahir (1-12): ");
	scanf("%d",&bulanLahir);
	
	printf("inputkan tahun lahir (1-2023): ");
	scanf("%d",&tahunLahir);
	
	
	umur = tahunSekarang - tahunLahir;
	
	if(bulanSekarang == bulanLahir && tanggalSekarang >= tanggalLahir || bulanSekarang > bulanLahir){
		} else {
		--umur;
	}
		printf("\n=== umur anda adalah %i tahun ===",umur);
	return 0;	
}
