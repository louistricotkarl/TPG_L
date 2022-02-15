//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT6_H
#define UNTITLED_ETAT6_H

#include "Etat.h"

class Etat6 : public Etat{
public :
    Etat6(){

    }
    ~Etat6() {

    }
    virtual void transition(Automate * d, Symbole * s);
};


#endif //UNTITLED_ETAT6_H
