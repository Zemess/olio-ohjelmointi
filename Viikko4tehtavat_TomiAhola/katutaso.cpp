#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "katutaso on luotu" << endl;
}
void Katutaso::maaritaAsunnot(){
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double Ahinta){

    return as1.laskeKulutus(Ahinta) + as2.laskeKulutus(Ahinta) + Kerros::laskeKulutus(Ahinta);
}
