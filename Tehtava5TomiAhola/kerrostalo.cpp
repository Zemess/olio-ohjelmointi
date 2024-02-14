
#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "kerrostalo on luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();

}
double Kerrostalo::laskeKulutus(double kk){

    return eka->laskeKulutus(kk) + toka->laskeKulutus(kk) + kolmas->laskeKulutus(kk);

}
Kerrostalo::~Kerrostalo(){
    delete eka;
    delete toka;
    delete kolmas;
    eka = nullptr;
    toka = nullptr;
    kolmas = nullptr;
}
