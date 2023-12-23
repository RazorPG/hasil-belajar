#include <stdio.h>
#include <string.h>

typedef struct shp
{
    char nama[30];
    char peran[20];
    double bounty;
    char haki[3][20];
    char devilFruit[2][50];
} strawHatPirate;

int main()
{
    printf("Data Straw Hat Pirate :\n");
    printf("============================\n\n");

    strawHatPirate nakama[10];
    nakama[0] = (strawHatPirate){"Monkey D. luffy", "Kapten", 3000000000, {"Dikuasai", "Dikuasai", "Dikuasai"}, {"Hito-Hito No Mi Model Nika", "Mythical Zoan"}};
    nakama[1] = (strawHatPirate){
        "Roronoa Zoro", "Pendekar Pedang", 1111000000, {"Dikuasai", "Dikuasai", "Dikuasai"}, {"Tidak Ada", ""}};
    nakama[2] = (strawHatPirate){
        "Nami", "Navigator", 366000000, {"Tidak Dikuasai", "Tidak Dikuasai", "Tidak Dikuasai"}, {"Tidak Ada", ""}};
    nakama[3] = (strawHatPirate){
        "Vinsmoke Sanji", "Koki", 1032000000, {"Dikuasai", "Dikuasai", "Tidak Dikuasai"}, {"Tidak Ada", ""}};
    nakama[4] = (strawHatPirate){
        "Usopp", "Penembak Jitu", 500000000, {"Tidak Dikuasai", "Dikuasai", "Tidak Dikuasai"}, {"Tidak Ada", ""}};
    nakama[5] = (strawHatPirate){
        "Tony Tony Chopper", "Dokter", 1000, {"Tidak Dikuasai", "Tidak Dikuasai", "Tidak Dikuasai"}, {"Hito-Hito No Mi", "Zoan"}};
    nakama[6] = (strawHatPirate){
        "Franky", "Tukang", 394000000, {"Tidak Dikuasai", "Tidak Dikuasai", "Tidak Dikuasai"}, {"Tidak Ada", ""}};
    nakama[7] = (strawHatPirate){
        "Nico Robin", "Arkeologi", 930000000, {"Tidak Dikuasai", "Tidak Dikuasai", "Tidak Dikuasai"}, {"Hana-Hana No Mi", "Paramecia"}};
    nakama[8] = (strawHatPirate){
        "Brook", "Musisi", 383000000, {"Tidak Dikuasai", "Tidak Dikuasai", "Tidak Dikuasai"}, {"Yomi-Yomi No Mi", "Pacamecia"}};
    nakama[9] = (strawHatPirate){
        "Jinbei", "Kemudi Kapal", 1100000000, {"Dikuasai", "Tidak Dikuasai", "Tidak Dikuasai"}, {"Tidak Ada", ""}};
        
	int i;
    for (i = 0; i < 10; i++)
    {
        printf(" Nama karakter : %s\n", nakama[i].nama);
        printf(" Peran : %s\n", nakama[i].peran);
        printf(" bounty : $%.2lf berry\n", nakama[i].bounty);
        printf(" Haki Busoshoku : %s\n", nakama[i].haki[0]);
        printf(" Haki Kenbunshoku : %s\n", nakama[i].haki[1]);
        printf(" Haki Haoshoku : %s\n", nakama[i].haki[2]);
        if (i == 0 || i == 5 || i == 7 || i == 8)
        {
            printf(" Devil Fruit : %s Type %s\n\n", nakama[i].devilFruit[0], nakama[i].devilFruit[1]);
        }
        else
        {
            printf(" Devil Fruit : %s\n\n", nakama[i].devilFruit[0]);
        }
    }
}
