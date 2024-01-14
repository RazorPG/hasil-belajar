#include <iostream>
#include <fstream>
#include <limits>
#include <cstring>
#include <iomanip>
#include "crud.h"

int crud::getOption()
{
    int input;
    system("cls");
    std::cout << "PROJECT CRUD MULTIFILE\n";
    std::cout << "Program CRUD data mahasiswa" << std::endl;
    std::cout << "==========================\n";
    std::cout << "[1] Tambah data mahasiswa\n";
    std::cout << "[2] Tampilkan data mahasiswa\n";
    std::cout << "[3] Ubah data mahasiswa\n";
    std::cout << "[4] Hapus data mahasiswa\n";
    std::cout << "[5] Selesai\n";
    std::cout << "==========================\n";
    std::cout << "Tentukan pilihan : ";
    std::cin >> input;
    fflush(stdin);
    std::cout << "==========================\n";

    return input;
}

void crud::checkDatabase(std::fstream &data)
{
    data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

    // check file data atau tidak
    if (data.is_open())
    {
        std::cout << "database di temukan" << std::endl;
    }
    else
    {
        std::cout << "database tidak di temukan, buat database baru" << std::endl;
        data.close();
        data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}

void crud::writeData(std::fstream &data, int posisi, mahasiswa &inputMahaiswa)
{
    data.seekp((posisi - 1) * sizeof(mahasiswa), std::ios::beg);
    data.write(reinterpret_cast<char *>(&inputMahaiswa), sizeof(mahasiswa));
}

int crud::getDataSize(std::fstream &data)
{
    int start, end;
    data.seekg(0, std::ios::beg);
    start = data.tellg();
    data.seekg(0, std::ios::end);
    end = data.tellg();
    return (end - start) / sizeof(crud::mahasiswa);
}

crud::mahasiswa crud::readData(std::fstream &data, int posisi)
{
    crud::mahasiswa readMahasiswa;
    data.seekg((posisi - 1) * sizeof(crud::mahasiswa), std::ios::beg);
    data.read(reinterpret_cast<char *>(&readMahasiswa), sizeof(crud::mahasiswa));
    return readMahasiswa;
}

void crud::addDataMahasiswa(std::fstream &data)
{

    mahasiswa inputMahasiswa, lastMahasiswa;

    int size = getDataSize(data);
    // std::cout << "ukuran data : " << size << std::endl;

    if (size == 0)
    {
        inputMahasiswa.pk = 1;
    }
    else
    {
        lastMahasiswa = readData(data, size);
        // std::cout << "pk = " << lastMahasiswa.pk << std::endl;
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    // readData(data, size);
    std::cout << "Nama: ";
    std::cin.getline(inputMahasiswa.nama, 50);
    std::cout << "NIM: ";
    std::cin >> inputMahasiswa.NIM;
    fflush(stdin);
    std::cout << "Jurusan: ";
    std::cin.getline(inputMahasiswa.jurusan, 50);
    std::cout << "Asal Sekolah: ";
    std::cin.getline(inputMahasiswa.asalSekolah, 50);
    std::cout << "Tempat Tanggal Lahir: ";
    std::cin.getline(inputMahasiswa.ttl, 50);
    std::cout << "Email: ";
    std::cin.getline(inputMahasiswa.email, 50);

    writeData(data, size + 1, inputMahasiswa);
}

void crud::displayDataMahasiswa(std::fstream &data)
{
    int size = getDataSize(data);
    mahasiswa showMahasiswa;
    std::cout << std::setfill('-') << std::setw(175) << "-" << std::setfill(' ') << std::endl;

    std::cout << std::right << "|" << std::setw(5) << "No"
              << std::setw(25) << "Nama"
              << std::setw(15) << "NIM"
              << std::setw(30) << "Jurusan"
              << std::setw(30) << "Asal Sekolah"
              << std::setw(30) << "TTL"
              << std::setw(30) << "Email"
              << std::setw(9) << "|" << std::endl;

    for (int i = 1; i <= size; i++)
    {
        showMahasiswa = readData(data, i);
        std::cout << std::setfill('-') << std::setw(175) << "-" << std::setfill(' ') << std::endl;
        std::cout << std::right << "|" << std::setw(5) << i
                  << std::setw(25) << showMahasiswa.nama
                  << std::setw(15) << showMahasiswa.NIM
                  << std::setw(30) << showMahasiswa.jurusan
                  << std::setw(30) << showMahasiswa.asalSekolah
                  << std::setw(30) << showMahasiswa.ttl
                  << std::setw(30) << showMahasiswa.email << std::setw(9) << "|" << std::endl;
    }
    std::cout << std::setfill('-') << std::setw(175) << "-" << std::setfill(' ') << std::endl;
}

void crud::updateRecord(std::fstream &data)
{
    int nomor;
    int pilihan = 0;
    char is_continue;
    mahasiswa UpdateMahasiswa;
    std::cout << "pilih no: ";
    std::cin >> nomor;
    fflush(stdin);

    while (pilihan == 0)
    {
        UpdateMahasiswa = readData(data, nomor);
        std::cout << std::setfill('-') << std::setw(175) << "-" << std::setfill(' ') << std::endl;
        std::cout << "pilihan data: " << std::endl;
        std::cout << "[1] NIM :" << UpdateMahasiswa.NIM << std::endl;
        std::cout << "[2] Nama :" << UpdateMahasiswa.nama << std::endl;
        std::cout << "[3] Jurusan :" << UpdateMahasiswa.jurusan << std::endl;
        std::cout << "[4] Asal Sekolah :" << UpdateMahasiswa.asalSekolah << std::endl;
        std::cout << "[5] Tempat Tanggal Lahir :" << UpdateMahasiswa.ttl << std::endl;
        std::cout << "[6] Email :" << UpdateMahasiswa.email << std::endl;
        std::cout << std::setfill('-') << std::setw(175) << "-" << std::setfill(' ') << std::endl;
        std::cout << "\nMerubah Data[1-6]: ";
        std::cin >> pilihan;
        fflush(stdin);
        switch (pilihan)
        {
        case 1:
            std::cout << "NIM: ";
            std::cin >> UpdateMahasiswa.NIM;
            fflush(stdin);
            break;
        case 2:
            std::cout << "Nama: ";
            std::cin.getline(UpdateMahasiswa.nama, 50);
            break;
        case 3:
            std::cout << "Jurusan: ";
            std::cin.getline(UpdateMahasiswa.jurusan, 50);
            break;
        case 4:
            std::cout << "Asal Sekolah: ";
            std::cin.getline(UpdateMahasiswa.asalSekolah, 50);
            break;
        case 5:
            std::cout << "Tempat Tanggal Lahir: ";
            std::cin.getline(UpdateMahasiswa.ttl, 50);
        case 6:
            std::cout << "Email: ";
            std::cin.getline(UpdateMahasiswa.email, 50);
            break;
        default:
            std::cout << "Nilai tidak valid!!" << std::endl;
            pilihan = 0;
            break;
        }
    Lanjutkan:
        std::cout << "Lanjutkan[y/n]? : ";
        std::cin >> is_continue;
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
            std::cout << "Nilai tidak valid!!" << std::endl;
            goto Lanjutkan;
        }
        writeData(data, nomor, UpdateMahasiswa);
    }
}

void crud::deleteRecord(std::fstream &data)
{
    int nomor, size, offset;
    mahasiswa blackMahasiswa, tempMahasiswa;
    std::fstream dataSementara;
    size = getDataSize(data);
    // 1. pilih nomor
    std::cout << "Hapus nomor: ";
    std::cin >> nomor;
    // 2. di posisi ini diisi dengan dat kosong
    writeData(data, nomor, blackMahasiswa);
    // 3. kita akan cek data dari data.bin, kalau ada data kita pindahkan ke file semenntara
    dataSementara.open("temp.dat", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

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
            std::cout << "delete item" << std::endl;
        }
    }

    // 4. kita pindahakan data dari file semenstara ke data.bin
    size = getDataSize(dataSementara);
    data.close();
    data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::binary);
    data.close();
    data.open("data.bin", std::ios::out | std::ios ::in | std::ios::binary);
    for (int i = 1; i <= size; i++)
    {
        tempMahasiswa = readData(dataSementara, i);
        writeData(data, i, tempMahasiswa);
    }
}