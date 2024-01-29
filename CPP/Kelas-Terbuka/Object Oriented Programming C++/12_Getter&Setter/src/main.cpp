#include <iostream>
#include <string>
#include "player.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player player1 = Player("Shizuma"); // ini adalah object di stack
    player1.display();

    // implementasi dari gatter
    cout << player1.getName() << endl; // read only
    // player1.name = "Lee"; // tidak bisa write

    // kegiatan bertarung
    cout << "bertarung" << endl;
    player1.addExp(25); // setter
    player1.display();
    player1.addExp(52);
    player1.display();
    player1.addExp(12);
    player1.display();
    player1.addExp(64);

    // hasilnya
    player1.display();

    // bertarung lagi
    cout << "bertarung" << endl;
    player1.addExp(25); // setter
    player1.display();
    player1.addExp(52);
    player1.display();
    player1.addExp(12);
    player1.display();
    player1.addExp(64);
    return 0;
}
