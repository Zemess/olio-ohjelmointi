#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{


    double Hinta=1.0;

    Kerrostalo *oliotalo = new Kerrostalo;

    oliotalo -> laskeKulutus(Hinta);

    cout << "Kerrostalon kulutus = " << oliotalo->laskeKulutus(Hinta) << endl;

    delete oliotalo;
    oliotalo = nullptr;

    return 0;
}
