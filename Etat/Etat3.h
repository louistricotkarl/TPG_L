//
// Created by louis on 15/02/2022.
//

#ifndef UNTITLED_ETAT3_H
#define UNTITLED_ETAT3_H


#include "Etat.h"

class Etat3 : public Etat{

public :

    Etat3(){

    }
    ~Etat3() {

    }

    virtual void transition(Automate * d, Symbole * s);
};

#endif //UNTITLED_ETAT3_H
