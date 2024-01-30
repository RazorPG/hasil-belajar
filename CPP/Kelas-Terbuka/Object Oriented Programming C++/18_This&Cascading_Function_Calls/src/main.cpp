#include <iostream>

using namespace std;

class Player
{
private:
    string nama_depan;
    string nama_tengah;
    string nama_belakang;

public:
    Player()
    {
        nama_depan = "depan";         // menggunakan teknik implisit
        this->nama_tengah = "tengah"; // teknik explicit dengan menggunakan pointer this
                                      //  Player::nama_belakang = "belakang"; // teknik explicit
        (*this).nama_belakang = "belakang";
    }

    // kita bisa melakukan cascade function calls dengan *this
    Player &setNamaDepan(const char *depan)
    {
        this->nama_depan = depan;
        return *this;
    }

    Player &setNamaTengah(const char *tengah)
    {
        this->nama_tengah = tengah;
        return *this;
    }

    Player &setNamaBelakang(const char *belakang)
    {
        (*this).nama_belakang = belakang;
        return *this;
    }

    void display()
    {
        cout << "Nama: ";
        cout << " " << nama_depan;
        cout << " " << this->nama_tengah;
        cout << " " << (*this).nama_belakang << endl;
    }
};

int main(int argc, char const *argv[])
{
    Player *player1 = new Player();
    player1->display();

    player1->setNamaDepan("razor");
    player1->setNamaTengah("D.");
    player1->setNamaBelakang("SAN");
    player1->display();

    // cascade function calls
    // player1->setNamaDepan("Marshall").setNamaTengah("D.").setNamaBelakang("Teach");
    player1->setNamaDepan("shaka").setNamaTengah("pytagoras").setNamaBelakang("lilits");
    player1->display();

    Player player2 = Player();
    player2.display();
    player2.setNamaDepan("Trafalgar").setNamaTengah("D.").setNamaBelakang("waterlaw");
    player2.display();
    return 0;
}
