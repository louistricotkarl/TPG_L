//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT0_H
#define UNTITLED_ETAT0_H

#include "etat.h"
#include "../symbole.h"
#include "../automate.h"

class Etat0 : public Etat {

public :

    Etat0(){

    }
    virtual void transition(Automate & d, Symbole & s);
};


#endif //UNTITLED_ETAT0_H
