
#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    ~Kerros();
    Asunto * as1 = new Asunto;
    Asunto * as2 = new Asunto;
    Asunto * as3 = new Asunto;
    Asunto * as4 = new Asunto;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KERROS_H

