//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT0_H
#define UNTITLED_ETAT0_H

#include "Etat.h"
#include "../symbole.h"
#include "../Automate.h"

class Etat0 : public Etat {

public :

    Etat0(){

    }
    ~Etat0() {

    }

    virtual void transition(Automate * d, Symbole * s);
};


#endif //UNTITLED_ETAT0_H
