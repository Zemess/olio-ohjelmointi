#include "italianchef.h"

ItalianChef::ItalianChef(string knimi, int water, int flour):Chef(knimi)
{
    vesi = water;
    jauhot =flour;
    name = knimi;
    cout << "Chef " << getName() << " konstruktori" << endl;
}
string ItalianChef::getName()
{
    return name;
}
void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << "jauhot = " << jauhot << endl;
    cout << "Chef " << getName() << "vesi = " << vesi << endl;
}


