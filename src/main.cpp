#include <iostream>
#include "Character.H"

using namespace std; // No longer need to put std in front of cout and cin, nice quality of life change

int main(){
    Character* p = new Protagonist(); // Unknown name
    cout << p->getName() << "\n";

    p = new Protagonist("Jane Doe"); // Protagonist with set name
    cout << p->getName() << "\n";
}