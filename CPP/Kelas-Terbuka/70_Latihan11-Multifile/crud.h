namespace crud
{
    struct mahasiswa
    {
        int pk;
        int NIM;
        char nama[50];
        char jurusan[50];
        char asalSekolah[50];
        char ttl[50];
        char email[50];
    };

    int getOption();
    void checkDatabase(std::fstream &data);
    void writeData(std::fstream &data, int posisi, mahasiswa &inputMahaiswa);
    int getDataSize(std::fstream &data);
    mahasiswa readData(std::fstream &data, int posisi);
    void addDataMahasiswa(std::fstream &data);
    void displayDataMahasiswa(std::fstream &data);
    void updateRecord(std::fstream &data);
    void deleteRecord(std::fstream &data);
}
