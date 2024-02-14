#include "asunto.h"
#include <iostream>


Asunto::Asunto()
{
    cout << "Asunto on luotu" << endl;
}

void Asunto::maarita(int asukas, int neliomaara)
{
    asukasMaara = asukas;
    neliot = neliomaara;
    cout << "Asuntomaaritetty asukkaita= "<< asukas << " nelioita= " << neliomaara << endl;
}

double Asunto::laskeKulutus(double kulutusluku)
{
    return kulutusluku * asukasMaara * neliot;
}

