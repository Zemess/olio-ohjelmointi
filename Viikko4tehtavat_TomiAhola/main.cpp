#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    // Kommentoituna Aikaisempien tehtävien lopputulokset.


    Kerrostalo asu;
    double Hinta=1.0;
    cout << "Kerrostalon kulutus = " << asu.laskeKulutus(Hinta) << endl;
    // cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << Hinta << " on " << asu.laskeKulutus(Hinta) << endl;
    // cout << "Asunnon kulutus, kun hinta = " << Hinta << " on " << asu.laskeKulutus(Hinta) << endl;
    return 0;
}
