
#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso * eka = new Katutaso;
    Kerros * toka = new Kerros;
    Kerros * kolmas = new Kerros;
};

#endif // KERROSTALO_H

