//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT8_H
#define UNTITLED_ETAT8_H

#include "Etat.h"

class Etat8 : public Etat{
public :
    Etat8(){

    }
    ~Etat8() {

    }
    virtual void transition(Automate * d, Symbole * s);
};


#endif //UNTITLED_ETAT8_H
