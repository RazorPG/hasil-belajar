#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    string nama;

    // constructor saat di buat
    Player(const char *nama)
    {

        Player::nama = nama;
        cout << "player " << Player::nama << " dibuat" << endl;
    }

    // destructor saat di delete
    ~Player()
    {
        cout << "player " << Player::nama << " dihapus" << endl;
    }
};

void membuatPlayerStack()
{
    Player stackPlayer = Player("stack");
}

void membuatPlayerHeap()
{
    Player *heapPlayer = new Player("heap");
    delete heapPlayer;
}

void membuatPlayerStackPtr(Player *&playerPtr)
{
    Player stackPlayer = Player("stack");
    playerPtr = &stackPlayer;
}

void membuatPlayerHeapPtr(Player *&playerPtr)
{
    Player *heapPlayer = new Player("heap");
    playerPtr = heapPlayer;
    // delete heapPlayer;
}

Player createStackPlayer()
{
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}

Player *createHeapPlayer()
{
    Player *heapPlayer = new Player("heap di create");
    return heapPlayer;
}

int main(int argc, char const *argv[])
{
    membuatPlayerStack();
    membuatPlayerHeap();

    // simulasi memory leak
    cout << "\nMemory Leak" << endl;
    Player *playerPtr1;
    membuatPlayerStackPtr(playerPtr1);
    // cout << (*playerPtr1).nama << endl; // terjadi nilai random

    Player *playerPtr2;
    membuatPlayerHeapPtr(playerPtr2);
    cout << playerPtr2->nama << endl; // leak memory
    playerPtr2->nama = "acak-acakan";
    cout << playerPtr2->nama << endl; // leak memory
    delete playerPtr2;
    // cout << playerPtr2->nama << endl; // memory free

    cout << "\nreturn Object" << endl;
    Player playerReturnStack = createStackPlayer();
    cout << playerReturnStack.nama << endl;

    Player *playerReturnHeap = createHeapPlayer();
    cout << playerReturnHeap->nama << endl;
    delete playerReturnHeap;

    return 0;
}
