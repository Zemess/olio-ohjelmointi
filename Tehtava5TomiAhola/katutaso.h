
#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    Asunto * as1 = new Asunto;
    Asunto * as2 = new Asunto;
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H

