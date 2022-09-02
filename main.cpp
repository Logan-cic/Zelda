#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"

int main( )
{
    cout << "Usando Sword no main\n";
    

    Sword royalGuardSword;
    royalGuardSword.print();
    royalGuardSword.decrement();
    royalGuardSword.print();

    return 0;

}