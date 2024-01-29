#ifndef _MAHASISWA
#define _MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa
{
public: // ini dapat diakses oleh siapapun
    std::string namePublic;

private: // ini hanya dapat diakses oleh class itu sendiri
    std::string namePrivate;

    // methods dan constructor
public:
    // constructor selalu public
    Mahasiswa(const char *name);
    void showDisplay();

private:
    void showDisplayPrivate();
};

#endif