
#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    cout << "kerrostalo on luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
}
double Kerrostalo::laskeKulutus(double kk){

    return eka.laskeKulutus(kk) + toka.laskeKulutus(kk) + kolmas.laskeKulutus(kk);

}

