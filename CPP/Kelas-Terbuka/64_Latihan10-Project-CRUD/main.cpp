#include <iostream>
#include <fstream>
#include <limits>
#include <cstring>
#include <iomanip>

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
void updateRecord(fstream &data);
void deleteRecord(fstream &data);

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
            break;
        case READ:
            cout << "Tampilkan data mahasiswa" << endl;
            displayDataMahasiswa(data);
            break;
        case UPDATE:
            cout << "Ubah data mahasiswa" << endl;
            displayDataMahasiswa(data);
            updateRecord(data);
            displayDataMahasiswa(data);
            break;
        case DELETE:
            cout << "Hapus data mahasiswa" << endl;
            displayDataMahasiswa(data);
            deleteRecord(data);
            displayDataMahasiswa(data);
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
    fflush(stdin);
    cout << "==========================\n";

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
    // cout << "ukuran data : " << size << endl;

    if (size == 0)
    {
        inputMahasiswa.pk = 1;
    }
    else
    {
        lastMahasiswa = readData(data, size);
        // cout << "pk = " << lastMahasiswa.pk << endl;
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
    cout << setfill('-') << setw(175) << "-" << setfill(' ') << endl;

    cout << right << "|" << setw(5) << "No"
         << setw(25) << "Nama"
         << setw(15) << "NIM"
         << setw(30) << "Jurusan"
         << setw(30) << "Asal Sekolah"
         << setw(30) << "TTL"
         << setw(30) << "Email"
         << setw(9) << "|" << endl;

    for (int i = 1; i <= size; i++)
    {
        showMahasiswa = readData(data, i);
        cout << setfill('-') << setw(175) << "-" << setfill(' ') << endl;
        cout << right << "|" << setw(5) << i
             << setw(25) << showMahasiswa.nama
             << setw(15) << showMahasiswa.NIM
             << setw(30) << showMahasiswa.jurusan
             << setw(30) << showMahasiswa.asalSekolah
             << setw(30) << showMahasiswa.ttl
             << setw(30) << showMahasiswa.email << setw(9) << "|" << endl;
    }
    cout << setfill('-') << setw(175) << "-" << setfill(' ') << endl;
}

void updateRecord(fstream &data)
{
    int nomor;
    int pilihan = 0;
    char is_continue;
    mahasiswa UpdateMahasiswa;
    cout << "pilih no: ";
    cin >> nomor;
    fflush(stdin);

    while (pilihan == 0)
    {
        UpdateMahasiswa = readData(data, nomor);
        cout << setfill('-') << setw(175) << "-" << setfill(' ') << endl;
        cout << "pilihan data: " << endl;
        cout << "[1] NIM :" << UpdateMahasiswa.NIM << endl;
        cout << "[2] Nama :" << UpdateMahasiswa.nama << endl;
        cout << "[3] Jurusan :" << UpdateMahasiswa.jurusan << endl;
        cout << "[4] Asal Sekolah :" << UpdateMahasiswa.asalSekolah << endl;
        cout << "[5] Tempat Tanggal Lahir :" << UpdateMahasiswa.ttl << endl;
        cout << "[6] Email :" << UpdateMahasiswa.email << endl;
        cout << setfill('-') << setw(175) << "-" << setfill(' ') << endl;
        cout << "\nMerubah Data[1-6]: ";
        cin >> pilihan;
        fflush(stdin);
        switch (pilihan)
        {
        case 1:
            cout << "Nama: ";
            cin.getline(UpdateMahasiswa.nama, 50);
            break;
        case 2:
            cout << "NIM: ";
            cin >> UpdateMahasiswa.NIM;
            fflush(stdin);
            break;
        case 3:
            cout << "Jurusan: ";
            cin.getline(UpdateMahasiswa.jurusan, 50);
            break;
        case 4:
            cout << "Asal Sekolah: ";
            cin.getline(UpdateMahasiswa.asalSekolah, 50);
            break;
        case 5:
            cout << "Tempat Tanggal Lahir: ";
            cin.getline(UpdateMahasiswa.ttl, 50);
        case 6:
            cout << "Email: ";
            cin.getline(UpdateMahasiswa.email, 50);
            break;
        default:
            cout << "Nilai tidak valid!!" << endl;
            pilihan = 0;
            break;
        }
    Lanjutkan:
        cout << "Lanjutkan[y/n]? : ";
        cin >> is_continue;
        fflush(stdin);

        if ((is_continue == 'y') || (is_continue == 'Y'))
        {
            pilihan = 0;
        }
        else if ((is_continue == 'n') || (is_continue == 'N'))
        {
            break;
        }
        else
        {
            cout << "Nilai tidak valid!!" << endl;
            goto Lanjutkan;
        }
        writeData(data, nomor, UpdateMahasiswa);
    }
}

void deleteRecord(fstream &data)
{
    int nomor, size, offset;
    mahasiswa blackMahasiswa, tempMahasiswa;
    fstream dataSementara;
    size = getDataSize(data);
    // 1. pilih nomor
    cout << "Hapus nomor: ";
    cin >> nomor;
    // 2. di posisi ini diisi dengan dat kosong
    writeData(data, nomor, blackMahasiswa);
    // 3. kita akan cek data dari data.bin, kalau ada data kita pindahkan ke file semenntara
    dataSementara.open("temp.dat", ios::trunc | ios::out | ios::in | ios::binary);

    offset = 0;
    for (int i = 1; i <= size; i++)
    {
        tempMahasiswa = readData(data, i);
        if (strlen(tempMahasiswa.nama) > 0)
        {
            writeData(dataSementara, i - offset, tempMahasiswa);
        }
        else
        {
            offset++;
            cout << "delete item" << endl;
        }
    }

    // 4. kita pindahakan data dari file semenstara ke data.bin
    size = getDataSize(dataSementara);
    data.close();
    data.open("data.bin", ios::trunc | ios::out | ios::binary);
    data.close();
    data.open("data.bin", ios::out | ios ::in | ios::binary);
    for (int i = 1; i <= size; i++)
    {
        tempMahasiswa = readData(dataSementara, i);
        writeData(data, i, tempMahasiswa);
    }
}