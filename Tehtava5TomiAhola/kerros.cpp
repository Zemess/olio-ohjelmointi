#include "kerros.h"

Kerros::Kerros()
{
    cout << "kerros on luotu" << endl;
}
void Kerros::maaritaAsunnot(){
    cout << "maaritetaan 4 kpl asuntoja" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}
double Kerros::laskeKulutus(double kulutushinta)
{
    return as1->laskeKulutus(kulutushinta) + as2->laskeKulutus(kulutushinta) + as3->laskeKulutus(kulutushinta) + as4->laskeKulutus(kulutushinta);
}
Kerros::~Kerros(){
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    as1 = nullptr;
    as2 = nullptr;
    as3 = nullptr;
    as4 = nullptr;
}

