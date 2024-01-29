#include <iostream>
#include <string>

// ekstermal definision
#include "player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Player *playerObject = new Player("roronoa zoro");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;
    playerObject->setName("rafid hilmi");
    playerObject->display();
    return 0;
}