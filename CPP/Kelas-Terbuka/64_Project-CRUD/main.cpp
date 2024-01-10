#include <iostream>
#include <fstream>
#include <limits>
#include <cstring>

using namespace std;

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
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, mahasiswa &inputMahaiswa);
int getDataSize(fstream &data);
mahasiswa readData(fstream &data, int posisi);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);

int main()
{
    fstream data;

    checkDatabase(data);

    int pilihan = getOption();
    char is_continue;

    enum option
    {
        CREATE = 1,
        READ,
        UPDATE,
        DELETE,
        FINISH
    };

    while (pilihan != FINISH)
    {
        switch (pilihan)
        {
        case CREATE:
            cout << "Menambah data mahasiswa" << endl;
            addDataMahasiswa(data);
            // Tambahkan implementasi untuk menambahkan data mahasiswa
            break;
        case READ:
            cout << "Tampilkan data mahasiswa" << endl;
            displayDataMahasiswa(data);
            // Tambahkan implementasi untuk menampilkan data mahasiswa
            break;
        case UPDATE:
            cout << "Ubah data mahasiswa" << endl;
            // Tambahkan implementasi untuk mengubah data mahasiswa
            break;
        case DELETE:
            cout << "Hapus data mahasiswa" << endl;
            // Tambahkan implementasi untuk menghapus data mahasiswa
            break;
        default:
            cout << "Nilai tidak valid!!" << endl;
            break;
        }

    label_continue:
        cout << "Lanjutkan[y/n]? : ";
        cin >> is_continue;
        fflush(stdin);

        if ((is_continue == 'y') || (is_continue == 'Y'))
        {
            pilihan = getOption();
        }
        else if ((is_continue == 'n') || (is_continue == 'N'))
        {
            break;
        }
        else
        {
            cout << "Nilai tidak valid!!" << endl;
            goto label_continue;
        }
    }

    cout << "Akhir dari program" << endl;

    cin.get();
    return 0;
}

int getOption()
{
    int input;
    system("cls");
    cout << "Program CRUD data mahasiswa" << endl;
    cout << "==========================\n";
    cout << "[1] Tambah data mahasiswa\n";
    cout << "[2] Tampilkan data mahasiswa\n";
    cout << "[3] Ubah data mahasiswa\n";
    cout << "[4] Hapus data mahasiswa\n";
    cout << "[5] Selesai\n";
    cout << "==========================\n";
    cout << "Tentukan pilihan : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}

void checkDatabase(fstream &data)
{
    data.open("data.bin", ios::out | ios::in | ios::binary);

    // check file data atau tidak
    if (data.is_open())
    {
        cout << "database di temukan" << endl;
    }
    else
    {
        cout << "database tidak di temukan, buat database baru" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

void writeData(fstream &data, int posisi, mahasiswa &inputMahaiswa)
{
    data.seekp((posisi - 1) * sizeof(mahasiswa), ios::beg);
    data.write(reinterpret_cast<char *>(&inputMahaiswa), sizeof(mahasiswa));
}

int getDataSize(fstream &data)
{
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end - start) / sizeof(mahasiswa);
}

mahasiswa readData(fstream &data, int posisi)
{
    mahasiswa readMahasiswa;
    data.seekg((posisi - 1) * sizeof(mahasiswa), ios::beg);
    data.read(reinterpret_cast<char *>(&readMahasiswa), sizeof(mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &data)
{

    mahasiswa inputMahasiswa, lastMahasiswa;

    int size = getDataSize(data);
    cout << "ukuran data : " << size << endl;

    if (size == 0)
    {
        inputMahasiswa.pk = 1;
    }
    else
    {
        lastMahasiswa = readData(data, size);
        cout << "pk = " << lastMahasiswa.pk << endl;
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    // readData(data, size);
    cout << "Nama: ";
    cin.getline(inputMahasiswa.nama, 50);
    cout << "NIM: ";
    cin >> inputMahasiswa.NIM;
    fflush(stdin);
    cout << "Jurusan: ";
    cin.getline(inputMahasiswa.jurusan, 50);
    cout << "Asal Sekolah: ";
    cin.getline(inputMahasiswa.asalSekolah, 50);
    cout << "Tempat Tanggal Lahir: ";
    cin.getline(inputMahasiswa.ttl, 50);
    cout << "Email: ";
    cin.getline(inputMahasiswa.email, 50);

    writeData(data, size + 1, inputMahasiswa);
}

void displayDataMahasiswa(fstream &data)
{
    int size = getDataSize(data);
    mahasiswa showMahasiswa;
    cout << "no.\tNama.\t\t\tNIM.\t\t\tJurusan.\t\t\tAsal Sekolah.\t\t\tTTL.\t\t\tEmail." << endl;
    for (int i = 1; i <= size; i++)
    {
        showMahasiswa = readData(data, i);
        cout << i << "\t";
        cout << showMahasiswa.nama << "\t\t\t";
        cout << showMahasiswa.NIM << "\t\t\t";
        cout << showMahasiswa.jurusan << "\t\t\t";
        cout << showMahasiswa.asalSekolah << "\t\t\t";
        cout << showMahasiswa.ttl << "\t\t\t";
        cout << showMahasiswa.email << endl;
    }
}